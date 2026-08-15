///Defanging an IP address:

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s = "1.1.1.1";
    string ans = "";
    for(int i = 0 ;i < s.length() ; i++){
        if(s[i] == '.'){
            ans += "[.]";
        }else{
            ans += s[i];
        }
    }
    return s;
}