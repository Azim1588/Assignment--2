#include "Nonprofessional.h"
Nonprofessional::Nonprofessional(const std::string& name, int id, double hourly_rate, int vacation_hours)

	: Employee(name, id), hourly_rate_(hourly_rate), vacation_hours_(vacation_hours), hours_worked_(0) {}

double Nonprofessional::calculateWeeklySalary() const
{
	return hours_worked_ * hourly_rate_;
	// Constructor for the "Nonprofessional" class with parameters
	// Initializes the member variables with the provided values and sets hours_worked_ to 0
}

double Nonprofessional::calculateHealthCareContributions() const
{  // Calculates and returns the weekly salary for a nonprofessional employee
	return hourly_rate_ * hours_worked_ * 0.12;
}

int Nonprofessional::calculateVacationDays() const
{  // Calculates and returns the vacation days for a nonprofessional employee
	return vacation_hours_ / 10;
}

void Nonprofessional::setHoursWorked(int hours)
{ // Sets the number of hours worked per week for a nonprofessional employee
	hours_worked_ = hours;
}