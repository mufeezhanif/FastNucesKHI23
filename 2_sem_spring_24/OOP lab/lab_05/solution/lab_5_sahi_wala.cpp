#include <iostream>
using namespace std;


class Book
{
private:
    string title;
    string author;
    string isbn;
    string genre;
    bool borrow;

public:
    Book(string t, string a, string i, string g) : title(t), author(a), isbn(i), genre(g), borrow(0) {}

    void setborrow(bool b)
    {
        borrow = b;
    }
    bool getborrow()
    {
        return borrow;
    }

    string gettitle()
    {
        return title;
    }

    string getauthor()
    {
        return author;
    }

    string getisbn()
    {
        return isbn;
    }

    string getgenre()
    {
        return genre;
    }
};

class Patron
{
private:
    string name;
    Book *booksBorrowed[100];
    int count;

public:
    Patron(string n): name(n), count(0){}
    string getname()
    {
        return name;
    }
    void borrowbook(Book *book)
    {
        if (book->getborrow() == 0)
        {
            book->setborrow(1);
            booksBorrowed[count++] = book;
            cout << "Book Borrowed successfully " << endl;
        }
        else
        {
            cout << "Book can't be borrowed" << endl;
        }
    }
};

class loan
{
private:
    Patron *patronRecords[100];
    Book *bookRecords[100];
    string duedate[100];

    int count;
public:
    loan():count(0){}
    void updateloan(Book *booktoaddinrecord, Patron *patrontoaddinrecord, string d)
    {
        bookRecords[count] = booktoaddinrecord;
        patronRecords[count] = patrontoaddinrecord;
        duedate[count] = d;
        count++;
    }

    void displaylist()
    {
        int i;
        for (i = 0; i < count; i++)
        {
            cout << "Book Title: " << bookRecords[i]->gettitle() << endl;
            cout << "Patron:  " << patronRecords[i]->getname() << endl;
            cout << "Due: " << duedate[i] << endl;
        }
    }
};

int main()
{
    Book book1("something by someone", "someone", "687347", "xyz");
    Book book2("100 days of danger", "Danger John", "3497", "abacada");
    Patron patron2("someone");
    Patron patron1("mufeez");
    loan list;
    list.updateloan(&book1, &patron1, "32-Dec-23");
    list.updateloan(&book2, &patron1, "04-March-2024");
    patron1.borrowbook(&book1);
    patron2.borrowbook(&book1);
    patron1.borrowbook(&book2);
    list.displaylist();

    return 0;
}