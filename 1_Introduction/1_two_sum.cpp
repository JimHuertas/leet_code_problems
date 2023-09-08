/**
 * Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
 * You may assume that each input would have exactly one solution, and you may not use the same element twice.
 * You can return the answer in any order.
*/
#include <iostream>
#include <vector>
#include <math.h>
using vec = std::vector<long long>;


vec twoSum(vec nums, int target) {
    vec result;
    if(nums.size() < 2 || nums.size() > pow(10,4)){
        return result;
    }
    int pos1 = 0;
    int pos2 = 0;
        
    for (int i = 0; i < nums.size(); i++){
        if(target > nums[i]){
            pos1 = i;
        }
        if(nums[pos1] + nums[i] == target){
            
        }
    }
    

    

    

    
    return ;
}


int main(){
    const std::vector<vec> a = {
        {2,7,11,15},
        {3,2,4},
        {3,3}
    };

    vec target = {9,6,6};

    for (int i = 0; i < a.size(); i++){
        twoSum(a[0], target[0]);
    }



    return 0;
}
