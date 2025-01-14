#include<iostream>
#include<vector>
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<long long> v(n);
	for(int i = 0;i<n;i++){
		cin>>v[i];
	}

	long long ans = 0;
	for(int i = 1;i<n;i++){
		if(v[i]<v[i-1]){
			ans+=(v[i-1]-v[i]);
			v[i] = v[i-1];
		}
	}

	cout<<ans;
	return;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt",  "r",  stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int _ = 1;
	// cin>>_;
	while(_--){
		solve();
	}


	return 0;
}