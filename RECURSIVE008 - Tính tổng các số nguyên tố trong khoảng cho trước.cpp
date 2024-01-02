#include<bits/stdc++.h>
using namespace std;
bool ktnto(int n){
	if(n<=1)
	return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
			break;
		}
	}
	return true;
}
int kq(int start,int end){
	if(start>end){
		return 0;
	}
	if(ktnto(start))
	return start+kq(start+1,end);
	else
	return kq(start+1,end);
}
int main(){
	int t; cin>>t;
	while(t--){
		int start,end;
		cin>>start>>end;
		cout<<kq(start,end)<<endl;
	}
	return 0;
}