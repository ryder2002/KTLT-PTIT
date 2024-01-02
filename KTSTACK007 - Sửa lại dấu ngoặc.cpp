#include <bits/stdc++.h>
#include <stack>
using namespace std;
void dem()
{
string s;
cin >> s;
stack<char> str;
int couter = 0;
for (int i = 0; i < s.size(); i++)
{
    if (s[i] == '(')
str.push(s[i]);
else
{
if (str.size() == 0)
{
str.push('(');
couter++;
}
else
str.pop();
}
}
cout << couter + str.size()/2 << endl;
}
int main()
{
int t;
cin >> t;
string s;
getline(cin, s);
while (t--)
{
dem();
}
return 0;
}