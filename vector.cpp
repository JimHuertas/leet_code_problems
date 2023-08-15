#include <iostream>
#include <map>
#include <vector>
using namespace std;

map<string, int> indices;
int cont = 1;
void generateIndices(string word, int length, char lastChar) {
    if (length == 0) {
        indices[word] = cont++;
        return;
    }

    for (char c = lastChar + 1; c <= 'z'; c++) {
        generateIndices(word + c, length - 1, c);
    }
}

int main() {
    // cout<<'a' - 1<<endl;
    // for(int i=0; i<26; i++){
    //     std::cout<< char(i+96) <<std::endl;
    // }

    // std::cout<<char(98)<<std::endl;


    for (int len = 1; len <= 2; len++) {
        generateIndices("", len, 'a' - 1);
    }

    // std::map<std::string, int>::iterator it;
    // for (it = indices.begin(); it != indices.end(); ++it) {
    //     std::cout << "Clave: " << it->first << ", Valor: " << it->second << std::endl;
    // }

    string word;
    while (std::cin >> word) {
        std::cout << indices[word] << std::endl;
    }

    return 0;
}