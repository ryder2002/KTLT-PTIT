#include<bits/stdc++.h>
using namespace std;
long long gt(int n){
	if(n==1)
	return 1;
	else
	return n*gt(n-1);
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<gt(n)<<endl;
	}
	return 0;
}