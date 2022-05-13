#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

class Test {
    int code ;
    float price;
    public:
    Test(int c,float p);
    Test(const Test & t );
    void disp();
};

 Test :: Test(int c , float p){
     code = c ;
     price = p;

 };
 Test:: Test(const Test & t){
     code = t.code;
     price = t.price;
 };
 void Test ::  disp(){
     cout<<"Code:"<<code;
     cout<<"Price:"<<price;

 };

 int main(){
     Test t1(101,500);
     Test t2(t1);
     cout<<"t1 object";
     t1.disp();
     cout<<"t2 object";
     t2.disp();
     


 };
