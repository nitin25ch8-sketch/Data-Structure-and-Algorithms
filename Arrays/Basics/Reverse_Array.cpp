#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n =size(arr);
    for(int i=0; i<n/2; i++){
        swap(arr[i],arr[n-1-i]);
    }
    for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
    }
    
return 0;
}