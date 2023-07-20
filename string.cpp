#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "hello";
    str+= ' ';
    str+="world";

   // cout<<str; //prints the entire string

    // for(auto c : str){  //foreach loop on string
    //     cout<<c<<" ";   //printing each character in the string
    // }

   // getline(cin,str);   // take entire sentence with spaces as input , breaks with endline(enter);

   for(auto it = str.begin(); it<str.end(); it++){
    cout<<*it;
   }

}