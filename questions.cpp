///find the highest altitude:

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> gain = {-5,1,5,0,-7};
    int size = gain.size();
    int cs = 0;
    int ans = INT32_MIN;
    for(int i = 0 ; i< size ;i++){
        cs+= gain[i];
        if(i > 0){
        gain[i] = cs;
        }
        ans = max(gain[i] , ans);
    }
    if(ans < 0){
        return 0;

    }else{
        return ans;
    }

}

