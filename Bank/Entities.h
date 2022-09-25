#pragma once

struct Debtor {
	int id;
	char* name;
	char* surname;
	double debt;
};


struct Bank {
	char* name;
	char* debtors;
	int debtor_count;
	double totaldebt;
	double totalBudget;
};