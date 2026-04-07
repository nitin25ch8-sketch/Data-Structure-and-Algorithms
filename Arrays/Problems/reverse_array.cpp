#include<iostream>
#include<conio.h>
using namespace std;
void reverse(int arr[],int size){
    
    for(int i=0; i<size/2; i++){
        int temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
   for(int i=0; i<size; i++){
       cout<< arr[i]<<" ";
    };
};

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;
   reverse(arr,n);
 return 0;
}