#include<iostream>
using namespace std;

class A{
    int a;

    public:
    void getdata(){
        cout<<"Enter the value :\n";
        cin>>a;
    }
    void showdata(){
        cout<<"you value is :\t"<<a;
    }
    A operator *(A aa){
        A x;
        x.a=a+aa.a;
        return x;

    }
};
int main(){
    A x,y,z;
    x.getdata();
    y.getdata();
    z=x*y;
cout<<"on multiplying you will get the result of addition\n";
    z.showdata();
    

}