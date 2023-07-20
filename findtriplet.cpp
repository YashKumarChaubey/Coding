#include <bits/stdc++.h>
using namespace std;

bool solution(vector<int>& arr)
{
    int n = arr.size();
    stack<int> st;
 
    int z3 = INT_MIN, z1 = INT_MAX;
    
    for (int i = n - 1; i >= 0; i--) {
 
        z1 = arr[i];
 
        while (!st.empty() && st.top() < arr[i]) {
            z3 = st.top();
            st.pop();
        }
 
        st.push(arr[i]);
 
        if (z1 < z3) {
            return true;
        }
    }

    return false;
}

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<solution(arr);

}