/// generate parentheses:

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

void solve(int n , int open , int close , string curr ,vector<string>& ans){
    if(open == n && close == n){
        ans.push_back(curr);
        return;
    }
    if(open < n){
        curr.push_back('(');
        solve(n,open+1,close,curr,ans);
        curr.pop_back();
    }
    if(close < open){
        curr.push_back(')');
        solve(n,open,close+1,curr,ans);
        curr.pop_back();
    }
    
}
vector<string> generateParenthesis(int n) {
    int close = 0,open = 0;
    string curr;
    vector<string> ans;
    solve(n,open,close,curr,ans);
    return ans;
}