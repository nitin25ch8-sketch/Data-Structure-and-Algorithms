#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=6;
    int shift=2;
    int temp[]={50,60};
    for(int i=n-1;i>=2;i--){
        arr[i]=arr[i-2];
    }
    for(int j=0; j<shift;j++){
        arr[j]=temp[j];
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
 return 0;
}