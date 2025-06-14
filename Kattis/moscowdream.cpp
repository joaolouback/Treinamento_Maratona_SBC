// URL: https://open.kattis.com/problems/moscowdream

#include <iostream>
using namespace std;

int main() {
    int E, M, H, N;
    cin >> E >> M >> H >> N;

    if (E > 0 && M > 0 && H > 0 && (E + M + H) >= N && N >= 3) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}

