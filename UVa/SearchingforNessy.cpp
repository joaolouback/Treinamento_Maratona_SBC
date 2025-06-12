// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=submit_problem&problemid=1985&category=0

#include <cstdio>
using namespace std;

int main() {
	int tc, w,h;

	scanf("%d",&tc);
	while(tc--){ // Lê o número de casos de teste
		scanf("%d %d",&w,&h); // Lê o número de casos de teste e as dimensões da área
		printf("%d\n",(w/3)*(h/3)); // Calcula o número de quadrados 3x3 que cabem na área w*h
	}

	return 0;
}