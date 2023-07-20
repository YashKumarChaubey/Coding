#include <bits/stdc++.h>
using namespace std;
 
void solution(int arr[], int N, int K)
{
    int j, max;
 
    for (int i = 0; i <= N - K; i++) {
        max = arr[i];
 
        for (j = 1; j < K; j++) {
            if (arr[i + j] > max)
                max = arr[i + j];
        }
        cout << max << " ";
    }
}
 

int main()
{
    int N ,K;
    cin>>N;

    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
     cin>>K;
    
    solution(arr, N, K);
    return 0;
}