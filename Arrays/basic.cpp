#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int arr[8];       //Array declaration
    cout<<&arr<<endl;   //shows the address of array 
    cout<<arr<<endl;    // also shows the address of array
    int arr1[10]={1,4,5,6,7};
    cout<<&arr1<<endl; // adressof operator shows the adress of base element 
    cout<<&arr1[0]<<" tip"<<endl;
    cout<<sizeof(arr1); // since its "int" thus size for arr1[10] will be 4x10=40
 getch();
 return 0;
}