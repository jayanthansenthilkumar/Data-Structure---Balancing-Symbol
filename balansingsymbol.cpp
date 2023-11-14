#include <bits/stdc++.h>
using namespace std;
bool a(string expr)
{
	stack<char>temp;
	for (int i = 0; i < expr.length(); i++) {
		if (temp.empty()) {
			temp.push(expr[i]);
		}
		else if ((temp.top() == '(' && expr[i] == ')')|| (temp.top() == '{' && expr[i] == '}')|| (temp.top() == '[' && expr[i] == ']')){
			temp.pop();
		}
	}
	if (temp.empty()) {
		return true;
	}
	return false;
}
int main()
{
	string expr;
	cout<<"Enter the Symbol to check :";
	cin >> expr;
	if (a(expr))
		cout << "Balanced";
	else
		cout << "Not Balanced";
	return 0;
}
