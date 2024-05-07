#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a number "<<endl << "To check whether it is divisible by 2 and 3 "<<endl;
    int numb1;
    cin>>numb1;
    if(numb1 % 2 == 0 && numb1 % 3 == 0){
        cout<< " The number "<< numb1<< " "<<"is divisble by 2 and 3";
    }else if(numb1 % 2 == 0){
         cout<< " The number "<< numb1<< " "<<"is divisble by 2";
    }else if(numb1 % 3 == 0){
         cout<< " The number "<< numb1<< " "<<"is divisble by 3";
    }else{
         cout<< " The number "<< numb1<< " "<<"is neither divisble by 2 and 3";
    }
    return 0;
}