#include<fstream>
#include<iostream>
#include<vector>
#include<cstring>
#include<string>
using namespace std;
struct item {
	int idx, quantity;
	string name;
	double cost;
	bool sta;
}a[5000];

void read(){
	ifstream ifs;
	ifs.open("Inventory.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "failed!" << endl;
		return;
	}
	//read
	int idx, qua;
	string name_;
	double cos;
	while (ifs >> idx&&ifs>>name_&&ifs>>qua&&ifs>>cos) {
		a[idx].idx = idx;
		a[idx].cost = cos;
		a[idx].name = name_;
		a[idx].quantity = qua;
		a[idx].sta = 1;
	}
	ifs.close();
}
void save() {
	ofstream ofs;
	ofs.open("Inventory.txt", ios::out);

	for (int i = 0;i < 5000;i++) {
		if (!a[i].sta)continue;
		ofs << a[i].idx << " " << a[i].name << " " << a[i].quantity << " " << a[i].cost << endl;
	}
	ofs.close();
}
void modify(int x) {
	string name1;
	double cost;
	int qua;
	cout << "name:" << endl;
	cin >> name1;
	cout << "quantity" << endl;
	cin >> qua;
	cout << "cost" << endl;
	cin >> cost;
	a[x].idx = x;
	a[x].sta = 1;
	a[x].name = name1;
	a[x].cost = cost;
	a[x].quantity = qua;
	save();
}
void print() {
	for (int i = 0;i < 5000;i++) {
		if (!a[i].sta)continue;
		cout << a[i].idx << " " << a[i].name << " " << a[i].quantity << " " << a[i].cost << endl;
	}	
}
int main() {
	while(1){
	
		cout << "������������еĲ�����" << endl;
		cout << "1---�鿴����嵥" << endl << "2---�޸�\\��ӿ��" <<endl<< "3---ɾ����Ʒ" << endl;
		int n;
		cin >> n;
		switch (n) {
		case 1:
			read();
			print();
			system("pause");
			break;
		case 2:
			cout << "��������Ҫ��ӵ���ţ�" << endl;
			int am;
			cin >> am;
			read();
			modify(am);
			save();
			system("pause");
			system("cls");
			break;
		case 3:
			cout << "��������Ҫɾ������ţ�" << endl;
			int aam;
			cin >> aam;
			read();
			a[aam].sta = 0;
			save();
			system("pause");
			system("cls");
			break;
		}
		
	}
	
	
}
