#include <iostream>
#include <conio.h>
using namespace std;


class Info {
    private:
    int acc_no,ph_no,roll_no;
    public:
    void setinfo(int a , int p, int r)
    {
        acc_no = a;
        ph_no = p;
        roll_no = r;
    }

    void showinfo() {
        cout<<endl<<"account no is"<<acc_no;
        cout<<endl<<"phone no is"<<ph_no;
        cout <<endl <<"roll no is"<< roll_no;
    }

    void getinfo();
};

void Info :: getinfo(){
    cout<<endl<<"Enter account no,phone number, roll number";
    cin >> acc_no >> ph_no >> roll_no;
}

int main(){
    Info i2 ; 
   
    i2.getinfo();
    i2.showinfo();


}