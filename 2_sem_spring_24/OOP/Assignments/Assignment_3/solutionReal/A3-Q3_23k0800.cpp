#include <iostream>
using namespace std;

template <class T>
class Matrix
{
protected:
    T **arr;
    int rows;
    int cols;

public:
    Matrix();
    
    Matrix(int _rows, int _cols)
    {
        this->rows = _rows;
        this->cols = _cols;
        arr = new T *[_rows];
        for (int i = 0; i < _rows; ++i)
        {
            arr[i] = new T[_cols]();
        }
        for(int i=0;i<rows;++i){
            for(int j=0;j<cols;++j){
                arr[i][j]=0;
            }
        }
    }
    T getElement(int i, int j)
    {
        while (i >= rows || i < 0)
        {
            cout << "Enter Correct Row Number" << endl;
            cin >> i;
        }
        while (j >= cols || j < 0)
        {
            cout << "Enter Correct Column Number" << endl;
            cin >> j;
        }
        return arr[i][j];
    }
    void setElement(int i, int j, T val)
    {
        while (i >= rows || i < 0)
        {
            cout << "Enter Correct Row Number" << endl;
            cin >> i;
        }
        while (j >= cols || j < 0)
        {
            cout << "Enter Correct Column Number" << endl;
            cin >> j;
        }
        arr[i][j] = val;
    }
    void setMatrix()
    {
        T temp;
        for (int i = 0; i < rows; ++i)
        {
            cout << "Row: " << i+1 << endl;
            for (int j = 0; j < cols; ++j)
            {
                
                cin >> arr[i][j];
        cin.ignore();
            }
        }
    };
    virtual void display()
    {
        cout << "Displaying General Matrix" << endl;
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    ~Matrix()
    {
        for (int i = 0; i < rows; ++i)
        {
            delete[] arr[i];
        };
        delete[] arr;
    }

    Matrix<T> operator+(Matrix<T> &other)
    {
        // considering that rows and columns of both matrices are same
        Matrix<T> temp(rows, cols);
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                temp.arr[i][j] = arr[i][j] + other.arr[i][j];
            }
        }
        return temp;
    };
    Matrix<T> operator-(Matrix<T> &other)
    {
        // considering that rows and columns of both matrices are same
        Matrix<T> temp(rows, cols);
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                temp.arr[i][j] = arr[i][j] - other.arr[i][j];
            }
        }
        return temp;
    };
    Matrix<T> operator*(Matrix<T> &other)
    {
        Matrix<T> temp(rows, other.cols);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < other.cols; ++j)
                for (int k = 0; k < cols; ++k)
                {
                    temp.arr[i][j] += arr[i][k] * other.arr[k][j];
                }
        return temp;
    };
};

class IntMatrix : public Matrix<int>
{
public:
    IntMatrix() {}
    IntMatrix(int rows, int cols) : Matrix<int>::Matrix(rows, cols) {}
    void display()
    {
        cout << "Displaying Integer Matrix" << endl;
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

class DoubleMatrix : public Matrix<double>
{
public:
    DoubleMatrix();
    DoubleMatrix(int rows, int cols) : Matrix<double>::Matrix(rows, cols) {}
    void display()
    {
        cout << "Displaying Double Matrix" << endl;
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    cout << "23k-0800 Muhammad Mufeez" << endl;
    cout<<"int matrix class"<<endl;
    IntMatrix m1(2, 3);
    DoubleMatrix m2(3, 2);
    m1.setMatrix();
    cout<<"double matrix class"<<endl;
    m2.setMatrix();
    m1.display();
    m2.display();



    Matrix<int> mt(3, 3);
    Matrix<int> mt1(3, 3);
    mt.setMatrix();
    mt.display();
    mt1.setMatrix();
    mt1.display();
    Matrix<int> mt2 = mt + mt1;
    cout<<"added"<<endl;
    mt2.display();
    cout<<"subtracted"<<endl;
    Matrix<int> mt3 = mt - mt1;
    mt3.display();
    cout<<"multiplied"<<endl;
    Matrix<int> mt4 = mt * mt1;
    mt4.display();
    return 0;
}