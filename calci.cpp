#include<iostream>
using namespace std;

int main(){
    double a , b ;
    char sym;

    cout<<"Hello , Welcome to Tanmay's Calci "<<endl;

    // Now We are taking inputs from users :

    cout<<"Enter the 1st Value/Number :  " <<endl;
    cin>>a;

    cout<<"Enter the functions symbol : "<<endl;
    cin>>sym;

    cout<<"Enter the 2nd Value/Number  :  "<<endl;
    cin>>b;

    // Calculation Process options using SWITCH Statement :

    switch(sym){
        
        case '+' : cout<< a << "+" << b << "=" << a+b <<endl;
        break;

        case '-' : cout<< a << "-" << b << "=" << a-b <<endl;
        break;

        case '*' : cout<< a << "*" << b << "=" << a*b <<endl;
        break;

        case '/' : cout<< a << "/" << b << "=" << a/b <<endl;
        break;

        default : cout<<"Please Enter a Valid Symbol"<<endl;

    }

    cout<<"Thank You....Use Again..."<<endl;

    return 0;
}