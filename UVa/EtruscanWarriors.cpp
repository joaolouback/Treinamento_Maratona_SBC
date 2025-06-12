//URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=78&page=show_problem&problem=2661

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {

    long long contador;
    long long fileiras;
    long long guerreiros;
    vector<long long>fileiras_totais = {}; // Vetor para armazenar o número de fileiras
    
    cin >> contador;
    
    while (contador--){
        cin >> guerreiros;
        fileiras = (-1 + sqrt(1 + 8*guerreiros)) /2; // Fórmula para calcular o número de fileiras
        fileiras_totais.push_back(fileiras);
    }
    
    for (long long fileira = 0; fileira < fileiras_totais.size(); fileira++){
        cout << fileiras_totais[fileira] << endl;
    }

   return 0;
}