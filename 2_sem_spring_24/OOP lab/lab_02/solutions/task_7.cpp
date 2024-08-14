#include <iostream>
using namespace std;
typedef struct Product{
	int productCode;
	string productName;
	int quantity;
	int price;  //price will be in pkr that's y chosen int
}p; 
void dispProducts(p products[],int ind){
	int i =0;
	for(i=0;i<ind;++i){
		cout<<"\nproduct Code: "<<products[i].productCode<<endl;
		cout<<"Product Name: "<<products[i].productName<<endl;
		cout<<"Quantity: "<<products[i].quantity<<endl;
		cout<<"Price : "<<products[i].price<<endl;		
	}
}
void enterProduct(p products[],int ind){
	cout<<"\nEnter the following details: "<<endl;
	cout<<"\nproduct Code: ";
	cin>>products[ind].productCode;
	cout<<"Product Name: "<<endl;
	cin.ignore();
	getline(cin,products[ind].productName);
	cout<<"Quantity: ";
	cin>>products[ind].quantity;
	cout<<"Price : ";
	cin>>products[ind].price;
};

int main(){
	p products[500];
	int ind=0,choice=0;
	while(choice!=3){
		cout<<"\nEnter 1 to enter detail,2 to display and 3 to exit: ";
		cin>>choice;
		switch(choice){
			case 2:{
				dispProducts(products,ind);
				break;
			}
			case 1:{
				enterProduct(products,ind);
				ind++;
				
				break;
			}
			case 3:{
				break;
			}
				
			
		}
	}
	return 0;
}
