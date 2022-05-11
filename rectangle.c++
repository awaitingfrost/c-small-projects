#include <iostream>

using namespace std;

class Sagar {
    int l, b ;
    public:
    void setdata();
    void area();
    void perimeter();

};

void Sagar :: setdata(){
   cout<<"Enter length and breadth of rectangle"<< endl;
   cin >>l >>b;

}

void Sagar :: perimeter(){
    int perimeter;
    perimeter = 2*(l+b);
    cout <<"Perimeter of rectangle is" << perimeter;
}

void Sagar :: area(){
    int area;
    area = l*b ;
    cout<<"Area of rectangle is " << area;

};

int main(){
    Sagar s;
    s.setdata();
    s.area();
    s.perimeter();

}