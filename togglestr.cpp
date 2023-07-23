#include<iostream>
using namespace std;
void upper_to_lower(char ch[],int n){
    if(ch[0]>='A'&&ch[0]<='Z'){
        for(int i=0;i<n;i++){
            if(ch[i]>='a'&&ch[i]<='z'){
                ch[i]=ch[i]-'a'+'A';
            }
        
        cout<<ch[i];
        }
    }
}
void lower_to_upper(char ch[],int n){
    if(ch[0]>='a'&&ch[0]<='z'){
        for(int i=0;i<n;i++){
            if(ch[i]>='A'&&ch[i]<='Z'){
                ch[i]=ch[i]-'A'+'a';
            }
            cout<<ch[i];
        }
    }
}
int main(){
   
    char ch[100];
    int n ;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ch[i];
    }
    upper_to_lower(ch,n);
    lower_to_upper(ch,n);
    return 0;
}