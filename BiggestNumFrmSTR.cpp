#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main(){
    string mini;
    getline(cin,mini);
    sort(mini.begin(),mini.end(),greater<int>());
    cout<<mini<<endl;
    return 0;

}