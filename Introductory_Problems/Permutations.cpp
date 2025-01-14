#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;

	if(n==2 or n==3) {
		cout<<"NO SOLUTION";
		return;
	}

	for(int i = 2;i<=n;i=i+2){
		cout<<i<<" ";
	}

	for(int i = 1;i<=n;i=i+2){
		cout<<i<<" ";
	}

	

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