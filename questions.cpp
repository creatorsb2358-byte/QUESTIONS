/// permutation in string revision:

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool ispermutation(int freq1[], int freq2[]){
    for(int i = 0 ; i < 26 ; i++){
        if(freq1[i] == freq2[i]){
            return true;
        }
    }
    return false;
}

int main(){
    string part = {'a','b'};
    string s = {'e','i','d','b','a','o','o'};
    int freq1[26];
    for(int i = 0 ; i< 26 ;i++){
        freq1[part[i] - 'a']++;
    }
    int windowsize = part.length();
    for(int i = 0 ; i < s.length() ; i++){
        int windidx = 0 , idx = i ;
        int freq2[26];
        while(windidx < windowsize && idx < s.length()){
            freq2[s[idx]-'a']++;
            windidx++ , idx++;
        }
        if(ispermutation(freq1 , freq2)){
            return true;
        }
    }
    return false;
}
