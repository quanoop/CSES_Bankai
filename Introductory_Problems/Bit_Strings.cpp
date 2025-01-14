#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

long long power(long long x, long long n){
	x = x%mod;
	if(n==0) return 1;
	long long temp;
	if(n%2==0) temp =  power(x*x, n/2);
	else temp =  x*power(x*x, n/2);

	return temp%mod;
}

void solve(){
	int n;
	cin>>n;
	long long curr = 2;
	cout<<power(curr, n);
	return;

}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt",  "r",  stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int _ = 1;

	//cin>>_;

	while(_--){
		solve();
	}


	return 0;
}