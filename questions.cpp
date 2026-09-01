/// combination sum:

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool ispalin(string part){
    string part2 = part;
    reverse(part2.begin(),part2.end());
    return part2 == part;
}

void palpart(string s ,vector<string>& partitions, vector<vector<string>>& ans){
    if(s.size() == 0){
        ans.push_back(partitions);
        return;
    }
    for(int i = 0 ; i< s.size(); i++){
        string part = s.substr(0,i+1);
        if(ispalin(part)){
            partitions.push_back(part);
            palpart(s.substr(i+1),partitions,ans);
            partitions.pop_back();
        }
    }
}
vector<vector<string>> partition(string s) {
    vector<string> partitions;
    vector<vector<string>> ans;
    palpart(s, partitions, ans);
    return ans;
}

int main(){
    string s = "aab";
    partition(s);
}