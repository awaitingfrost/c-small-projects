#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;


class Time{
    int h,m;
    public:
    void getTime(int, int);
    void putTime(void);
    void sum(Time , Time);
};

void Time :: getTime(int x , int y){
    h = x;
    m = y;
}

void Time :: putTime(void){
    cout<<"Hours = "<<h;
    cout<<"\n Minutes = "<<m;
};

void Time:: sum(Time t1, Time t2){
    m = t1.m + t2.m;
    h = m/60;
    m = m%60;
    h = h+t1.h+t2.h;
};

int main(){
    Time t1 , t2, t3;
    t1.getTime(3,40);
    t2.getTime(4,30);
    t3.sum(t1,t2);
    t1.putTime();
    t2.putTime();
    t3.putTime();
    getch();
    return 0;
};

