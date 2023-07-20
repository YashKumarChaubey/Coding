#include<bits/stdc++.h>
using namespace std;

int largest(int arr[],int n){
    int maxEle = INT_MIN;

    for(int i=0;i<n;i++){

        if(arr[i]> maxEle){
            maxEle  = arr[i];
        }

    }
    return maxEle;

}



int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    
    int answer = largest(arr,n);
    cout<<answer;
}