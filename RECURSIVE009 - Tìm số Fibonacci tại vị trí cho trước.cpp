#include<bits/stdc++.h>
using namespace std;
void fibo(int n){
	long long a=0,b=1;
	long long c=a+b;
	while(n--){
		a=b;
		b=c;
		c=a+b;
	}
	cout<<a;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		fibo(n);
		cout<<endl;
	}
	return 0;
}