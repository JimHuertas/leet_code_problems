/**
 * 1 <= s.length <= 15
 * s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
 * It is guaranteed that s is a valid roman numeral in the range [1, 3999].
*/

#include <iostream>
using namespace std;

long romanToInt(string &s) {
    long sum = 0;
    for(int i=0; i<s.size(); i++){
        switch (s[i]){
        case('I')://1
            sum += 1;
            break;
        case('V')://5
            if(i>0){
                if(s[i-1] == 'I'){
                    sum+=3;
                    break;
                }
            }
            sum += 5;
            break;
        case('X')://10
            if(i>0){
                if(s[i-1] == 'I'){
                    sum+=8;
                    break;
                }
            }
            sum += 10;
            break;
        case('L')://50
            if(i>0){
                if(s[i-1] == 'X'){
                    sum+=30;
                    break;
                }
            }
            sum += 50;
            break;
        case('C')://100
            if(i>0){
                if(s[i-1] == 'X'){
                    sum+=80;
                    break;
                }
            }
            sum += 100;
            break;
        case('D')://500
            if(i>0){
                if(s[i-1] == 'C'){
                    sum+=300;
                    break;
                }
            }
            sum+=500;
            break;
        case('M')://1000
            if(i>0){
                if(s[i-1] == 'C'){
                    sum+=800;
                    break;
                }
            }
            sum += 1000;
            break;
        
        default:
            break;
        }
    }
    return sum;
}

int main(){
    string c;
    while(cin >> c){
        if(c.size() < 1 && c.size() > 15)
            return 0;
        long number = romanToInt(c); 
        cout << number << endl;
    }


    return 0;
}