#include<iostream>
using namespace std;
int main(){
    string str;
    //type 1
    cin>>str;
    cout<<str;
    //type 2
    string str1="Juhi";
    cout<<str1;

    //type 3
    string str3(5,'n');
    cout<<str3;

    //whole line
    // cin print only 1st word but with by using getline whole sentence geet printed
    string str4;
    getline(cin,str4);
    cout<<str4;

    string str5="juhi us a nice girl and she can do anything";
    str5.clear();
    cout<<str5<<endl;



    return 0;
}