#include <iostream>
#include "Entities.h"
using namespace std;

void ShowMenu() {
	cout << "Show Debtors [1]" << endl;
	cout << "Given Credit [2]" << endl;
	cout << "Show Debtor Debt [3]" << endl;
	cout << "Get Debtor Payment[4]" << endl; 
}

void ShowDebtors(Bank*bank) {
	for (size_t i = 0; i < bank->debtor_count; i++)
	{
	cout << "ID : " << bank->debtor[i]->id << endl;
	cout << "NAME : " << bank->debtor[i]->name << endl;
	cout << "SURNAME : " << bank->debtor[i]->surname << endl;
	cout << "DEBT : " << bank->debtor[i]->debt << endl;


	}
}

Debtor* DoesNameExist(Bank*bank,char*name) {
	for (size_t i = 0; i < bank->debtor_count; i++)
	{
		if (strcmp(bank->debtor[i]->name, name) == 0) {
			return bank->debtor[i];
		}
	}
	return NULL;

}
void ShowDebtorDebt(Bank*bank,char* name) {
	
	auto newdebtor = DoesNameExist(bank, name);
	if (newdebtor != NULL) {
		cout << bank->debtor->name << endl;
	}
	/*if (DoesNameExist(bank, name)) {
		cout <<"Debt of "<<bank->debtor->name <<" is " << debtor->debt << endl;
	}
	else {
		cout << "Name is invalid" << endl;
	}*/
}
void main() {
<<<<<<< HEAD
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
=======
	
	cout << "Enter name : " << endl;
	char* name = new char[100]{};
	cin.getline(name, 100);
	ShowDebtorDebt(debtor, name);
>>>>>>> d9459e7b820b785f20ab13bce180f360dac8a9b4
}