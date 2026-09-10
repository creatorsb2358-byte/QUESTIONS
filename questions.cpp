/// letter case permutation :

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

void solve(string s , string curr , vector<string>& ans, int i){
    if(curr.size() == s.size()){
        ans.push_back(curr);
        return;
    }
    if(isdigit(s[i])){
        curr.push_back(s[i]);
        solve(s,curr,ans,i+1);
        curr.pop_back();
    }else {
        curr.push_back(tolower(s[i]));
        solve(s,curr,ans,i+1);
        curr.pop_back();

        curr.push_back(toupper(s[i]));
        solve(s,curr,ans,i+1);
        curr.pop_back();
    }
    
}

vector<string> letterCasePermutation(string s) {
    vector<string> ans;
    string curr;
    int i = 0;
    solve(s,curr,ans,i);
    return ans;
}