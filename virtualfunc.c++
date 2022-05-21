#include <iostream>
#include <conio.h>
using namespace std;

class Base {
    public:
    void disp (void){
        cout<<"\n Base class disp";
    };
    virtual void show (void){
        cout<<"\n Base class show";
    }; 
};

class Derived : public Base {
    void disp(void)
    {
        cout<<"\n Devrived class disp";
    };
    void show (void){
        cout<<" \n Derived class show";
    }
};

int main(){
    Base *p;
    Base objb;
    Derived objd;
    p = &objb;
    p -> disp();
    p -> show();
    p = &objd;
    p -> disp();
    p -> show();
    return 0;

   

};