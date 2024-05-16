#include<iostream>
using namespace std;
class equalityOperator{

    int a;
    public:
    void getval(){
        cout<<"enter the value:\n";
        cin>>a;
    };
    bool operator ==(equalityOperator ev){
       if(a==ev.a){
  return true;
       }
       else{
        return false;
       }
        
      

    }
};
int main(){
    equalityOperator ev1,ev2;
    bool t;
    ev1.getval();
    ev2.getval();
    t=ev1==ev2;
    cout<<t;
    if(t)
    cout<<"yes it is equal";
    else
     cout<<"No it is notqq equal";
    return 0;
}