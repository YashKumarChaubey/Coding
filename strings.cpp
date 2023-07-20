//reverse string words.
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "hello world program";

    reverse(str.begin(),str.end());

    

    int i,j = 0;
    for(i = 0;i<str.length();i++){
        
            if(str[i] == ' ' ){
                reverse(str.begin()+j,str.begin()+i);
                j=i+1;
            }else if(i == str.length()-1){
                reverse(str.begin()+j,str.end());
            }
    }

    cout<<str;
}