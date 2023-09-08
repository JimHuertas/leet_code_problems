/**
 * Given a binary array nums, return the maximum number of consecutive 1's in the array.
 * 
 * Input: nums = [1,1,0,1,1,1]
 * Output: 3
 * Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
*/
#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int count=0;
    int result=0;
    for (auto &i : nums){
        if(i){
            count++;
        }else{
            result = (result > count) ? result : count;
            count = 0;
        }
    }

    result = (result > count) ? result : count;

    return result;
}

int main(){
    

    vector<int> vec;
    int n;
    while(cin>>n){
        vec.push_back(n);
    }

    n = findMaxConsecutiveOnes(vec);

    cout << n << endl;

    return 0;
}