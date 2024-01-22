////#include<iostream>
////#include<string>
////#include<algorithm>
////
////using namespace std;
////int main() {
////	string sentence;
////	char letter;
////	while (cin >> sentence >> letter)
////	{
////		int x = sentence.find_first_of(letter);
////		if (x == -1) {
////			cout << "none";
////		}
////		else {
////			string replace;
////			replace.assign(sentence, 0, x + 1);
////			reverse(replace.begin(), replace.end());
////			sentence.replace(0, x + 1, replace);
////			cout << sentence;
////		}
////	}
////}
//
////#include<iostream>
////#include<string>
////#include<array>
////using namespace std;
////string s;
////char r;
////int main()
////{
////	while (cin >> s >> r) {
////		bool ok = false;
////		for (int i = 0; i <= s.length() - 1; i++) {
////			if (ok == true) {
////				cout << s[i];
////			}
////			else if (s[i] == r) {
////				ok = true;
////				for (int j = i; j >= 0; j--)
////				{
////					cout << s[j];
////				}
////			}
////			if (ok == false) {
////				cout << "none";
////				cout << endl;
////			}
////		}
////	}
////}
//
//#include <iostream>
//#include<string>
//using namespace std;
//string reverse(string str, int start, int end)
//{
//	for (int i = start, j = end; i < j; i++, j--)
//	{
//		char temp = str[i];
//		str[i] = str[j];
//		str[j] = temp;
//	}
//	return str;
//}
//int main() {
//	string s;
//	char r;
//	while (cin >> s >> r) {
//		string::size_type position;
//		position = s.find(r);
//		if (position != s.npos) {
//			cout << reverse(s, 0, position) << endl;
//		}
//		else
//			cout << "none" << endl;
//	}
//	return 0;
//}