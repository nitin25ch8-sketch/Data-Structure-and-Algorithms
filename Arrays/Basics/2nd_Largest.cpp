#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;
int getSecondLargest(int arr[], int size){
    int max=-1;
    int second;
    int ans=-1;
    for(int i = 0; i<size; i++){
        if(size<2){
            return ans;
        }
        else if (arr[i]>max){
            second = max;
            max = arr[i];
        }
        else if(arr[i]>second && arr[i]!=max){
            second = arr[i];
        }
        ans = second;
    }
    return ans;
}
int main(){
    int arr[]={10,2,4,5,4,9,3};
    int n= size(arr);
    int a= getSecondLargest(arr, n);
    cout<<a;
return 0;
}