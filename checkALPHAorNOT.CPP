#include<iostream>
#include<string>

using namespace std;
int main(){
    char ch;
    cin>>ch;
    
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
        cout<<"it is alphabet"<<endl;
    }
    else{
        cout<<"not an alphabet";
    }
}