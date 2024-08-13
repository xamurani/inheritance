// Fig. 11.5: CommissionEmployee.cpp
// Class CommissionEmployee member-function definitions.

#include<iostream>
#include<iomanip>
#include<stdexcept>
#include<sstream>
#include"C:\Users\Muhammad\Desktop\inhertanceChapterFromBook\CommionEmployee.h" // CommissionEmployee class definition

using namespace std;

// Constructor
    CommissionEmployee::CommissionEmployee(const string& first, const string& last, const string& ssn, double sales, double rate) {
	firstName = first; // Should validate 
	lastNamme = last;  // Should validate
	socialSecurityNumber = ssn; // Should validate
	setGrossSales(sales); // Validate 
	//set
}