#include <iostream>
using namespace std;

template <class T>
class Matrix
{
private:
    T *arr;
    int rows;
    int cols;

public:
    Matrix(int rows, int cols)
    {
        this->rows = rows;
        this->cols = cols;
        arr = new T[rows][cols];
    }
    T getElement(int i, j)
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
    void setMatrix(){
        for (int i = 0; i < rows; ++i)
        {
            cout<<"Row: "<<i<<endl;
            for (int j = 0; j < cols; ++j)
            {
                cin >> arr[i][j];
            }
        }
    };
    virtual void display(){
        cout << "Displaying Matrix from base class" << endl;
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
            delete arr[i]
        };
        delete arr;
    }
    template <T>
    class Matrix<T> operator+(Matrix<T> &other)
    {
        // considering that rows and columns of both matrices are same
        Matrix<T> temp;
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                temp.arr[i][j] = arr[i][j] + other.arr[i][j];
            }
        }
        return temp;
    };
    template <T>
    class Matrix<T> operator-(Matrix<T> &other)
    {
        // considering that rows and columns of both matrices are same
        Matrix<T> temp;
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                temp.arr[i][j] = arr[i][j] + other.arr[i][j];
            }
        }
        return temp;
    };
    template <T>
    class Matrix<T> operator*(Matrix<T> &other)
    {
        Matrix<T> temp;
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < other.cols; ++j)
                for (k = 0; k < cols; ++k)
                {
                    temp.arr[i][j] += arr[i][k] * other.arr[k][j];
                }
        return temp;
    };
};
template <>
class IntMatrix<int> : public Matrix<int>{
public:
    
    IntMatrix(int rows, int cols) : Matrix<int>(rows, cols){}
    void display(){
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
template <>
class DoubleMatrix<int> : public Matrix<int>{
public:
    DoubleMatrix(int rows, int cols) : Matrix<int>(rows, cols){}
    void display(){
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

    return 0;
}