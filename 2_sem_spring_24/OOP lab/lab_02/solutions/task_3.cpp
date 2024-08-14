#include <iostream>
using namespace std;
typedef struct bookData{
	int accNumber;
	string authorName;
	string bookName;
	bool flag;
} bd; 

void dispBookInfo(bd data[], int ind){
	int i=0;
	for(i=0;i<ind;++i){
		cout<<"\n\nAccession Number: "<<data[i].accNumber<<endl<<"Author Name: "<<data[i].authorName<<endl;
		cout<<"Book Name: "<<data[i].bookName<<endl;
//		cout<<"Available: "<< data[i].flag==1?"yes":"no";<<endl;
	}
}
void enterBook(bd data[],int ind){
	cout<<"Enter Accession No: "<<endl;
	cin>>data[ind].accNumber;
	cin.ignore();
	cout<<"Enter Book Name: "<<endl;
	getline(cin,data[ind].bookName);
	cin.ignore();cout<<"Enter Author Name: "<<endl;
	getline(cin,data[ind].authorName);
	data[ind].flag =1;  //book will be available by default
}
void dispBookOrderAuthor(bd data[],int ind){
	string author;
	int i =0;
	cout<<"\nEnter Author Name: ";
	cin.ignore();
	getline(cin,author);
	for(i=0;i<ind;++i){
		if(data[i].authorName == author){
			cout<<"\n\nAccession Number: "<<data[i].accNumber<<endl<<"Author Name: "<<data[i].authorName<<endl;
			cout<<"Book Name: "<<data[i].bookName<<endl;
//			cout<<"Available: "<< data[i].flag==1?"yes":"no";<<endl;
		}
	}
}
void dispBookOrderTitle(bd data[],int ind){
	string title;
	int i =0,count = 0;
	cout<<"\nEnter title of the Book: ";
	cin.ignore();
	getline(cin,title);
	for(i=0;i<ind;++i){
		if(data[i].bookName == title){
		 	++count;
		}
	}
	cout<<"We have "<<count<<" Books with the same title"<<endl;
}
void totalAvailableBooks(bd data[],int ind ){
	int i =0,count =0;
	for(i=0;i<ind;++i){
		if(data[i].flag == 1){
			++count;
		}
	}
	cout<<"We have "<<count<<" available Books"<<endl;
}
void issueBook(bd data[],int ind){
	string title;
	int i =0,flag= 0;
	cout<<"\nEnter title of the Book: ";
	cin.ignore();
	getline(cin,title);
	for(i=0;i<ind;++i){
		if(data[i].bookName == title){
		 	cout<<"Book has been issued ";
		 	data[i].flag =0;
		 	flag = 1;
		 	break;
		}
	}
	if (flag ==0)
		cout<<"Book not found"<<endl;
}


int main(){
	bd data[500];
	int index =0;
	int choice;
	do{
		cout<<"\n\n1 - Display book information \n2 - Add a new book\n3 - Display all the books in the library of a particular author\n4 - Display the number of books of a particular title\n5 - Display the total number of books in the library\n6 - Issue a book\n7 - Exit\n\tEnter Your Choice: ";
		cin>>choice;
		switch(choice){
			case 1:{
				dispBookInfo(data,index);
				break;
			}
			case 2:{
				enterBook(data,index);
				++index;
				break;
			}
			case 3:{
				dispBookOrderAuthor(data,index);
				break;
			}
			case 4:{
				dispBookOrderTitle(data,index);
				break;
			}
			case 5:{
				totalAvailableBooks(data,index);
				break;
			}
			case 6:{
				issueBook(data,index);
				break;
			}
			case 7:{
				break;
			}
			default:{
				break;
			}
		} 
	}while(choice!=7);
	return 0;
}

