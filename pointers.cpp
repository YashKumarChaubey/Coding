#include<bits/stdc++.h>
using namespace std;

int main(){
    int *ptr = NULL;

    int var = 10;

    ptr = &var; 

    //cout<<ptr;    prints adress of var in hexadecimal
    //cout<<*ptr;   prints value of var at adress ptr -> 10

    //in case of arrays 
    int arr[5] = {3,4,2,5,1};
    cout<<"int arr[5] = {3,4,2,5,1};"<<endl;

    cout<<"\narr      ->"<<arr<<endl;        //prints adress of first element of array
    cout<<"&arr     ->"<<&arr<<endl;         //prints adress of first element of array -> same as cout<<arr;
    cout<<"&arr[0]  ->"<<&arr[0]<<endl;      //prints adress of first element of array -> same as cout<<arr;

    cout<<"\n*arr       ->"<<*arr<<endl;       //prints value at first element of the array
    cout<<"*(arr+1)   ->"<<*(arr+1)<<endl;     //prints value at second element of the array
    cout<<"*(arr+2)   ->"<<*(arr+2)<<endl;     //prints value at third element of the array
    cout<<"*(arr+3)   ->"<<*(arr+3)<<endl;     //prints value at fourth element of the array
    cout<<"*(arr+4)   ->"<<*(arr+4)<<endl;     //prints value at fifth element of the array

    cout<<"\n(*arr+100) ->"<<(*arr+100)<<endl;       //prints value at first element+100 of the array -> 3+100 = 103
    


}