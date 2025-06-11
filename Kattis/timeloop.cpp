// URL: https://open.kattis.com/problems/timeloop

#include <iostream>

using namespace std;

int main()
{
  int contador;   
  int N;
  contador = 1;
  
  cin >> N;
  while (contador <= N)        
  {
    cout << contador << " Abracadabra" << endl; 
    contador++;               
  }
  return 0;
}