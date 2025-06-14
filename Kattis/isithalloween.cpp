// URL: https://open.kattis.com/problems/isithalloween

#include <iostream>
using namespace std;

int main() {
    string mes;
    int dia;

    cin >> mes >> dia;

    if ((mes == "OCT" && dia == 31) || (mes == "DEC" && dia == 25)) {
        cout << "yup\n";
    } else {
        cout << "nope\n";
    }

    return 0;
}
