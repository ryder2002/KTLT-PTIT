#include <bits/stdc++.h>
using namespace std;
int check(string s) {
if(s=="") return 1;
stack <char> st;
for (auto i : s) {
if (i == '(' || i == '[' || i == '{') st.push(i);
else {
if (i == ')') {
if (st.empty() || st.top() != '(') return 0;
else st.pop();
}
if (i == ']') {
if (st.empty() || st.top() != '[') return 0;
else st.pop();
}
if (i == '}') {
    if (st.empty() || st.top() != '{') return 0;
else st.pop();
}
}
}
if(!st.empty()) return 0;
return 1;
}
int main() {
int t;
cin >> t;
while (t--) {
string s;
cin >> s;
cout << (check(s)? "YES" : "NO");
cout << endl;
}
}