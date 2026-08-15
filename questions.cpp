///string compression:

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    vector<int> chars = {'a','a','b','b','c','c','c'};
    int idx = 0 ;
    for(int i = 0 ;i < chars.size() ; i++){
        int ch = chars[i];
        int count = 0 ;
        while(i < chars.size() && chars[i] == ch){
            count ++ , i++;
        }
        if(count == 1){
            chars[idx++] = ch;
        }else {
            chars[idx++] = ch;
            string str = to_string(count);
            for(char digit : str){
                chars[idx++] = digit;
            }
        }
        i--;
    }
    chars.resize(idx);
    return idx;
}