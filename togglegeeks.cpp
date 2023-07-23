#include<iostream>
#include<string.h>
using namespace std;
string modify (string s)
    { 
        char temp[] = " ";
 while(s[0]>='a'&&s[0]<='z' || s[0]>='A'&&s[0]<='Z'){
        for(int i=0; i< s.length();i++)
            {
            if(s[0]>='A'&& s[0]<='Z'){
                if(s[i+1]>='a'&&s[i+1]<='z')
                   s[i]= s[i]-'a'+'A';
                }
                    
            
            else{
                if(s[i+1]>='A'&&s[i+1]<='Z')
                    s[i]=s[i]+'a'-'A';
            }
            temp[i] = s[i];
            }

 }
 return temp;

}
int main(){
    string s;
    getline(cin , s);
    cout << modify(s);
    return 0;
}
       
       
              
       
      
  