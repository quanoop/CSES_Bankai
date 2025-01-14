#include<bits/stdc++.h>
using namespace std;

void helper(vector<int> &one, vector<int>&two, int first, int last){
	bool flag = true;

		while(first<=last){
			if(flag){
				one.push_back(first);
				one.push_back(last);
				first++;
				last--;
				flag = !flag;
			} else {
				two.push_back(first);
				two.push_back(last);
				first++;
				last--;
				flag = !flag;
			}
		}
}

void solve(){
	long long n;
	cin>>n;
	long long sum = (n)*(n+1)/2;
	if(sum%2==1){
		cout<<"NO";
		return;
	}
	vector<int> one;
	vector<int> two;

	int first = 1;
	int last = n;

	if(n%2==0){
		helper(one, two, first, last);
	} else {
		one.push_back(first);
		first++;
		two.push_back(last);
		last--;
		one.push_back(last);
		last--;

		helper(one, two, first, last);
	}

	cout<<"YES\n";
	cout<<one.size()<<"\n";
	for(int x:one){
		cout<<x<<" ";
	}
	cout<<"\n";
	cout<<two.size()<<"\n";
	for(int x : two){
		cout<<x<<" ";
	}

	cout<<"\n";

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