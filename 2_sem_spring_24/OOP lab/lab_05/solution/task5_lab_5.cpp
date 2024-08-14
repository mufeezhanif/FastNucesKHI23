#include <iostream>
using namespace std;


class book
{
private:
    string title;
    string author;
    string ISBN;
    string genre;
    bool borrowed;

public:
    bool GetBorrowed() const
    {
        return borrowed;
    }

    void SetBorrowed(bool borrowed)
    {
        this->borrowed = borrowed;
    }

    string GetTitle() const
    {
        return title;
    }

    string GetAuthor() const
    {
        return author;
    }

    string GetISBN() const
    {
        return ISBN;
    }

    string GetGenre() const
    {
        return genre;
    }
    book(){};
    book(string title, string author, string ISBN, string genre) : title(title), author(author), ISBN(ISBN), genre(genre), borrowed(0) {}
    void displayBookDetails() const
    {
        cout << "\nTitle: " << GetTitle() << endl;
        cout << "Author: " << GetAuthor() << endl;
        cout << "ISBN: " << GetISBN() << endl;
        cout << "Genre: " << GetGenre() << endl;
    }
};

class fines
{
private:
    int static finePerDay;
    int noOfDelayDays;
    int fine;

public:
    fines() : noOfDelayDays(0), fine(0) {} // lets say that user still has time to return the book
    int GetfinePerDay() const
    {
        return finePerDay;
    }

    int GetNoOfDelayDays() const
    {
        return noOfDelayDays;
    }
    void SetNoOfDelayDays(int noOfDelayDays)
    {
        this->noOfDelayDays = noOfDelayDays;
    }
    int calFine()
    {
        fine = finePerDay * noOfDelayDays;
    }
    int GetFine()
    {
        this->calFine();
        return fine;
    }
};

int fines::finePerDay = 50; // rs 50 per day fine

class Patrons
{
public:
    const string Name;
    book *booksBorrowed[5]; // Maximum number of books a patron can borrow at once is 5.
    int borrowedBooks;

public:
    Patrons(string name, int borrowedBooks = 0) : Name(name){};
    int getborrowedBooks()
    {
        return borrowedBooks;
    }
    string getName()
    {
        return Name;
    };
    void borrowBook(book *b)
    {
        if (borrowedBooks < 5 || b->GetBorrowed() != 1)
        {
            booksBorrowed[borrowedBooks] = b;
            borrowedBooks++;
            b->SetBorrowed(1);
            loans::AddNewRecord(*this);
        }
        else
        {
            cout << "\nThis patron has reached the maximum amount of books or the book is not available ." << endl;
        }
    };
    void returnBook(book *b)
    {
        int i = 0;
        for (i = 0; i < borrowedBooks; i++)
        {

            if (booksBorrowed[i] == b)
            {

                for (int j = i; j < borrowedBooks - 1; j++)
                {
                    booksBorrowed[j] = booksBorrowed[j + 1];
                }
                loans::updateLoanRecord(this->getName(), booksBorrowed[i]->GetTitle());

                b->SetBorrowed(0);
                break;
            };
        }

        borrowedBooks--;
    };

    void displayBorrowedBooks()
    {
        for (int i = 0; i < borrowedBooks; i++)
        {
            cout << "\nBook  " << i + 1 << ": ";
            booksBorrowed[i]->displayBookDetails();
        };
    };
};

class loans
{
public:
    typedef struct
    {
        string Name;
        book *booksBorrowed;
        int borrowedBooks;
        string issueDate;
        string dueDate;
        bool isborrowed;
        fines fineobj;
    } loan;
    loan static record[100]; // max records that can be stored are 100
    int static numberOfLoanRecords;

public:
    void static AddNewRecord(Patrons &patron)
    {
        if (patron.getborrowedBooks() > 1)
        {
            // agar 1 hi name k patron ne more than one books borrow ki hen to sbka alag record banega
            for (int i = 0; i < record[numberOfLoanRecords].borrowedBooks; i++)
            {
                record[numberOfLoanRecords].Name = patron.getName();
                record[numberOfLoanRecords].isborrowed = 1;
                record[numberOfLoanRecords].borrowedBooks = patron.getborrowedBooks();

                record[numberOfLoanRecords].booksBorrowed = patron.booksBorrowed[i];
                numberOfLoanRecords++;
            }
        }
        else
        {
            // else tab execute hoga jab patron ne only one book borrow ki hogi
            numberOfLoanRecords = 0;

            record[numberOfLoanRecords].Name = patron.getName();
            record[numberOfLoanRecords].isborrowed = 1;
            record[numberOfLoanRecords].borrowedBooks = patron.getborrowedBooks();
            record[numberOfLoanRecords].booksBorrowed = patron.booksBorrowed[0];
            cout << "\n Enter issued date of the book "
                 << "' " << record[numberOfLoanRecords].booksBorrowed->GetTitle() << " ' " << endl;
            cin >> record[numberOfLoanRecords].issueDate;
            cout << "\n Enter due date of the book:  " << endl;
            cin >> record[numberOfLoanRecords].dueDate;
            numberOfLoanRecords++;
        }
    }
    void static updateLoanRecord(string name, string title)
    {
        for (int i = 0; i < numberOfLoanRecords; i++)
        {
            if (record[i].booksBorrowed->GetTitle() == title && record[i].Name == name)
            {
                record[i].isborrowed = 0;
            }
        }
    };
    void displayAllLoanRecords()
    {
        for (int i = 0; i < numberOfLoanRecords; i++)
        {
            cout << "\n\tRecord No: " << i + 1 << endl;
            cout << "Patron Name : " << record[i].Name << endl;
            cout << "Number of Books Borrowed : " << record[i].borrowedBooks << endl;
            cout << "Details Of Borrowed Book: " << endl;
            record[i].booksBorrowed->displayBookDetails();
            cout << "Issued Date : " << record[i].issueDate << endl;
            cout << "Due Date : " << record[i].dueDate << endl;
            cout << "Status : ";
            if (record[i].isborrowed == 1)
                cout << "Borrowed \n";
            else
                cout << "Returned \n";
            cout << "Fine: " << record[i].fineobj.GetFine()
                 << endl;
        }
    }
};

class LibraryManagementSystem
{
public:
    book books[100];     // lets say we will not have more than 100 books;
    Patrons patrons[50]; // lets assume that there are maximum 50 patrons in our library system
    loans loans;
    int n_book;
    int n_patrons;

    string title;
    string author;
    string ISBN;
    string genre;

public:
    LibraryManagementSystem(int b_books = 0, int p_patrons = 0);
    void addNewBook()
    {
        cout << "\nEnter title of book: " << endl;
        cin.ignore();
        getline(cin, title);
        cout << "\nEnter author of book: " << endl;
        cin.ignore();
        getline(cin, author);
        cout << "\nEnter ISBN of book: " << endl;
        cin.ignore();
        cin >> ISBN;
        cout << "\nEnter Genre of the Book: " << endl;
        cin.ignore();
        getline(cin, genre);
        books[n_book] = book(title, author, ISBN, genre);
        n_book++;
    }
    void removeBook()
    {
        cout << "\nEnter title of book: " << endl;
        cin.ignore();
        getline(cin, title);
        for (int i = 0; i < n_book; i++)
        {
            if (books[i].GetTitle() == title)
            {
                for (int j = i; j < n_book - 1; ++j)
                {
                    books[j] = books[j + 1];
                }
                --n_book;
                break;
            }
        };}
        void addPatreon
    };
    int main()
    {

        return 0;
    };