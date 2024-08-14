#include <iostream>

using namespace std;
template <typename T>
class Any
{
private:
    int n;
    T *arr;

public:
    Any(T *a, int size)
    {
        arr = a;
        n = size;
    }
    T returnSum()
    {
        T sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        return sum;
    }
};
int main()
{
    int arr[] = {2, 3, 4, 5, 6, 3, 2, 2};
    double arr1[] = {2.34, 3.43, 34.4, 4.55, 2.6, 6.83, 2.2, 1.2};
    Any<int> intobj(arr, 8);
    Any<double> doubleobj(arr1, 8);

    cout << "Int array sum " << intobj.returnSum() << endl;
    cout <<"Double array sum " << doubleobj.returnSum() << endl;
}