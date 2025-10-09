#include<iostream>
using namespace std;
class B;

class A{
    friend class B;
    int a=45;
    public:
    void display()
    {
        cout<<"The value of a is :"<<a<<endl;
    }

};
class B{
    friend class A;
    int b=56;
    int a;
    public :
    void display(){
        cout<<"Value of b is :"<<b<<endl;
    }
    void sum(A &obj){
        cout<<"Sum of a and b is :"<<obj.a+b<<endl;
    }

};

int main(){
    A d1;
    B d2;
    d2.sum(d1);

    return 0;
}

