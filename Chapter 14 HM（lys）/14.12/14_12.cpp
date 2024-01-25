#include<bits./stdc++.h>
#include<fstream>
using namespace std;
vector<char>a[15];
string number, ans = "0000000";
string word[26000];
int cnt = 1;
void print() {
	ofstream ofs;
	ofs.open("word.txt", ios::out);
	for (int i = 1;i < cnt;i++) {
		ofs << i << " " << word[i] << endl;
	}
}
void dfs(int u) {
	if (u == number.length()) {
		for (int i = 0;i < ans.length();i++) {
			word[cnt] += ans[i];

		}
		cnt++;
		return;
	}
	int t = number[u] - '0';
	for (int i = 0;i < a[t].size();i++) {
		ans[u] = (a[t][i]);
		dfs(u + 1);
	}
}
int main() {
	cin >> number;

	a[2].push_back('A'), a[2].push_back('B'), a[2].push_back('C');
	a[3].push_back('D'), a[3].push_back('E'), a[3].push_back('F');
	a[4].push_back('G'), a[4].push_back('H'), a[4].push_back('I');
	a[5].push_back('J'), a[5].push_back('K'), a[5].push_back('L');
	a[6].push_back('M'), a[6].push_back('N'), a[6].push_back('O');
	a[7].push_back('P'), a[7].push_back('Q'), a[7].push_back('R'), a[7].push_back('S');
	a[8].push_back('T'), a[8].push_back('U'), a[8].push_back('V');
	a[9].push_back('W'), a[9].push_back('X'), a[9].push_back('Y'), a[9].push_back('Z');
	dfs(0);
	print();
	cout << "´òÓ¡³É¹¦£¡" << endl;
	system("pause");
}