#include<iostream>
#include<conio.h>
#include<string>
#include<cmath>
using namespace std;
class DecToBin{
    int a;
    public:
    int b;
    void getdata(){
        cout<<"Enter your decimal number "<<endl;
        cin>>a;
    };
    void dtb(){
   int bin=0;
   int i=0;
        while(a>0){
            b= a%2;
            bin=b*pow(10,i++)+ bin;
            a=a/2;
        };
        cout<<bin;
    };

};
int main(){
     DecToBin nitin;
     nitin.getdata();
     nitin.dtb();
     
 return 0;
}