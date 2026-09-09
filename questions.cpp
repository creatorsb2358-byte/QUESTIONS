/// letter combination :

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

void solve(string curr , int i , string digits, vector<string>& ans){
    if(curr.size() == digits.size()){
        ans.push_back(curr);
        return;
    }
    vector<string> mapping = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string letters = mapping[digits[i]-'0'];
    for(char ch : letters){
        curr.push_back(ch);
        solve(curr,i+1,digits,ans);
        curr.pop_back();
    }
}
vector<string> letterCombinations(string digits) {
    int i = 0;
    string curr;
    vector<string> ans;
    solve(curr,i,digits,ans);
    return ans;
}