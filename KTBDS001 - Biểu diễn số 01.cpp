#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int Mod = 1e9 + 7;

ll cnt(int n){
	ll p[n+1] = {0};
	p[0] = 1;
	for(int i = 1; i <= n; i++){
		for(int j = i; j <= n; j++){
			p[j] += p[j-i];
			p[j] %= Mod;
		}
	}
	return p[n];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << cnt(n) - 1 << endl;
	}
}
