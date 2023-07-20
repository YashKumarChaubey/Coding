#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n==0 || n==1) return n;

    int leftCall = fibo(n-1);
    int rightCall =  fibo(n-2);

    int answer = leftCall + rightCall;

    return answer;
}

int main(){

    cout<<fibo(5);

}