#ifndef COMMISSION_H
#define COMMISSION_H

#include <string>
using std::string;

class ComissionEmployee
{
    public:
        CommissiomEmployee( const string &, const string &, const string &,
            double = 0.0, double = 0.0);
        void setFirstName() const;

        void setLastName( const string &);
        string getSocialSecurityNumber() const;

        void setGrossSales( double );
        double getGlossSales() const;

        void setCommissionRate ( doube );
        double getCommissionRate() const;

        double earnings() const;
        void print() const;
    private:
        string firstName;
        string lastName;
        string socialSecurityNumber;
        double grossSales;
        double commissionRate;

};
#endif