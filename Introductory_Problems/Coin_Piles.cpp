#include<bits/stdc++.h>
using namespace std;

void solve(){

	int a, b;
	cin>>a>>b;

	if(a>b*2 || b>a*2) {
		cout<<"NO\n";
	} else if(a==b){
		if(a==0){
			cout<<"YES\n";
		}
		else if(a<=2){
			cout<<"NO\n";
		} else {
			cout<<"YES\n";
		}
		
	} else {
		cout<<"YES\n";
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt",  "r",  stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int _ = 1;

	cin>>_;

	while(_--){
		solve();
	}


	return 0;
}