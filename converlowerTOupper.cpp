#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main(){
    string m;
    getline(cin,m);

    // lower to upper conversion

   for(int i=0; i<m.size() ; i++){
        if(m[i]>='a' && m[i]<='z'){
            m[i]= m[i]-32;
        }
    }
    cout << m <<endl;
    

    // upper to lower conversion

      for(int i=0; i<m.size() ; i++){
        if(m[i]>='A' && m[i]<='Z'){
            m[i]= m[i]+32;
        }
    }
    cout << m <<endl;

    // by using inbuilt function


   // in lowercase
    transform(m.begin() , m.end() ,m.begin(), ::tolower);
    cout<< m << endl;

   // in uppercase
     transform(m.begin() , m.end() ,m.begin(), ::toupper);
    cout<< m << endl;
    return 0;
}