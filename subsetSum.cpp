#include<bits/stdc++.h>
using namespace std;

int subsetSum(int idx, int sum, int arr[], int size,int totSum ){
    if(idx==size){
        totSum+=sum;
        cout<<sum<<" ";
        return totSum;
    }

    //takeCall
    int l = subsetSum(idx+1,sum+arr[idx],arr,3,totSum);
    //notTakeCall
    int r = subsetSum(idx+1,sum,arr,3,totSum);

    return (l+r);
}

int main(){
    int arr[]={3,1,2};

    cout<<"\n"<<subsetSum(0,0,arr,3,0);
}