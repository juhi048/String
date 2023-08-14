#include<iostream>
using namespace std;
int main(){
    string str = "adchvuena";
    for(int i = 0; i<=str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
    }
    cout<<str<<endl;

    // A=65
    // a=97
    
    return 0;
}
