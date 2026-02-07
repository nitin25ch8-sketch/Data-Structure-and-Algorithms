#include<iostream>
#include<conio.h>
using namespace std;
class ap{
int a1;
int a2;
int n;
public:
    void getdata(){
    cout<<"Enter value for 1st term "<<endl;
    cin>>a1;
    cout<<"Enter value of 2nd term "<<endl;
    cin>>a2;
    cout<<"Enter term number "<<endl;
    cin>>n;
};
int putdata(int a, int b, int c){
    int d=b-a;
    int e=a+(c-1)*d;
    return e;
}
void show(){
    cout<<"the number at term "<<n<<" is "<<putdata(a1, a2, n)<<endl;
}
};
int main(){
    ap nitin;
    nitin.getdata();
    nitin.show();
 getch();
 return 0;
}