///revise capacirty to store d packages:

class Solution {
public:
    bool isvalid(vector<int>& arr, int days , int limit){
        int size = arr.size();
        int weight = 0;
        int day = 1 ;
        for(int i = 0 ; i < size ; i++ ){
            if(arr[i] > limit){

                return false;
            }
            if(weight + arr[i] <= limit){
                weight += arr[i];
            }else{
                day++;
                weight = arr[i];
            }
        }
        if(day <= days){
            return true;
        }else{
            return false;
        }
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        int size = weights.size();
        for(int i = 0 ;i < size ; i++){
            sum += weights[i];
        }
        int st = *max_element(weights.begin(), weights.end()) , end =sum ;
        int ans = -1;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(isvalid(weights , days , mid)){
                ans = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return ans ;

        
    }
};