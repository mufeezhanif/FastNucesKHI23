#include <iostream>
using namespace std;
class Car
{
private:
	string model;
	int year;
	int price; // considering in pkr, that's why used int
public:
	void setModel(string model)
	{
		this->model = model;
	}
	string getModel()
	{
		return model;
	}
	void setYear(int year)
	{
		this->year = year;
	}
	int getYear()
	{
		return year;
	}
	void setPrice(int price)
	{
		this->price = price;
	}
	int getPrice()
	{
		return price;
	}
};