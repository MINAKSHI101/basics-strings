#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main(){
    string str;
    getline(cin,str);
    int fre[26];
    for(int i=0 ;i<26;i++){
        fre[i]=0;
    }
    for(int i=0;i<str.size();i++){
        fre[str[i]-'a']++;
    }
    char ans = 'a';
    int maxf = 0;
    for(int i=0;i<26;i++){
        if(fre[i]>maxf){
            maxf = fre[i];
            ans = i +'a';
        }
    }
    cout<< maxf << " " << ans << endl;
}