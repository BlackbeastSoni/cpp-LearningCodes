#include<iostream>
using namespace std;

int main(){
    int numb;
    cout<<"Enter a number to check even/odd : ";
    cin>> numb;
    if (numb % 2 == 0){
        cout<<numb<<" is Even ."<<endl;
    }else{
        cout<<numb<<" is Odd ."<<endl;
    }
return 0;
}