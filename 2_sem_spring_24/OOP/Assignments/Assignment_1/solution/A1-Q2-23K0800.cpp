#include <iostream>
#include <cmath>
using namespace std;
class table
{
private:
    int seats;
    int occupiedSeats;
    int freeSeats;
    bool clean;

public:
    int GetSeats() const
    {
        return seats;
    }

    int GetOccupiedSeats() const
    {
        return occupiedSeats;
    }

    void SetOccupiedSeats(int occupiedSeats)
    {
        this->occupiedSeats = occupiedSeats;
        freeSeats = seats - occupiedSeats;
    }

    int GetFreeSeats() const
    {
        return freeSeats;
    }

    void SetFreeSeats(int freeSeats)
    {
        this->freeSeats = freeSeats;
        occupiedSeats = seats - freeSeats;
    }

    bool GetClean() const
    {
        return clean;
    }

    void SetClean(bool clean)
    {
        this->clean = clean;
    }

    table() : seats(4), occupiedSeats(0), freeSeats(4), clean(1) {}
    table(int capacity) : occupiedSeats(0), clean(1)
    {
        if (capacity == 4 || capacity == 8)
        {
            seats = capacity;
        }
        else
        {
            seats = round(capacity / 4.0) * 4.0;
            // if user enters number more than 12 than the seats will be 12, thats why the following will handle this error
            if (seats > 8)
                seats = 8;
        }
        freeSeats = seats;
    }
    void usingTheTable()
    {
        cout << "\nStudents are using the table";
    }
    void havingLunchOnTable()
    {
        cout << "\nStudents are having lunch on table";
        this->SetClean(0);
    }
    void leavingTheTable()
    {
        cout << "\nStudents are about to leave";
    }
    void cleaningTheTable()
    {
        cout << "\nTable is being  cleaned";
        this->SetClean(1);
    }
};

void OccupyTable(table *tables, int size)
{
    bool found = false;
    for (int i = 0; i < 5; ++i)
    {
        if (tables[i].GetOccupiedSeats() == 0 && tables[i].GetSeats() >= size)
        {
            cout << "\nTable found, you have been assigned the table no " << i + 1 << ", please be seated, seating capacity of table is: " << tables[i].GetSeats();
            tables[i].SetOccupiedSeats(size);
            found = true;
            break;
        }
    }
    if (found == false)
    {
        cout << "\n Sorry none of the tables is free" << endl;
    }
}
void emptyTable(int number, table *tables)
{
    // tables[number].SetClean(1);
    tables[number].SetOccupiedSeats(0);
    cout << "\n Table is empty now";
}
int main()
{
    cout << "23k0800 Muhammad Mufeez" << endl;
    table tables[5];
    for (int i = 0; i < 5; i++)
    {
        if (i < 2)
            tables[i] = table(7);

        else
            tables[i] = table(2);
    }
    OccupyTable(tables, 4);
    OccupyTable(tables, 6);
    tables[0].usingTheTable();
    tables[0].havingLunchOnTable();
    tables[0].leavingTheTable();
    tables[0].cleaningTheTable();

    emptyTable(1, tables);

    return 0;
}
