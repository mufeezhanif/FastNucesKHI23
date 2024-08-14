#include <iostream>
using namespace std;
class waterBottle
{
private:
	string company;
	string color;
	double capacityInLitre;
	double capacityInMilliLitre;

public:
	void setCompany(string company)
	{
		this->company = company;
	}
	string getCompany()
	{
		return company;
	}
	void setColor(string color)
	{
		this->color = color;
	}
	string getColor()
	{
		return color;
	}
	void setCapacity(double capacityInMilliLitre)
	{
		this->capacityInMilliLitre = capacityInMilliLitre;
		capacityInLitre = capacityInMilliLitre / 1000;
	}
	double getCapacityInLitre()
	{
		return capacityInLitre;
	}
	double getCapacityInMilliLitre()
	{
		return capacityInMilliLitre;
	}
	void updateCapacity(double capacity)
	{
		capacityInMilliLitre -= capacity;
		capacityInLitre = capacityInMilliLitre / 1000;
	}
};

int main()
{
	waterBottle abc;
	string company, color;
	double capacity;
	cout << "Enter company of water bottle: ";
	cin >> company;
	cin.ignore();
	abc.setCompany(company);

	cout << "Enter color of water bottle: ";
	cin >> color;
	cin.ignore();
	abc.setColor(color);

	cout << "Enter initial capacity of water bottle: ";
	cin >> capacity;
	cin.ignore();
	abc.setCapacity(capacity);

	cout << "\n\tInitial capacity in millilitres: " << abc.getCapacityInMilliLitre();
	cout << "\n\tInitial capacity in Litres: " << abc.getCapacityInLitre();

	cout << "\n\nHow much water have you drunk?";
	cin >> capacity;
	abc.updateCapacity(capacity);

	cout << "\n\tUpdated capacity in millilitres: " << abc.getCapacityInMilliLitre();
	cout << "\n\tUpdated capacity in Litres: " << abc.getCapacityInLitre();

	return 0;
}