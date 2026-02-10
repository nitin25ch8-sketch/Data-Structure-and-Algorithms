#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,4,5,4,4,5,2,1,1};
    int n = size(arr);
    int ans;
    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(arr[i]==arr[j]){
                break;
            }
            else 
                ans= arr[i];
            
        }
    }
    cout<<ans;
return 0;
}