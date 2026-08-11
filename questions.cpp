///valid palindrome:

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string s = "abbabcbabcbb";
    string part = "abc";
    while(s.find(part)<s.length() && s.length()>0)
    {
        s.erase(s.find(part),part.length());
    }
    cout << s;
}