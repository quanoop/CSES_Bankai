#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int e;
 
    int ans = 0;
    for(int i = 0;i<n-1;i++){
        cin>>e;
        ans^=e;
    }
    for(int i = 1;i<=n;i++){
        ans^=i;
    }
    cout<<ans<<"\n";
     return 0;
}