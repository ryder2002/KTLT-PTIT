#include<bits/stdc++.h>
using namespace std;
void kiemtra(string s){
	int l=s.length();
	int c=1,m=l-1;
	for(int i=0;i<=l/2;i++){
		if(s[i] != s[m]){
			cout<<"0";
			c=0;
			break;
		}
		else
		m--;
	}
	if(c==1)
	cout<<"1";
}
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		kiemtra(s);
		cout<<endl;
	}
}