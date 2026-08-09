///Reverse of string:

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<char> s = {'h','e','l','l','o'};
    int st = 0 , end = s.size()-1;
    while(st < end){
        swap(s[st++],s[end--]);
    }
    for(char s : s){
        cout << s;
    }
}