/**
 * Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
 * Return the running sum of nums.
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    vector<int> result;
    int sum = 0;
    for(auto &i : nums){
        sum += i;
        result.push_back(sum);
    }

    return result;
}

void printResult(vector<int> vec){
    vector<int> result = runningSum(vec);
    for(auto &i : result){
        cout<< i << " ";
    }
    cout<<endl;
}

int main(){
    vector<int> nums = {1,2,3,4};
    vector<int> nums2 = {1,1,1,1,1};
    vector<int> nums3 = {3,1,2,10,1};
    
   printResult(nums);
   printResult(nums2);
   printResult(nums3);
    

}