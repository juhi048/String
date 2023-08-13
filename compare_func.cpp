#include<iostream>
using namespace std;
int main(){
    string s1 = "abc";
    string s2 = "abc";

    if(s2.compare(s1)){
        cout<<"String are not equal"<<endl;
    }
    else{
        cout<<"String are equal"<<endl;
    }
    
    return 0;
}