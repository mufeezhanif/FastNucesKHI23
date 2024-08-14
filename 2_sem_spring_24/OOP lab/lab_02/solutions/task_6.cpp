#include <iostream>
using namespace std;
struct student{
	int stdId;
	string name;
	float marks[3];
};

void inputData(student stds[],int ind){
	cout<<"\nEnter Student Id:";
	cin.ignore();
	cin>>stds[ind].stdId;
	cout<<"\nEnter Student Name:";
	cin.ignore();
	cin>>stds[ind].name;
	cout<<"\nEnter Marks for 3 subjects using space b/w them , you can use decimals as well:";
	cin.ignore();
	int i=0;
	for(i=0;i<3;++i){
		cin>>stds[ind].marks[i];
	}
	
}
void calcAvgMarks(student stds[],int ind){
	cout<<"Enter std id: ";
	int i,id;
	cin.ignore();
	cin>>id;
	for(i=0;i<ind;i++){
		if(stds[i].stdId==id){
			ind = i;
			break;
		}
	}
	int sum =0;
	for(i=0;i<3;i++){
		sum += stds[ind].marks[i];
	}
	cout<<"\nAverage of marks are: "<<sum/3;
}
void dispDetails(student stds[],int ind){
	int i=0;
	for(i=0;i<ind;i++){
		cout<<"\nStudent Id: "<<stds[i].stdId<<endl;
		cout<<"\nName: "<<stds[i].name<<endl;
		cout<<"\nMarks: "<<stds[i].marks[0]<<endl;
		cout<<"\nMarks: "<<stds[i].marks[1]<<endl;
		cout<<"\nMarks: "<<stds[i].marks[2]<<endl;
	}
}

int main()
{
	int choice=0;
	student students[200];
	int index =0;
	while(choice!=4){
	cout<<"\n\n1 - input Data \n2 - calculate avg\n3 - display students details\n4 - exit:\n";
	cin>>choice;
		switch(choice){
			case 1:{
				inputData(students,index);
				++index;
				break;
			}
			case 2:{
				
				calcAvgMarks(students,index);
				break;
			}
			case 3:{
				dispDetails(students,index);
				break;
			}
		}
	}
	return 0;
}

