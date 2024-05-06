#include <iostream>
using namespace std;

int main(){
char alpha;
cin>>alpha;
char lower = tolower(alpha);
if(lower =='a' ||lower =='e' ||lower =='i' ||lower =='o' ||lower =='u' ){
     cout<< alpha << " it is a Vowel. ";
}else cout<< alpha << " it is not a Vowel. ";


/*
int isLowerCase, isUpperCase;

isLowerCase =((alpha == 'a')||alpha == 'e'||alpha == 'i'||alpha =='o'||alpha == 'u');
isUpperCase =(alpha == 'A'||alpha == 'E'||alpha == 'I'||alpha =='O'||alpha == 'U');
if(isLowerCase || isUpperCase){
    cout<< alpha << " it is a Vowel. ";
}else cout<< alpha << " it is not a Vowel. ";
*/

return 0;
}