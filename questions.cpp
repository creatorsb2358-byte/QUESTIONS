///permutation in string:

#include <iostream>
#include <vector>
#include <string>
using namespace std;


bool isfreqsame(int freq1[] , int freq2[]){
    for(int i = 0 ; i<26 ;i++){
        if(freq1[i] != freq2[i]){
            return false;
        }
    }
    return true;
}
bool checkInclusion(string s1, string s2) {
    int freq1[26] = {0};
    for(int i = 0 ; i<s1.length(); i++){
        freq1[s1[i]-'a']++;
    }
        
    int windowsize = s1.length();
    for(int i = 0 ;i<s2.length();i++){
        int windidx = 0 , idx = i;
        int freq2[26]={0};
        while(windidx < windowsize && idx < s2.length()){
            freq2[s2[idx]-'a']++;
            windidx++, idx++;
        }
        if(isfreqsame(freq1, freq2)){
            return true ;
        }
    }
    return false;
        
}