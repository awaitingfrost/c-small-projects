#include <stdio.h>
#include <iostream>
#include <conio.h>
 using namespace std;

 class Conversion {
     int a;
     public:
     void getdata(){
         cout<<"Enter Indian Currency";
         cin>>a;
     }

     void conversion(){
         int c;
         c = a*1.6;
         cout<<"the converted value is"<<c;
     }
 };

 int main(){
     Conversion c;
     c.getdata();
     c.conversion();
 }
