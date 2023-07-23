#include<iostream>
#include<string.h>
using namespace std;
string delAlternate(string S){
    string s3;
   for(int i=0;i<S.size();i++){
    if(i%2==0){
       s3 = S[i];
    }
   }
   return s3;
    }
string str;
int main(){
string str;
cin>>str;
cout << delAlternate(str);

}