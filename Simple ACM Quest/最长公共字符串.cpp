//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int num = 0, f = -1, slen, tlen;
//	string s, t;
//	char temp[50], max[50];
//	//getline(cin, s);
//	//getline(cin, t);
//	cin >> s;
//	cin >> t;
//	slen = s.length();
//	tlen = t.length();
//	for (int i = 0; i < slen; i++) {
//		for (int j = 0; j < tlen; j++) {
//			if (s[i] == t[j]) {
//				while (s[i] == t[j] && i < slen && j < tlen)//要保证i，j在范围内不然会出错 {
//					temp[num] = s[i];
//				num++;
//				i++;
//				j++;
//			}
//			if (num > f) {
//				for (int h = 0; h < num; h++) {
//					max[h] = temp[h];
//					f = num;//让f记录下最长字符的个数
//				}
//			}
//			num = 0;//结束要重新计数
//		}
//	}
//
//	if (f == -1) {
//		cout << "No Answer" << endl;
//	}
//	for (int i = 0; i < f; i++)
//	{
//		cout << max[i];
//	}
////}
//
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//    string a, b;
//    while (cin >> a >> b)
//    {
//        if (a.size() > b.size())
//            swap(a, b);
//        string max;
//        for (int i = 0; i < a.size(); i++)
//        {
//            for (int j = i; j < a.size(); j++)
//            {
//                string temp = a.substr(i, j - i + 1);
//                if (int(b.find(temp)) < 0)
//                    break;
//                else if (max.size() < temp.size())
//                    max = temp;
//            }
//        }
//        if (max.size() == 0)
//            cout << "none" << endl;
//        else
//            cout << max << endl;
//    }
//    return 0;
//}