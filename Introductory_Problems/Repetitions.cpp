#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin>>s;
	int n = s.size();
	int ans = 1;
	int temp = 1;
	for(int i = 1;i<n;i++){
		if(s[i]==s[i-1]){
			temp++;
		} else{
			ans = max(ans, temp);
			temp = 1;
		}
	}
	ans = max(ans, temp);

	vector<string> v;
	v.push_back("hello");

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