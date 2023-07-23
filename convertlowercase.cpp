#include<iostream>
#include<string>
using namespace std;
int main(){

string str ;
getline(cin , str);
for(int i=0; i<str.size();i++)
{ //convert the string lowercase to uppercase
    if(str[i]>= 'a' && str[i]<='z')
       str[i] -= 32;
}
cout << str;
for(int i=0;i<str.size(); i++)
{//here convert the string uppercase to lowercase
    if(str[i] >= 'A' && str[i]<='Z')
    str[i] += 32;
}
cout<< str <<endl;
//by using buildinfunction converting in uppercase
transform(str.begin(), str.end(),::toupper);
cout<< s << endl;
return 0;
}