#include "bits/stdc++.h"
#define MODULO 1000000007
#define endl '\n'
#define m(a) ((a)%MODULO)
#define s(a) scanf("%d", &a)
#define sl(a) scanf("%lld", &a)
#define p(a) printf("%d\n", a)
using namespace std;

typedef unsigned long long ull;
typedef long long ll;


int main(){
	int t, i;
	s(m); s(n);
	bool board[m][n];

	for (i=0; i<m; i++)
		for (j=0; j<n; j++){
			s(t);
			board[i][j] = (t==120) ? false : true;
		}

	return 0;
}