//Practice ,practice ,practice ,practice, and practice ,and never stop of practice. 
// this code created by E: Mina Salah Zaki 
#include<iostream>
#include<cmath>
#include<cstdio>
#include <algorithm>
#include<string>
#include<iomanip>
#include<new>
#include <limits>
#include<cassert>
#include<fstream>
#include<vector>
#include<stack>
#include<map>
#include<queue>
using namespace std;
void speed() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

}
#define ll long long 
#define d double
#define pi  3.141592653
#define INF 2'000'000'000
#define ve vector
#define RT(x) return cout << (x), 0;
#define sz(s) (int)(s.size())
#define all(v) v.begin(),v.end()
#define en "\n" 
ve<deque<string>>sp(21.0);
ve<deque<int>>st(21.0);
void startProgram() {
	cout << "Enter your choice \n";
	cout << "(1) Add new patient \n";
	cout << "(2) Print all patients \n";
	cout << "(3) Get next patient \n";
	cout << "(4) Exit \n";

}
void AddNewPatient() {

	cout << "Enter Spcialization \n";
	int spac; cin >> spac;
	cout << "Your  Name \n";
	string name; cin >> name;
	cout << "Your Status\n";
	int status; cin >> status;
	int sizeofspac = sp[spac].size();
	if (sizeofspac < 5) {
		if (status) {
			sp[spac].push_front(name);
			st[spac].push_front(status);
		}
		else
		{
			sp[spac].push_back(name);
			st[spac].push_back(status);
		 
		}
		
	}
	else {
		cout << "Sorry we cant add more patients for this Spcialization \n";
	}

}
void printAllPatients() {

	for (int i = 1; i < 21; i++) {
		if (sp[i].size() > 0)
		{
				cout << "There are " << sp[i].size() 
				<< " patients in this spacializayion " << i << en;
				int c = sp[i].size();
				int x = 0;
				while (c) {
					cout << sp[i][x] << " ";
					if (st[i][x] == 1)
						cout << "Urgent \n";
					else cout << "regular \n";
					x++;
					c--;
				}
				cout << "****************************************\n";
		}
		
	}

}
void GetNextPatient() {

	cout << "Enter your spacilzation \n";
	int spac; cin >> spac;
	if (sp[spac].size()) {
		cout <<sp[spac].front()<< "Place go with Dr \n";
		sp[spac].pop_front();
	}
	else {
		cout << "No patient at the moment , Have rest : Dr .\n";
		cout << "********************************************\n";
	}
}
	
void hospital_system() {
	while (true) {
		startProgram();
		int choice; cin >> choice;
		if (choice == 1)
			AddNewPatient();
		else if (choice == 2)
			printAllPatients();
		else if (choice == 3)
			GetNextPatient();
		else if (choice == 4) {
			cout << "********************************************\n";
			cout << "We hope you like our services .... \nGood by .....";
			break;
		}

		else {
			cout << "Invalid choice. Try again\n";
		}

	}
}

int main()
{
	speed();
	hospital_system();
	return 0;

}


