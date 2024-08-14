#include <iostream>
using namespace std;

template <class T> class Pet{
    private:
        T name;
        T age;
        public:
            Pet(T _name, T _age){
                name = _name;
                age = _age;
            };
            virtual void makeSound(){
                 
            }
};
int main()
{
    cout << "23k-0800 Muhammad Mufeez" << endl;
   
    return 0;
}