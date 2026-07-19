///container with most water:

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int ans = 0;
    int size = height.size();
    int st = 0, end = size-1;
    while(st <= end){
        int breath = end - st;
        int heigh = min(height[st],height[end]);
        int area = breath * heigh ;
        ans = max(ans , area); 
        height[st] < height[end] ? st++:end--;

    }
    cout << "the maximum area is :" << ans;


}

