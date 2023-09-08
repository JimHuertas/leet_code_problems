/**
 * Given an array nums of integers, return how many of them contain an even number of digits.
 * Input: nums = [12,345,2,6,7896]
 * Output: 2
 * Explanation: 
 * 12 contains 2 digits (even number of digits). 
 * 345 contains 3 digits (odd number of digits). 
 * 2 contains 1 digit (odd number of digits). 
 * 6 contains 1 digit (odd number of digits). 
 * 7896 contains 4 digits (even number of digits). 
 * Therefore only 12 and 7896 contain an even number of digits.
*/

#include <iostream>
#include <vector>
using namespace std;



int findNumbers(vector<int>& nums) {
    int count = 0;
    int number;
    int number_digits = 1;
    for (auto &i : nums){
        number = i;
        while(number/10){
            number = number/10;
            number_digits++;
        }

        if(number_digits%2 == 0){
            count++;
        }

        number_digits = 1;
    }

    return count;
}


int main(){
    vector<int> vec;
    int n;
    while(cin>>n){
        vec.push_back(n);
    }

    n = findNumbers(vec);

    cout << 1%10 << "  "<< 1/10 << "  " << n << endl;
    return 0;
}

/**
 * Runtime
    Details
    4ms
    Beats 67.59%of users with C++
    Memory
    Details
    9.86MB
    Beats 31.12%of users with C++
*/