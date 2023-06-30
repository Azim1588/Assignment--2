#pragma once
#include <string>
class Employee
{
public:

    Employee(const std::string& name, int id);   
    ~Employee(); //Destructor for the "Employee" class
    //~Employee();

    virtual double calculateWeeklySalary() const = 0;  // Pure virtual function to calculate the weekly salary for an employee

    virtual double calculateHealthCareContributions() const = 0;
    //Pure virtual function to calculate the vacation days for an employee

    virtual int calculateVacationDays() const = 0;

protected:
    std::string name_;
    int id_;
};
