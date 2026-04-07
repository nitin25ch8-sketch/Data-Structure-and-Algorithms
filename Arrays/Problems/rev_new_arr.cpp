#include<iostream>
#include<conio.h>
using namespace std;
void rev_arr(int arr[],int size, int arr_new[]){
    for(int i=0; i<size; i++){
        arr_new[size-1-i]=arr[i];
    }
    for(int i=0; i<size; i++){
        cout<<arr_new[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;
    int arr1[n];
    rev_arr(arr,n,arr1);
 return 0;
}