#include<iostream>
using namespace std;
class demo{
    int a;
    public:
    void getdata();
    void showdata();
    demo operator +(demo ab){
    demo d;
   d.a=a+ab.a;
    return d;
}
};
void demo :: getdata(){
cout<<"Enter the value of a\n";
    cin>>a;
}
void demo::showdata(){
    cout<<"value of a:\n"<<a<<endl;
}
int main(){
    demo ab,bb,bc;
    ab.getdata();
    bb.getdata();
    bc=ab+bb;
    bc.showdata();
   return 0;

}