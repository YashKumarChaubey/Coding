#include<bits/stdc++.h>
using namespace std;


//count subsequences with sum = K

int func(int arr[],int idx,int size,int sum , int k){
    if(idx>size || sum>k ){
        return 0;
    }

    if(sum == k){
            return 1;
        }

    sum+=arr[idx];             

    int left = func(arr,idx+1,size,sum,k);    //take wala call

    sum-=arr[idx];

    int right = func(arr,idx+1,size,sum,k);    //not take wala call

    int answer = left + right;

    return answer;
}


int main(){

    int arr[]={3,1,2,4,5};

    int n = 5;

    int k = 5;

    vector<int> ds;


    cout<<func(arr,0,n,0,k);


}


//print all subsequences

// void func(int arr[],int idx,int size,vector<int> &ds){
//     if(idx>=size){
//         if(ds.empty()) cout<<"{}";

//         for(auto x : ds){ 
//             cout<<x<<" ";
//         }
//         cout<<endl;
//         return;
//     }

//     func(arr,idx+1,size,ds);    //not take wala call

//     ds.push_back(arr[idx]);     //insertion              

//     func(arr,idx+1,size,ds);    //take wala call

//     ds.pop_back();              //removal
// }


//print all subsequences with sum = K

// void func(int arr[],int idx,int size,vector<int> &ds,int sum , int k){
//     if(idx>size || sum>k ){
//         return;
//     }

//     if(sum == k){
//             for(auto x : ds){ 
//             cout<<x<<" ";
//             }
//             cout<<endl;
//             return;
//         }

//     ds.push_back(arr[idx]);     //insertion 
//     sum+=arr[idx];             

//     func(arr,idx+1,size,ds,sum,k);    //take wala call

//     ds.pop_back();              //removal
//     sum-=arr[idx];

//     func(arr,idx+1,size,ds,sum,k);    //not take wala call
// }