#include <iostream>
#include<bits/stdc++.h> 

using namespace std;

// Driver code 
int main() 
{ 
    string str;
    cout<<"Ingrese una palabra: ";
    cin>>str;
    int i, u; 
  
    for (i = 0; i < str.length(); i++)  
    { 
        // If it is the first word 
        // of the string then print it. 
        if (i == 0) 
            cout<<str[i]; 
  
        // If it is the last word of the string 
        // then also print it. 
        if (u == str.length() - 1) 
            cout<<str[u]; 
  
        // If there is a space 
        // print the successor and predecessor 
        // to space. 
        if (str[i] == ' ')  
        { 
            cout<<str[i-1]<<" "<<str[i+1]; 
        } 
    }

    if (str[i] == str[u]) {
        cout<<"Hola";
    } else {
        cout<<"Adiós";
    }
} 