#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int ktraPrime(int n){
	int c=1;
	if(n==0 || n==1)
	c= 0;
	else{
		for(int i=2;i<=sqrt(n);i++){
			if( n%i ==0){
				c= 0;
				break;
			}
		}
	}
	return c;	
}
int dem(int n){
	int dem=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n %i ==0){
			if(i != (n/i)){
				if(ktraPrime(i)==1)
				dem+=1;
				if(ktraPrime(n/i)==1)
				dem+=1;
			}
			else{
				if(ktraPrime(i)==1)
				dem+=1;
			}
		}
	}
	return dem;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<dem(n)<<endl;
	}
	return 0;
}