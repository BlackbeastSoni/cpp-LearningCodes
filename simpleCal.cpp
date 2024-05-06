#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers "<<endl;
    cin>> a >> b;
    cout<<"Choose an operator to perform Calculation"<<endl<<"+ : Addition"<<endl<<"- : Substraction"<<endl<<"* : Multiplication"<<endl<<"/ : Division"<<endl;
    char symbol;
    cin >> symbol; 
    switch (symbol){
        case '+':
        cout<<"The Addition of "<<a<<" and "<<b << " is :"<< a+b;
        break;
        case '-':
        cout<<"The Substraction of "<<a<<" and "<<b << " is :"<< a-b;
        break;
        case '*':
        cout<<"The Multiplication of "<<a<<" and "<<b << " is :"<< a*b;
        break;
        case '/':
        cout<<"The Division of "<<a<<" and "<<b << " is :"<< a/b;
        break;
        default:
        cout<<"Please Enter a Valid Operator";
        break;
    }
    return 0;
}