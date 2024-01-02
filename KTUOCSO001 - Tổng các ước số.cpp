#include<iostream>
#include<cmath>
using namespace std;
int tinhtong(int n){
	int sum;
	if(n==1)
	sum=0;
	else
	sum=1;
	for(int i=2;i<= sqrt(n);i++){
		if(n%i ==0){
			if(i != n/i)
			sum+= i+ n/i;
			else
			sum+=i;
		}	
	}
	return sum;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<tinhtong(n)<<endl;
	}
	return 0;
}