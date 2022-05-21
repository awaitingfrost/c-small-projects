#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

class Base {
    public:
    virtual void disp()=0;

};

class D : public Base {
    public:
    void disp()
    {
        cout<<"Derived class";
    }
};

int main(){
    // D obj;
    // obj.disp();
    // getch();
    // return 0;
    Base *p;
    D obj;
    p = &obj;
    p -> disp();
    return 0;

}
