#include<bits/stdc++.h>
using namespace std;
#include<queue>

void tao_qe(string s,queue<int>&q){
	string tmp="";
	for(char c:s){
		if(c==','){
			q.push(stoi(tmp));
			tmp="";
		}
		else{
			tmp+=c;
		}
	}
	q.push(stoi(tmp));
}
int kiemtra(queue<int>q1,queue<int>q2){
	if(q1.size() != q2.size())
	return 0;
	else{
		while(!q1.empty()){
			if(q1.front() != q2.front()){
				return 0;
				break;
			}
			q1.pop();
			q2.pop();
		}
	}
	return 1;
}
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s1,s2;
		getline(cin,s1,' ');
		getline(cin,s2);
		queue<int>q1;
		queue<int>q2;
		tao_qe(s1,q1);
		tao_qe(s2,q2);
		cout<<kiemtra(q1,q2)<<endl;
	}
	return 0;
}