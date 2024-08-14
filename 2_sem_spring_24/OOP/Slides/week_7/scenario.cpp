#include<iostream>
#include<cmath>
using namespace std;

class investment{
	private:
		int initialVal;
		int currVal;
		int profit;
		double percentProfit;
	public:
		investment(int i, int c):initialVal(i),currVal(c){
		};
		int calculateProfit(){
			return (currVal-initialVal);
		}
		double calculatePercentProfit(){
			return (calculateProfit()/initialVal);
		}
		void display() {
			cout<<"Initial Val: "<<initialVal<<endl;
			cout<<"Current Val: "<<currVal<<endl;
			// if(calculateProfit()>0)
			 cout<<"Profit: "<<calculateProfit()<<endl;
			// else cout<<"Loss: "<<calculateProfit();		
			cout<<"Percentage of profit: "<<calculatePercentProfit();
		}
};
class House{
	public:
		string stAddress;
		int sqFeets;
		
		House(string s, int sq):stAddress(s), sqFeets(sq){}
		void display() {
			cout<<"Address: "<<stAddress<<endl;
			cout<<"Square Feets: "<<sqFeets<<endl;
		};
		
};
class HouseThatIsAnInvestment:public House, public investment{
	public:
		HouseThatIsAnInvestment(string add, int sq,int i, int c): House(add, sq),investment(i,c){
		}
		void display() {
			investment::display();
			HouseThatIsAnInvestment::display();
		}
};		
int main(){
	HouseThatIsAnInvestment house1("karimabad",120,3008600,60000);
	house1.display();
	return 0;
}