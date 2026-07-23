/// squares of sorted array:

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {-4,-2,1,3,10};
    int size = nums.size();
    int st = 0 , end = size -1;
    vector<int> ans;
    while(st <=end){            
        int sq_st = nums[st] * nums[st];
        int sq_end = nums[end] * nums[end];
        if(sq_st > sq_end){
            ans.push_back(sq_st);
            st++;
        }else if(sq_end > sq_st){
            ans.push_back(sq_end);
            end--;
        }else if(st == end){
            ans.push_back(sq_st);
            st++;
        }else{
            ans.push_back(sq_end);        
            end--; 
        }
    }
    reverse(ans.begin() , ans.end());
    ///now print elements of ans ;
}

