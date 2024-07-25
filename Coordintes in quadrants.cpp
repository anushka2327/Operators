// program to find the coordinates in which quadrant 
#include <iostream>
using namespace std;

int main() {
    int x;
    cout<<"enter x:";
    cin>>x;
    int y;
    cout<<"enter y:";
    cin>>y;
    if (x&y>0){
        cout<<"cordinates x and y lie in the first quadrant ";
    }
    else if(x&y<0){
        cout<<"cordinate x and Y lie in third quadrant" ;
    }
    else if(x<0&y<0){
        cout<<"cordinate x and y lie in second quadrant ";
    }
    else{
        cout<<"they lie in fourth quadrant ";
    }
    

    return 0;
}
//enter x:3
//enter y:4
//cordinates x and y lie in the first quadrant 

//=== Code Execution Successful ===