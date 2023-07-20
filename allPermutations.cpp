#include<bits/stdc++.h>
using namespace std;

//print all permutations of an array
void allPerm(vector<int> &ds, int arr[], int size,int freq[]){
    if(ds.size() == size){
        
        for(auto x : ds){
            cout<< x <<" ";
        }
        cout<<endl;
        return ;
    }

    for(int i=0;i<size;i++){
        if(!freq[i]){
            ds.push_back(arr[i]);
            freq[i] = 1;
            allPerm(ds,arr,size,freq);
            freq[i] = 0;
            ds.pop_back();
        }
    }
}

int main(){
    int arr[]={1,2,3};
    vector<int> ds;
    int freq[3]={0,0,0};

    allPerm(ds,arr,3,freq);
}