#include<iostream>
using namespace std;
void count_vowel(char ch[],int n){
    int count = 0;
    for(int i=0 ; i<n ; i++){
        
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='U'||ch[i]=='O'||ch[i]=='I'){
            count = count+1;
        }

       cout << count ;
    
    }
   

}
int main(){
    char ch[100];
    int n = sizeof ch/sizeof ch[0];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ch[i];

    }
    count_vowel(ch,n);

}