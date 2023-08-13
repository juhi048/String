#include<iostream>
#include<string>
using namespace std;
int main(){

    string str = "makefunction";

    cout<<str.find("fun")<<endl;

    str.erase(3,5);
    cout<<str<<endl;

    cout<<str.insert(4,"a")<<endl;

    cout<<str.size()<<endl;

    cout<<str.length()<<endl;

    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;

    string s1 = str.substr(2,2);
    cout<<s1<<endl;

    string str1 = "678";
    int str2 = stoi(str1);
    cout<<str2+3<<endl;

    int str3 = 45;
    string str4 = to_string(str3) + "4";
    cout<<str4<<endl;
    
    return 0;
}