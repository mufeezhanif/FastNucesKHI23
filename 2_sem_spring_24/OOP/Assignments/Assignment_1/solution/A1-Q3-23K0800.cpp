#include <iostream>
#include <string>

using namespace std;
class ChessPiece
{
private:
    string name;
    string color;
    string symbol;

public:
    string GetName() const
    {
        return name;
    }

    void SetName(string name)
    {
        this->name = name;
    }

    string GetColor() const
    {
        return color;
    }

    void SetColor(string color)
    {
        this->color = color;
    }

    string GetSymbol() const
    {
        return symbol;
    }

    void SetSymbol(string symbol)
    {
        this->symbol = symbol;
    }
    ChessPiece()
    {
        name = "pawn";
        color = "white";
        symbol = "p";
    }

    ChessPiece(string name, string color, string symbol)
    {
        this->name = name;
        this->color = color;
        this->symbol = symbol;
    }
};

class ChessBoard
{
public:
    ChessPiece *table[8][8];

public:
    ChessBoard()
    {
        string names[] = {"rook", "knight", "bishop", "queen", "king", "bishop", "knight", "rook"};
        string symbols_white[] = {"r", "n", "b", "q", "k", "b", "n", "r"};
        string symbols_black[] = {"R", "N", "B", "Q", "K", "B", "N", "R"};
        for (int i = 0; i < 8; ++i)
        {
            for (int j = 0; j < 8; ++j)
            {
                if (i == 0)
                {
                    table[i][j] = new ChessPiece(names[j], "black", symbols_black[j]);
                }
                else if (i == 1)
                {
                    table[i][j] = new ChessPiece("pawn", "black", "P");
                }
                else if (i == 6)
                {
                    table[i][j] = new ChessPiece();
                }
                else if (i == 7)
                {
                    table[i][j] = new ChessPiece(names[j], "white", symbols_white[j]);
                }
                else
                {
                    table[i][j] = nullptr;
                }
            }
        }
    }
    void display()
    {
        for (int i = 0; i < 8; ++i)
        {
            for (int j = 0; j < 8; ++j)
            {
                if (table[i][j] == nullptr)
                    cout << "-\t";
                else
                    cout << table[i][j]->GetSymbol() << "\t";
            }
            cout << "\n";
        }
    }
    bool movePiece(string s, string d)
    {
        int y1 = s[0] - 'a';
        int x1 = s[1] - '1';
        x1 = 7 - x1;
        int y2 = d[0] - 'a';
        int x2 = d[1] - '1';
        x2 = 7 - x2;

        if (table[x1][y1]->GetName() == "knight")
        {
            if (((x2 == x1 + 2) && ((y2 == y1 + 1) || (y2 == y1 - 1))) ||
                ((x2 == x1 - 2) && ((y2 == y1 + 1) || (y2 == y1 - 1))) ||
                ((y2 == y1 + 2) && ((x2 == x1 + 1) || (x2 == x1 - 1))) ||
                ((y2 == y1 - 2) && ((x2 == x1 + 1) || (x2 == x1 - 1))))
            {
                if (table[x2][y2] != nullptr)
                    return false;
                else
                    return true;
            }
            else
                return false;
        }
        else if (table[x1][y1]->GetName() == "pawn")
        {
            if (x1 == x2 && ((y2 == y1 + 1) || (y2 == y1 + 2) || (y2 == y1 - 1) || (y2 == y1 - 2)))
            {
                if (table[x2][y2] != nullptr)
                    return false;
                else
                    return true;
            }
            else
                return false;
        }
        else if (table[x1][y1]->GetName() != "knight" && table[x1][y1]->GetName() != "pawn")
        {
            cout << "\n\tFirst move can be done only on pawn or knight, so write initial position of any of them" << endl;
            return false;
        }
        else
            return false;
    }
    ~ChessBoard()
    {
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; ++j)
            {
                delete table[i][j];
                table[i][j] = nullptr;
            }
        }
    }
};

int main()
{
    cout << "Muhammad Mufeez 23k0800" << endl;
    ChessBoard c1;
    c1.display();
    bool hello;
    hello = c1.movePiece("b8", "a6");
    if (hello == true)
        cout << "\n successful" << endl;
    else
        cout << "\n failed" << endl;
    hello = c1.movePiece("b8", "d7");
    if (hello == true)
        cout << "\n successful" << endl;
    else
        cout << "\n failed" << endl;
    string start, destination;
    cout << "Enter staarting position: " << endl;
    cin >> start;
    cout << "Enter destination: " << endl;
    cin >> destination;
    hello = c1.movePiece(start, destination);
    if (hello == true)
        cout << "\n successful" << endl;
    else
        cout << "\n failed" << endl;
    return 0;
}