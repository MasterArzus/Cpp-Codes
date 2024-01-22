//#include<iostream>
//using namespace std;
//
//int main() {
//	int array1[10][10] = {};
//
//	int x1 = 0;// 注意x指有多少行，在多少行
//	int y1 = 0;//注意y指有多少列，在多少列
//	cin >> x1 >> y1;
//	for (int i = 0; i < x1; i++)
//	{
//		for (int j = 0; j < y1; j++)
//		{
//			cin >> array1[i][j];
//		}
//	}
//
//	int array2[10][10] = {};
//	int x2 = 0;// 注意x指有多少行，在多少行
//	int y2 = 0;//注意y指有多少列，在多少列
//	cin >> x2 >> y2;
//	for (int i = 0; i < x2; i++)
//	{
//		for (int j = 0; j < y2; j++)
//		{
//			cin >> array2[i][j];
//		}
//	}
//
//	int result[10][10] = {};
//
//	for (int i = 0; i < x1; i++)
//	{
//		for (int j = 0; j < y2; j++)
//		{
//			for (int k = 0; k < y1; k++)
//			{
//				result[i][j] += array1[i][k] * array2[k][j];
//			}
//		}
//	}
//
//	for (int i = 0; i < x1; i++)
//	{
//		for (int j = 0; j < y2; j++)
//		{
//			if (j == y2-1){
//				cout << result[i][j];
//			}
//			else{
//				cout << result[i][j] << " ";
//			}
//		}
//		cout << endl;
//	}
//}