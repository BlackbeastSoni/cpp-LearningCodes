#include <iostream>
using namespace std;
int main(){
    int a ;
    int b;
    int c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" it is the biggest number ";            
        }else{
            cout<<c<<" it is the biggest number ";  
        }
    }else if(b>c){            
        cout<<b<<" it is the biggest number ";  
    } else{
         cout<<c<<"it is the biggest number";
    }
   return 0;
}