#include <iostream>
#include <vector>
using namespace std;
class Book
{
public:
    string title;
    int price;

public:
    void setPrice(int price) { this->price = price; }
    void setTitle(string title) { this->title = title; }
    int getPrice(void) { return price; }
    string getTitle(void) { return title; }

    Book(string _title, int _price) : title(_title), price(_price) {}
    void displayBookDetails() const
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};
class Inventory
{
public:
    vector<Book> books;
    string title;
    int price;
    void addBook()
    {
        cout << "Enter Title: " << endl;
        cin.ignore();
        getline(cin, title);
        cout << "Enter price: ";
        cin.ignore();
        cin >> price;
        books.push_back(Book(title, price));
    };
    void removeBook()
    {
        cout << "Enter Title: " << endl;
        cin.ignore();
        getline(cin, title);
        for (vector<Book>::iterator it = books.begin(); it != books.end(); ++it)
            if ((*it).getTitle() == title)
                books.erase(it--);
    }
    void displayInventoryItems() const
    {
        cout << "Inventory Items:\n";
        for (int i = 0; i < books.size(); i++)
        {
            cout << "Item #" << i + 1 << "\n";
            books[i].displayBookDetails();
        }
    }
};
class Payment
{
public:
    int total;
    int i;

public:
    Payment() : total(0), i(0) {}
    int calculateBill(vector<Book *> books, int n)
    {

        this->total = 0;
        this->i = 0;
        while (i < n)
        {
            total += books[i++]->getPrice();
        }
        return getTotal();
    }
    int getTotal() { return total; }
};
class Order
{
public:
    vector<Book *> books;
    string customerName;

public:
    Order(string name) : customerName(name) {}
    void addToOrder(Book &book)
    {
        books.push_back(&book);
    }
    void removeFromOrder(Book &book)
    {
        for (int i = 0; i < books.size(); ++i)
        {
            if (books[i]->getTitle() == book.getTitle())
            {
                books[i] = nullptr;
                books.erase(books.begin() + i);
                break;
            }
        }
    }
    void printReceipt(Payment &p)
    {
        cout << "Customer Name: " << customerName << endl;
        for (int i = 0; i < books.size(); ++i)
        {
            cout << "Book  " << i + 1 << ":\n";
            books[i]->displayBookDetails();
        }
        cout << "Total Amount: " << p.calculateBill(books, books.size()) << endl;
    }
};

class bookStoreManagementSystem
{
public:
    Inventory i1;
    int n;
    string title;

public:
    void createNewOrder(Order &Order)
    {
        cin.ignore();
        cout << "How many Books You want to buy?" << endl;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cout << "Enter Title:" << endl;
            cin.ignore();
            getline(cin, title);
            bool check = false;
            for (int j = 0; j < i1.books.size(); ++j)
            {
                check = false;
                if (i1.books[j].getTitle().compare(title) == 0)
                {
                    Order.addToOrder((i1.books[j]));
                    cout << "Book found" << endl;
                    check = true;
                    break;
                }
            }
            if (!check)
            {
                cout << "No book with the title found" << endl;
                --n;
            }
        }
    }

    void removeBookFromOrder(Order &Order)
    {
        cin.ignore();
        cout << "Enter Title:" << endl;
        getline(cin, title);

        for (vector<Book *>::iterator it = Order.books.begin(); it != Order.books.end(); ++it)
        {
            if ((*it)->getTitle().compare(title) == 0)
            {
                Order.removeFromOrder(*(*it));
                break;
            }
        }
    }

    void displayInventoryItems()
    {
        i1.displayInventoryItems();
    }

    void addBook()
    {
        i1.addBook();
    }
    void removeBook()
    {
        i1.removeBook();
    }
    void printreceipt(Order &Order, Payment &p)
    {
        Order.printReceipt(p);
    }
};

int main()
{
    bookStoreManagementSystem bsms;
    Order order("Mufeez");
    Payment payment;
    int choice = 0;
    while (choice != 7)
    {
        cout << "1. Add Book\n2. Remove Book\n3. Display Inventory Items\n4. Create New Order\n5. Remove Book From Order\n6. Print Receipt\n7. Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            bsms.addBook();
            break;
        case 2:
            bsms.removeBook();
            break;
        case 3:
            bsms.displayInventoryItems();
            break;
        case 4:
            bsms.createNewOrder(order);
            break;
        case 5:
            bsms.removeBookFromOrder(order);
            break;
        case 6:
            bsms.printreceipt(order, payment);
            break;
        case 7:
            break;
        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    }
    return 0;
}