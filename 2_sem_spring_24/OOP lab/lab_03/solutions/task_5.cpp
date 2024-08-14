#include <iostream>
using namespace std;
class Temperature
{
private:
	double celsius;

public:
	void setCelsius(double celsius)
	{
		this->celsius = celsius;
	}
	double getCelsius()
	{
		return celsius;
	}
	double celsiusToFahrenheit()
	{
		return (celsius * 9 / 5 + 32);
	}
};

int main()
{
	Temperature tmp;
	double temp;
	cout << "Enter temp in celsius: ";
	cin >> temp;
	tmp.setCelsius(temp);
	cout << "\nTemp in celsius: " << tmp.getCelsius() << endl;
	cout << "\nTemp in Farenheit: " << tmp.celsiusToFahrenheit() << endl;

	return 0;
}