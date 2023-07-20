#include<bits/stdc++.h>
using namespace std;

//al combinations with repetation not allowed.

void comSum(int arr[], int idx, int size, int target, vector<int> &ds){
    if(idx == size){
        if(target == 0){
            for(auto x : ds){
                cout<<x<<" ";
            }
            cout<<endl;
        }
        return;
    }

    if(arr[idx] <= target){
        ds.push_back(arr[idx]);

        comSum(arr, idx+1, size, target-arr[idx], ds);

        ds.pop_back();
    }

    comSum(arr, idx+1, size, target, ds);
}

int main(){
    int arr[]={2,3,4,5,6,7};

    vector<int> ds;

    comSum(arr, 0, 6, 7, ds);
}


// //al combinations with repetation allowed.

// void comSum(int arr[], int idx, int size, int target, vector<int> &ds){
//     if(idx == size){
//         if(target == 0){
//             for(auto x : ds){
//                 cout<<x<<" ";
//             }
//             cout<<endl;
//         }
//         return;
//     }

//     if(arr[idx] <= target){
//         ds.push_back(arr[idx]);

//         comSum(arr, idx, size, target-arr[idx], ds);

//         ds.pop_back();
//     }

//     comSum(arr, idx+1, size, target, ds);
// }