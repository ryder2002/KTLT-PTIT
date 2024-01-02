#include<bits/stdc++.h>
using namespace std;
int firstUniqChar(string s) {
    vector<int> v(26,0);
	for(char c : s) v[c - 'a']++;
	for(int i = 0; i < s.length(); i++){
		if(v[s[i] - 'a'] == 1) return i;
	}
	return -1;
}
int main(){
	int t; cin>>t; 
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		cout<<firstUniqChar(s)<<endl;
	}
}