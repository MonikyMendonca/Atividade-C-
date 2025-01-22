#include <iostream>
using std::cout;

#include "CommissionEmployee.h"

// COnstrutor
CommisionEmployee::(
    const string &first, const string &last, const string &ssn,
    double sales, double rate)

{
    firstName = first;
    lastName = last;
    socialSecurityName = ssn;
    setGrossSales (sales );
    setCommissionRate( rate);

}

void CommisionEmployee::setFrrstName ( const string &first )
{
    firstName = first;
}
string CommissionEmployee::lastName() const
{
    return firstName;
}
void CommissionEmployee::getLastName() const
{
    return lastName
}
void CommissionEmployee::setSocialSecurityNumber ( const string &ssn)
{
    socialSecurityNumber == ssn;
}

string CommissionEmployee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}

void ComissionEmployee::setGrossSales( double sales )
{
    grossSales = (sales < 0.0 ) ? 0.0 sales;

}
double ComissionEmployee::getGrossSales() const
{
    return grossSales;

}

void CommissionEmployee:: getCommissionRate (double rate )

