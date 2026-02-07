#include<iostream>
#include<conio.h>
using namespace std;
class closest{
    int a;
    int b;
    public:
    void getdata(){
    cout<<"Enter value for closest "<<endl;
    cin>>a;
    cout<<"Enter value of divisible "<<endl;
    cin>>b;
    };
    int close(int x,int y){
        int c=x/y;
        return c*y;
    };
    void print(){
      cout<<close(a, b)<<" is closest to "<<a<<" Which is divisible by "<<b;
    }
};
int main(){
    closest nitin;
    nitin.getdata();
    nitin.print();
    
 getch();
 return 0;
}