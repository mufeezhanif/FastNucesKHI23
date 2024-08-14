#include <iostream>

using namespace std;
template <class T>
T multiplayMatrix()
{
    int rows = 3, cols = 3;
    T val;
    T matrix[rows][cols];
    T matrix1[rows][cols];
    T res[rows][cols];
    cout << "Now enter matrix 1 values for 3x3 matrix" << endl;
    for (int i = 0; i < rows; ++i)
    {
        cout << endl
             << "Row " << i + 1<<" : ";
        for (int j = 0; j < cols; ++j)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "Now enter matrix 2 values for 3x3 matrix" << endl;
    for (int i = 0; i < rows; ++i)
    {
        cout << endl
             << "Row: " << i + 1<<" : ";
        for (int j = 0; j < cols; ++j)
        {
            cin >> matrix1[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            T sum = 0;
            for (int k = 0; k < rows; ++k) {
                sum += matrix[i][k] * matrix1[k][j];
            }
            res[i][j] = sum;
        }
    }
    cout<<"Multiplied Matirx: "<<endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    };
}
int main()
{   
    //multiplayMatrix<int>();
    //uncomment the version you wnana use
    multiplayMatrix<double>();
    return 0;
}