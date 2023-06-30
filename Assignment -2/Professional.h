#pragma once
#include "Employee.h"
class Professional :
    public Employee
{
public:
    Professional() = default;  // Default constructor for the "Professional" class
    Professional(const std::string& name, int id, double monthly_salary, int vacation_days);// Calculates the weekly salary for a professional employee
    double calculateWeeklySalary() const override;
    double calculateHealthCareContributions() const override;
    int calculateVacationDays() const override; // Calculates the vacation days for a professional employee

private:
    double monthly_salary_;  // Monthly salary for a professional employee
    int vacation_days_;  // Vacation days per year for a professional employee
};
