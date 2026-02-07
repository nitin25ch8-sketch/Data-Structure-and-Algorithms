#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a;
   
    cout<<"Enter your number"<<endl;
    cin>>a;
    for (int i=0; i<=10; i++){
    cout<< a<<"X"<<i<<"="<<a*i<<endl;
    };
 getch();
 return 0;
}