#include <iostream>
using namespace std;
int main(){
    int row = 6;
    int col = 6;
    for(int i= 1; i<6 ;i++){
        for(int j = 5 ; j>i ;j--){
            
               cout<<"*"; 
        }
        cout<<endl;
    }
}