/**
 * Given an integer array nums sorted in non-decreasing order, 
 * return an array of the squares of each number sorted in non-decreasing order.
 * 
 * Input: nums = [-4,-1,0,3,10]
 * Output: [0,1,9,16,100]
 * Explanation: After squaring, the array becomes [16,1,0,9,100].
 * After sorting, it becomes [0,1,9,16,100].
 * 
 */

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    for (int i=0; nums[i]<0; i++){
        nums[i] = nums[i]*-1;
    }

    sort(nums.begin(), nums.end());
    
    for (int i=0; i<nums.size(); i++){
        nums[i] = nums[i]*nums[i];
    }

    return nums;
}


int main(){
    int a;
    vector<int> nums;

    while(cin>>a){
        nums.push_back(a);
    }

    nums = sortedSquares(nums);
    // for (auto &i : nums){
    //     cout << i << endl;
    // }
    



    return 0;
}