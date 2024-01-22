//#include<iostream>
//using namespace std;
//int main()
//{
//	int samplenumber = 0;
//	cin >> samplenumber;
//	while (samplenumber--)
//	{
//		int currentarray[100] = {};
//		int maxindex = 0;
//		for (int i = 0; i < 2; i++)
//		{
//			int numberofterms = 0;
//			cin >> numberofterms;
//			if (numberofterms > maxindex)
//			{
//				maxindex = numberofterms;
//			}
//			int temparray[100] = {};
//			for (int j = numberofterms - 1; j >= 0; j--)
//			{
//				cin >> temparray[j];
//			}
//
//			for (int j = 0; j < 100; j++)
//			{
//				currentarray[j] += temparray[j];
//			}
//		}
//		cout << maxindex;
//		for (int j = maxindex - 1; j >= 0; j--)
//		{
//			if (currentarray[j] % 2 == 1) {
//				cout << " 1";
//			}
//			else {
//				cout << " 0";
//			}
//		}
//		cout << endl;
//	}
//}