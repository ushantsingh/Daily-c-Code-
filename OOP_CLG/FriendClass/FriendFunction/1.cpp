#include<iostream>
using namespace std;
class Suresh;//Forward deceleration
class Two;
class One
{
    int data;
    public:
            void input(int value){
                data=value;
            }
            friend void add(One,Two);
};

