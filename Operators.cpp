// Online C++ compiler to run C++ program online
//take input from user and perform:
//AND (&)
//OR (|)
//NOT (~)
//XOR(^)
//LEFT SHIFT AND 
#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = 3;
    int AND,OR,XOR,NOT,LEFTSHIFT,RIGHTSHIFT;
    LEFTSHIFT=a>>2;
    RIGHTSHIFT=b<<2;
    AND = a&b;
    OR = a|b;
    NOT = ~a;
    XOR = a^b;
    cout<<AND<<endl;
    cout<<OR<<endl;
    cout<<NOT<<endl;
    cout<<XOR<<endl;
    cout<<LEFTSHIFT<<endl;
    cout<<RIGHTSHIFT<<endl;
    return 0;
}

//OUTPUT:
//2
//3
//-3
//1
//0
//12


//=== Code Execution Successful ===