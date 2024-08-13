#pragma once
// Fig. 11.4: CommissionEmployee.h
// CommissionEmployee class definition represents a commission employee

#ifndef 1

#include<string> 

class CommisionEmployee {
public:
	CommissionEmployee(const std::string&, const std::string&, const std::string&, double = 0.0, double = 0.0);

	void setFirstName(const std::string&); // Set First Name
	std::string getFirstName() const; // Return first Name

	void setLastName(const std::string&); // Set Last Namw
	std::string getLastName() const; // Return Last Namw

	void setSocialSecurityNumber(const std::string&); // Set SSN
	std::string getSocialSecurityNumber() const;

	void setGrossSales(double); // Set gross sales amount
	double getGrossSales() const; // Return Gross sales

	void setCommissionRate(double); // Set Commission Rate (percentage)
	double getCommissionRate() const; // Return Commission Rate

	double earning() const; // Calculate earnings
	std::string toString() const; // Create string representation

private:
	std::string firstName;
	std::string lastName;
	std::string socialSecurityNumber;
	double grossSales; // gross weekly sales
	double commissionRate; // commission percenta

};

#endif // !1
