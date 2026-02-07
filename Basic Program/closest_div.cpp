// the number closest to n and divisible by m
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"Enter value for closest "<<endl;
    cin>>a;
    cout<<"Enter value of divisible "<<endl;
    cin>>b;
    for (int i=a; i>=0; i--){
        if(i%b==0){
        cout<<i<<" is closest to "<<a<<" Which is divisible by "<<b;
        break;
        }
    };
 getch();
 return 0;
}