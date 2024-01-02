#include<bits/stdc++.h>
using namespace std;
bool kiemtra(int n){
	if(n==1)
	return true;
	if(n==0 || n%4!=0)
	return false;
	return kiemtra(n/4);
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		if(kiemtra(n))
		cout<<"1";
		else
		cout<<"0";
		cout<<endl;
	}
}