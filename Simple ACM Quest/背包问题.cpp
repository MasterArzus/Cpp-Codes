//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int cases = 0;
//	cin >> cases;
//	while (cases --)
//	{
//		int N = 0; // numbers of apples
//		int C = 0; // 背包重量容量
//		cin >> N >> C;
//
//		double wi[100] = {};
//		double vi[100] = {};
//
//		for (int i = 0; i < N; i++)
//		{
//			cin >> wi[i] >> vi[i];
//		}
//
//		double valueperkilo[100] = {};
//		for (int i = 0; i < N; i++)
//		{
//			valueperkilo[i] = (vi[i] / wi[i]);
//		}
//
//		vector<double>values = {};
//
//
//
//	}
//}

//
//#include<iostream>
//#include<algorithm>
//#include<cstring>
//#include<iomanip>
//#include<vector>
//using namespace std;
//int t, m;
//typedef pair<double, int> PDI;
//vector<PDI>apple;
//int main() {
// int n;
// cin >> n;
// while (n--) {
//  apple.clear();
//  int c, s;//s g
//  cin >> c >> s;
//  for (int i = 1;i <= c;i++) {
//   int  w, p;
//   cin >> w >> p;
//   double b = p * 1.0 / w;
//   apple.push_back({ b,w });
//
//  }
//  sort(apple.begin(), apple.end());
//  double ans = 0;
//  while (s--) {
//   int hah = apple.back().second;
//   if (hah == 0)apple.pop_back();
//   ans += apple.back().first;
//   apple.back().second--;
//
//  }
//  cout << fixed << setprecision(2) << ans << endl;
//
// }
//
//}

#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int main() {
	//double a = 11.0;
	//cout << showpoint << setprecision(4) << 11.0 << endl;
	//cout << setprecision(4) << a << endl;

	//double x = 1.23456789;
	//cout << fixed;
	//cout << setprecision(5) << x << endl;
	//cout.precision(3);
	//cout << x << endl;
	//cout << x << endl;
}