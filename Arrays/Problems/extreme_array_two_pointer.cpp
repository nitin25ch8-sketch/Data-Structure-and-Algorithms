#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int size=7;
    for(int left=0, right=size-1;left<=right;left++,right--){
        if (left==right){
            cout<<arr[left];
            break;
        }
        cout<<arr[ left ]<<" ";
        cout<<arr[ right ]<<" ";
        }
 return 0;
}