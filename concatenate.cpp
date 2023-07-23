#include<iostream>
using namespace std;
void concatenate(string str1,string str2){
    string s3;
    s3 = str1 +str2;
    cout<<s3<<endl;
    }
string str;
int main(){
string s1,s2;
cin>>s1>>s2;
concatenate(s1,s2);
}