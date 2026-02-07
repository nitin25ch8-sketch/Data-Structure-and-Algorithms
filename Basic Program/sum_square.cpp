#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a;
    int sum =0;
    cout<<"Enter your number"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++){
        sum = sum+i*i;
    }
    cout<<sum;
 getch();
 return 0;
}