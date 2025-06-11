//URL: https://open.kattis.com/problems/different

#include <iostream>

using namespace std;

int main()
{
  long int N1, N2, dif;
  
  while (  cin >> N1 >> N2){
      
      dif  = N1 - N2; 
      
      if (dif < 0) { 
        dif = dif * (-1); // Converte o número negativo para positivo
    }
    
    cout << dif << endl; 
  }
  return 0;
}