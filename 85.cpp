//Exception handeling
//Program to divide two numbers
//Throw an exception when the divisor is 0
#include <iostream>
using namespace std;

int main(){
    double numerator,denominator,divide;
    cout<<"Enter Numerator";
    cin>>numerator;
    cout<<"Enter Denominator";
    cin>>denominator;
    try{
        //throw exception if denominator is 0
        if(denominator==0)
        throw 0;
        //not executed if denominator is 0
        divide = numerator/denominator;
        cout<<numerator<<"/"<<denominator<<"="<<divide<<endl;
    }
    catch(int num_exception){
        cout<<"Error: Cannot divide by "<<num_exception<<endl;
    }
    return 0;
}