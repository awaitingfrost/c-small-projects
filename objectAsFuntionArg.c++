#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

class Demo {
    int a;
    public:
    void set(int x){
         a = x;
    };
    
    void sum( Demo demoObj1, Demo demoObj2){
        int a = demoObj1.a+ demoObj2.a;
    };
    
    void print(){
        cout<<"The value of A is:"<<a<<endl;
        
    };

};

int main () {
    // object declarations
    Demo d1;
    Demo d2;
    Demo d3;

    // assigning values to the data member of objects
    d1.set(10);
    d2.set(20);

    

    // passing obj d1 and d2
   d3.sum(d1,d2);
// printing the values

d1.print();
d2.print();
d3.print();
return 0;
};