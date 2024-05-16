#include<iostream>
using namespace std;
class Overload{
    int x;
    int y;
    int z;
    public:
    void getdata(){
        cout<<"Enter the values:"<<endl;
        cin>>x>>y;

    }
    void showdata(){
        cout<<"your sum is:\n";
        cout<<x<<"+i"<<y;
    }
    Overload operator +(Overload ov){
        Overload d;
        d.x=x+ov.x;
        d.y=y+ov.y;
        return d;   
    }
};
int main(){
    Overload oc,ov,ol;
    oc.getdata();
    ov.getdata();
    ol=oc+ov;
    ol.showdata();
}