#include<bits/stdc++.h>
using namespace std;
#include<queue>
void tao_qe(string s){
	priority_queue<int, vector<int>, greater<int>> q;
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
	cout<<q.top();
}
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; 
		getline(cin,s);
		tao_qe(s);
		cout<<endl;
	}
	return 0;
}