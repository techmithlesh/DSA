#include<iostream>
using namespace std;

int main(){
    cout<<"Hello World!" <<endl;
    cout<<"Starting DSA Journey";

    // Q1. I/P-> a,b if a>b -> Answer is 'A' Else b>a -> 'B'

    char a, b;
    cout<<"Enter the Character";
    cin>>a>>b;

    if (a >b )
    {
        cout<<"A";
    }else{
        cout<<"B";
    }
    
    // Q2. 'a' -> 'z' => "Lowercase" 'A' -> 'Z' => "Uppercase" '0' -> '9' => "Number"

    char ch;
    cout<<"Enter the Character" <<endl;
    cin>>ch;

    if (islower(ch))
    {
        cout<<"It is lowercase";
    }
    else if (isupper(ch))
    {
         cout<<"It is Uppercase";

    }
    else if(isdigit(ch))
    {
       cout<<"It is a Numeric";
    }else{
        cout<<"Other Character";
    }
    
}
