#include<iostream>
using namespace std;
class overload{
    int a;
    public:
    void getdata(){
        cout<<"Enter the value of a:\t";
        cin>>a;
    }
    void showdata(){
        cout<<a;
    }
    void operator ++(){

        a=a+1;
    }

};
int main(){
    overload ov;
   
    ov.getdata();
    ov.showdata();
    ++ov;
    ov.showdata();
    



}