#include<iostream>
using namespace std;

class fruit{        //user defined data type
public:             //access specifier
    string name;
    string color;
    string taste;

};

int main(){
    fruit apple; //object
    fruit banana,grapes,litchi; //objects(variables of fruit data type).

    apple.name = "apple";
    apple.color = "red";
    apple.taste = "sweet";

    cout<<apple.name<<endl;
    cout<<apple.taste<<endl;
    cout<<apple.color<<endl;
    

}