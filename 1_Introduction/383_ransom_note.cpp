#include <iostream>
#include <string>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    for(auto &i: ransomNote){
        //busqueda del caracter en magazine (retorna -1 si no lo encuentra)
        int searchIndex = magazine.find(i);
        if(searchIndex == -1) return false;
        else{
            //substring para modificar magazine eliminando el caracter encontrado, example: "helpme", 'e' -> "hlpme"
            magazine = magazine.substr(0, searchIndex) + magazine.substr(searchIndex+1);
        }

    }
    return true;
}

int main(){
    int cases;
    string ransomNote, magazine;
    cin>>cases;
    while(cases--){
        cin >> ransomNote >> magazine;
        cout << canConstruct(ransomNote, magazine) << endl;
        
    }
    return 0;
}