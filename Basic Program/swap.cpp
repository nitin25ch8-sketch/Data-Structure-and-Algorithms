#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"Enter value of a"<<endl;
    cin>>a;
    cout<<"Enter value of b"<<endl;
    cin>>b;
    int t;
    t=a;
    a=b;
    b=t;
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of b is "<<b<<endl;

 getch();
 return 0;
}