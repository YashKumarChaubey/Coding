#include<bits/stdc++.h>
using namespace std;

void reverseArr(int arr[],int size,int i , int j){

    if(i>=j)    return ;
    
    swap(arr[i],arr[j]);

    reverseArr(arr,size,i+1,j-1);

}


int main(){
    int arr[]={1,3,2,5,7};

    for(auto x:arr){
        cout<<x<<" ";
    }

    reverseArr(arr , 5 , 0 , 4);

    cout<<endl;

    for(auto x:arr){
        cout<<x<<" ";
    }
    
}