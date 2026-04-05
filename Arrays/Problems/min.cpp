#include<iostream>
#include<conio.h>
#include<limits.h>
using namespace std;
int main(){
    int min_ans= INT_MAX;
    int arr[]={5,69,8,7,2,1,9,5,3};
    int n=9;
    for(int i=0; i<n; i++){
        if (arr[i]<min_ans){
            min_ans=arr[i];
        }
    }
    cout<<"Min element in the array "<<min_ans;
 return 0;
}