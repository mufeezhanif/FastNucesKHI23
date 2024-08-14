#include<iostream>
using namespace std;

class RectShape{
	private:
        int length;
        int breadth;
	public:
        int calculateArea(){
            return length * breadth;
        }
        RectShape(){
            length =0;
            breadth =0;
        }
        RectShape(int length, int breadth){
            this->length=length;
            this->breadth=breadth;
        }
        RectShape(int something){
            length=something;
            breadth = something;
        }

};

int main(){
    RectShape a1,a2(23,43),a3(12);
    cout<<"\nArea of rectangle 1: "<<a1.calculateArea();
    cout<<"\nArea of rectangle 2: "<<a2.calculateArea();
    cout<<"\nArea of rectangle 3: "<<a3.calculateArea();

	return 0;
}