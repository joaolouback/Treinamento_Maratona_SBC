// URL: https://open.kattis.com/problems/tarifa

#include <iostream>
#include <iomanip> // Biblioteca para manipulação de precisão de saída
using namespace std;

int main() {
    
    int mb_disp, n_mes, uso, sobra = 0;
    
    cin >> mb_disp;
    
    cin >> n_mes;
    
    while(n_mes--){
        cin >> uso,
        sobra += (mb_disp - uso); // Calcula o espaço restante após o uso mensal
    }
    
    cout << mb_disp + sobra << endl;
    
    return 0;
}