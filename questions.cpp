///product of array except itself:

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4};
    int size = nums.size();
    vector<int> preffix(size, 1) ;
    vector<int> suffix(size,1) ;
    vector<int> ans(size,1);
    
    for(int i = 1 ; i < size ;i++ ){
        preffix[i] = preffix[i-1] * nums[i-1];
    }
    for(int i = size -2 ; i>= 0; i--){
        suffix[i] = suffix[i+1]*nums[i+1];
    }
    for(int i = 0 ;i< size ;i++){
        ans[i] = preffix[i]*suffix[i];
    }
    for(int i : ans){
        cout << i << endl ;
    }
}

