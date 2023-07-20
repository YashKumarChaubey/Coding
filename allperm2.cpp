#include<bits/stdc++.h>
using namespace std;

//print all permutations of an array with swapping (most optimised)
void allPerm(int idx, int arr[], int size){
    if(idx == size){
        
        for(int it = 0 ;it<size;it++){
            cout<< arr[it] <<" ";
        }

        cout<<endl;
        return ;
    }

    for(int i = idx; i<size; i++){
        
        swap(arr[idx],arr[i]);
        allPerm(idx+1,arr,size);
        swap(arr[idx],arr[i]);
        
    }
}

int main(){
    int arr[]={1,2,3};

    allPerm(0,arr,3);
}