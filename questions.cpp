/// search in a 2D matrix:

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool istrue(vector<vector<int>> matrix , int target , int row){
    int n = matrix[0].size();
    int st = 0 , end = n-1;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(target == matrix[row][mid]){
            return true;
        }else if(target > matrix[row][mid]){
            st = mid+1;
        }else{
            end = mid-1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int> > &matrix, int target){
    int m = matrix.size();
    int n = matrix[0].size();
    int st = 0 , end = m-1;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(target >= matrix[mid][0] && target <= matrix[mid][n-1]){
            istrue(matrix , target , mid );
            return true;
        }else if(target >= matrix[mid][n-1]){
            st = mid +1 ;
        }else {
            end = mid-1;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    int target = 8;
    cout << searchMatrix(matrix , target);
}