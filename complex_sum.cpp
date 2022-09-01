#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    int x,y;
    void setnum(void){
        cout<<"enter the value of x ";
        cin>>x;
        cout<<"enter the value of y ";
        cin>>y;
        a=x;
        b=y;
    }
    void sum(complex c1, complex c2){
     a = c1.a +c2.a;
       b = c1.b + c2.b;
    }

    void print(void){
        cout<<"the sum of complex num is "<<a<<"+"<<b<<"i"<<endl;
    }
    
};
int main(){
    complex ravi,mohan,rohan;
    ravi.setnum();
    ravi.print();
    
    mohan.setnum();
    mohan.print();
    
    rohan.sum(ravi,mohan);
    rohan.print();

    return 0;
}