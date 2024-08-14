#include<iostream>
using namespace std;

class CompanyWorker{
	private:
		int salary;
		int hours;
	public:
		void infoRetreival(int salary, int hours){
			this->salary = salary;
			this->hours = hours;
		};
		void salIncrease(){
			if(this->salary<25000) this->salary+= 5000;
		}
		void workBenefit(){
			if(this->hours>7) this->salary += 6000;
		}
		int getSalary(){
			return this->salary;
		}
};

int main(){
	CompanyWorker a;
	int salary, hours;
	cout<<"Enter Salary and hours per day:  "<<endl;
	cin>>salary>>hours;
	a.infoRetreival(salary,hours);
	a.salIncrease();
	a.workBenefit();
	cout<<"Salary after checking the conditions: "<<a.getSalary();
	return 0;
}