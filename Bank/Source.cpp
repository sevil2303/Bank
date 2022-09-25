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
	
}