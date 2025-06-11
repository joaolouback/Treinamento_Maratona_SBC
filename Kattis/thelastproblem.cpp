//URL: https://open.kattis.com/problems/thelastproblem

#include <iostream> // Biblioteca padrão de entrada e saída
using namespace std; // Evita ter que usar std:: antes de cout, cin, etc.
 
int main() {
    string name; // Declara uma variável para armazenar o nome da pessoa

    getline(cin, name); // Lê uma linha inteira da entrada, incluindo espaços

    // Imprime a mensagem final formatada com o nome inserido
    cout << "Thank you, " << name << ", and farewell!" << endl;

    return 0; // Indica que o programa terminou com sucesso
}
