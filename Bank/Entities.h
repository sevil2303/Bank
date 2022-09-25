#pragma once

struct Debtor {
	int id;
	char* name;
	char* surname;
	double debt;
};


struct Bank {
	char* name;
	Debtor** debtor;
	int debtor_count;
	double totaldebt;
	double totalBudget;
};