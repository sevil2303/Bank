#include <iostream>
#include "Entities.h"
using namespace std;

void ShowMenu() {
	cout << "Show Debtors [1]" << endl;
	cout << "Given Credit [2]" << endl;
	cout << "Show Debtor Debt [3]" << endl;
	cout << "Get Debtor Payment[4]" << endl; 
}

void ShowDebtors(Debtor* debtor) {
	cout << "ID : " << debtor->id << endl;
	cout << "NAME : " << debtor->name << endl;
	cout << "SURNAME : " << debtor->surname << endl;
	cout << "DEBT : " << debtor->debt << endl;
}

void main() {
	while (true) {
		ShowMenu();
		int select = 0;
		cout << "Enter choise : ";
		cin >> select;

		system("cls");

		if (select == 1) {
			int id = 0;
			cout << "Enter id : ";
			cin >> id;

			cin.ignore();
			cin.clear();

			char* name = new char[100]{};
			cout << "Enter name : ";
			cin.getline(name, 100);

			char* surname = new char[100]{};
			cout << "Enter surname : ";
			cin.getline(surname, 100);

			double debt = 0;
			cout << "Enter debt : ";
			cin >> debt;

			system("cls");

			Debtor deb{ id,name,surname,debt };
			ShowDebtors(&deb);
		}
		else if (select == 2) {

		}
		else if (select == 3) {

		}
		else if (select == 4) {

		}
	}
}