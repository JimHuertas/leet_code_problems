#include <iostream>
#include <vector>
using namespace std;


int numberOfSteps(int num) {
    int steps = 0;
    while(num){
        if(num%2==0){
            num /= 2;
        } else{
            num--;
        }
        steps++;
    }

    return steps;
}

int main(){
    int n;
    while(cin >> n){
        cout << numberOfSteps(n) << endl;
        
    }
    
    return 0;
}