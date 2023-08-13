#include<iostream>
using namespace std;
int main(){
    string str1 = "family is a ";
    string str2 = "love of my life";

    string str3 = str1+str2;
    cout<<str3<<endl;
    
    str1.append(str2);
    cout<<str1<<endl;
    return 0;
}