#include<iostream>
using namespace std;
class demo{
    int a;
    int b;
    public:
    void getdata(){
        cout<<"Enter two values\n";
        cin>>a>>b;

    }
    void showdata(){
        cout<<"You object swap values are:\t";
        cout<<a<<endl;
        cout<<b<<endl;


    }
    demo operator =(demo dd){
       
        a=dd.a;
        b=dd.b;
        return dd;
    }
};
int main(){
    demo dd,bb;
    dd.getdata();
  
    bb=dd;
    bb.showdata();

}