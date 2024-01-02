#include<string>
#include<stack>
#include<iostream>
using namespace std;
void out(int k,int i,string s){
	for(int j=k+1;j<i;j++){
		cout<<s[j];
	}
}
void kq(string s){
	string s1;
	int k=0,count=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='(')
		count++;
		else{
		if(s[i]==')')
		count--;
	}
	if(count==0){
		out(k,i,s);
		k=i+1;
	}
	}
}
int main(){
	int t; cin>>t; 
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		kq(s);
		cout<<endl;
	}
	return 0;
}