#include<iostream>
using namespace std;
int main(){
    string st = "tyjfbfyffjghfyu";
    int freq[26];

    for(int i=0;i<st.size();i++){
        freq[i]=0;
    }

    for(int i = 0;i<st.size();i++){
        freq[st[i]-'a']++;
    }

    char ans = 'a';
    int maxfreq = 0;

    for(int i=0;i<st.size();i++){
        if(freq[i]>maxfreq){
            maxfreq=freq[i];
            ans=i+'a';
        }
    }

    cout<<maxfreq<<" "<<ans<<endl;
 
return 0;
}
