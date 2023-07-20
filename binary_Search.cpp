#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int sz,int key){

    int lo = 0 , hi = sz-1;

    while(hi-lo>1){
        int mid = (hi+lo)/2;
        if(arr[mid]<key){
            lo = mid+1;
        }
        else{
            hi = mid;
        }
    }
    
    if(arr[lo] == key){
            return lo;
        }
        else if(arr[hi] == key){
            return hi;
        }
        else{
            return -1;
    }
}

int main(){


    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key = 7;
    int ans = binary_search(arr,10,key);

    cout<<ans;
}