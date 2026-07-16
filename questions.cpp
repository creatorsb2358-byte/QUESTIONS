///Intersection of two arrays:

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums1 = {1,2,3,4};
    vector<int> nums2 = {2,3};
    int size1 = nums1.size();
    int size2 = nums2.size();
    vector<int> ans ;
        
    for(int i = 0; i<size1 ; i++){
        for(int j = 0; j< size2 ; j++){
            if(nums1[i] == nums2[j]){
                bool found = false ;
                for(int val : ans){ 
                    if(nums1[i] == val ){
                        found = true;
                    }
                }if(found == false ){
                    ans.push_back(nums1[i]);
                }
            }
        }
            
    }
    for(int i : ans){
        cout << i;
    }

}
