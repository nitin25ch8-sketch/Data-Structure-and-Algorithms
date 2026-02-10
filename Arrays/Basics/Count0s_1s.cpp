#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,4,0,4,6,4,0,4,1};
    int n= size(arr);
    int count_1=0;
    int count_0=0;
    for (int i = 0 ; i<n; i++){
        if(arr[i]==0){
            count_0++;
        }
        if(arr[i]==1){
            count_1++;
        }
    }
    cout<<"0's "<< count_0<<endl;
    cout<<"1's "<<count_1;
return 0;
}