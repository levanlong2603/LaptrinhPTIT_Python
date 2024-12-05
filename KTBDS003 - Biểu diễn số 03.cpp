#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int Mod = 1e9 + 7;
ll C[100][100];
ll cnt(int n, int k){
	memset(C, 0, sizeof(C));
	for(int i = 0; i <= n; i++){
		C[i][i] = 1;
		C[i][0] = 1;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= min(k,i); j++){
			C[i][j] = C[i-1][j-1] + C[i-1][j];
		}
	}
	return C[n][k];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		cout << cnt(n-1,k-1) << endl;
	}
}
	
