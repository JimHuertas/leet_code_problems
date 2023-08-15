/**
 * You are given an m x n integer grid accounts where accounts[i][j] 
 * is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. 
 * Return the wealth that the richest customer has.
 * 
 * A customer's wealth is the amount of money they have in all their 
 * bank accounts. The richest customer is the customer that has the 
 * maximum wealth.
*/

#include <iostream>
#include <vector>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int max = 0;
    int sum = 0;
    for(auto vec: accounts){
        sum = 0; 
        for(auto&i : vec){
            sum += i;
        }
        max = (max >= sum) ? max : sum;
    }        

    return max;
}

void printResult(vector<vector<int>> vec){
    int result = maximumWealth(vec);
    cout << result << endl;
}

int main(){
    vector<vector<int>> accounts = {{1,2,3},{3,2,1}};
    vector<vector<int>> accounts2 = {{1,5},{7,3},{3,5}};
    vector<vector<int>> accounts3 = {{2,8,7},{7,1,3},{1,9,5}};
    vector<vector<int>> accounts4 = {{2,8,7,7,1,3,1,9,5}};

    printResult(accounts);
    printResult(accounts2);
    printResult(accounts3);
    printResult(accounts4);
    return 0;
}