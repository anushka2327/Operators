/ Online C++ compiler to run C++ program online
// program to calculate the grade 
#include <iostream>
using namespace std;

int main() {
    
    float maths,eng,mara,sci,sst,avg;
    cout<<"enter the marks of maths";
    cin>>maths;
    cin>>eng;
    cin>>mara;
    cin>>sci;
    cin>>sst;
    avg = ((maths+eng+mara+sci+sst)/500)*100;
    
    if(avg>90){
        cout<<"GRADE 0";
    }
    else if (avg>80){
        cout<<"GRADE A++";
    }
    else if(avg>70){
        cout<<"GRADE A";
    }
    else if(avg>60){
        cout<<"GRADE b++";
    }
    else if(avg>40){
        cout<<"GRADE B";
    }
    else{
        cout<<"failed";
    }
    

    return 0;
}
//enter the marks of maths88
//90
//77
//88
//98
//GRADE A++
//=== Code Execution Successful ===
