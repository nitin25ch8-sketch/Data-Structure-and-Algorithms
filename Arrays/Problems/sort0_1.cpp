#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int arr[]={1,1,0,1,0,1,0,0,0,1};
    int n=10;
    int count0=0;
    int count1=0;
    for(int i=0; i<n;i++){
        if(arr[i]==0){
            count0++;
        }
         if(arr[i]==1){
            count1++;
        }
    }
    for(int j=0; j<count0; j++){
        cout<<0 <<" ";
    }
      for(int k=0; k<count1; k++){
        cout<<1 <<" ";
    }
 return 0;
}