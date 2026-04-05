#include<iostream>
#include<conio.h>
using namespace std;
bool LinearSearch(int arr[],int size,int target){
    for(int i=0; i<size;i++){
        if (arr[i]==target){
            return true;
        }
    }
   return false; 
};
int main(){
    int arr[5]={1,2,3,4,9};
    int size=5;
    int target=9; 
    bool c= LinearSearch(arr,size,target);
        if(c==1){
        cout<<"Mil gya BC"<<endl;}
    else{
        cout<<"Nhi mila BC";
    }
    
 getch();
 return 0;
}
