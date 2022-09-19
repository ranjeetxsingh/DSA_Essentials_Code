#include<bits/stdc++.h>
#include<stack>
#include<string>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	stack<string> books;

	books.push("Java");
	books.push("C++");
	books.push("Python");
	books.push("DBMS");

	while (!books.empty()) {
		cout << books.top() << endl;
		books.pop();
	}


	return 0;
}
