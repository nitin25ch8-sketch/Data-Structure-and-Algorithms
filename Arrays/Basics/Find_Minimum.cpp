#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={25,5,4,9,82,71,6,1,5};
    int n =size(arr);
    int ans= INT_MAX;
    for(int i=0;i<n; i++){
        if(arr[i]<ans){
            ans= arr[i];
        }
    }
    cout<<"Minimun: "<<ans;
return 0;
}