#include "Codeforces_Round_827.h"
#include<iostream>
#include <map>
using namespace std;

char CheckLine(char(*)[8], int, char);
char CheckColumn(char(*)[8], int, char);

void Codeforces_Round_827::A()
{
	int loop;
	cin >> loop;
	while (loop--) {
		int a, b, c;
		cin >> a >> b >> c;
		string ans;
		if (a + b == c || a + c == b || b + c == a)
			ans = "YES";
		else
			ans = "NO";

		cout << ans << endl;
	}

	return;
}

void Codeforces_Round_827::B()
{
	int loop;
	cin >> loop;
	while (loop--) {
		int n;
		cin >> n;
		map<int, bool> a;
		bool ans = true;
		while (n--) {
			int i;
			cin >> i;
			if (ans) {
				if (a[i]) {
					ans = false;
				}
				else a[i] = true;
			}
		}

		cout << (ans ? "YES" : "NO") << endl;
	}

	return;
}

void Codeforces_Round_827::C()
{
	int loop;
	cin >> loop;
	while (loop--) {
		char a[8]{};
		char ans = 'B';
		for (int i = 0; i < 8; ++i) {
			int cnt = 0;
			for (auto& j : a) {
				cin >> j;
				if (j == 'R') cnt++;
			}
			if (cnt == 8) ans = 'R';
		}

		cout << ans << endl;
	}

	return;
}

void Codeforces_Round_827::D()
{
}

void Codeforces_Round_827::E()
{
}

void Codeforces_Round_827::F()
{
}

void Codeforces_Round_827::G()
{
}

char CheckLine(char (*g)[8], int i, char c)
{
	for (int j = 0; j < 8; j++) {
		if (g[i][j] != c)
			if (g[i][j] == '.') return '.';
			else return CheckColumn(g, j, g[i][j]);
	}
	return c;
}

char CheckColumn(char (*g)[8], int j, char c)
{
	for (int i = 0; i < 8; i++) {
		if (g[i][j] != c)
			if (g[i][j] == '.') return '.';
			else return CheckLine(g, i, g[i][j]);
	}
	return c;
}
