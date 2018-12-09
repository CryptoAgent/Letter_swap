#include <iostream>
#include <string>
using namespace std;
#include "SH.h"

int main(){
cout<<"Please enter message\r\n>";
string mess = GetStr();
int len = GetLen(mess);
string even;
string odd;
for(int i = 0;i<len;i++){
    if((i+1)%2!=0){
        odd+=mess[i];
    }else{
        even+=mess[i];
    }
}
cout<<even<<endl;
cout<<odd<<endl;
//decryption
string decr;
for(int i = 0;i<len;i++){
    if(odd[i]!='\0'&&even[i]!='\0'){
        decr+=odd[i];
        decr+=even[i];
    }
}
cout<<decr;
return 0;
}
