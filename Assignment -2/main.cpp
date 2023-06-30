#include <iostream>
#include "SingleLinkedList.h"
#include "Professional.h"
#include "Nonprofessional.h"
#include <string>


using namespace std;

int main() {
    SingleLinkedList myList;
 
    myList.push_back(5); // Adds an element with value 5 to the back of the list
    myList.push_front(3);  // Adds an element with value 3 to the front of the list
    myList.push_back(7);  // Adds an element with value 7 to the back of the list
    myList.push_front(1); // Adds an element with value 1 to the front of the list


    std::cout << "List contents: ";
    while (!myList.empty()) {
        std::cout << myList.front() << " ";
        myList.pop_front();
    }
    std::cout << std::endl;

    myList.push_back(10);
    myList.push_back(20);
    myList.insert(1, 15);

    std::cout << "List size: " << myList.find(10) << std::endl;

    myList.remove(1);

    std::cout << "List contents: ";
    while (!myList.empty()) {
        std::cout << myList.front() << " ";
        myList.pop_front();
    }
    std::cout << std::endl;

        int choice;
        std::cout << "Enter employee type:\n";
        std::cout << "1. Nonprofessional\n";
        std::cout << "2. Professional\n";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            std::string name;
            int id, vacation_hours, hours_worked;
            double hourly_rate;

            std::cout << "Enter name: ";
            std::cin >> name;
            std::cout << "Enter ID: ";
            std::cin >> id;
            std::cout << "Enter hourly rate: ";
            std::cin >> hourly_rate;
            std::cout << "Enter vacation hours: ";
            std::cin >> vacation_hours;
            std::cout << "Enter hours worked: ";
            std::cin >> hours_worked;

            Nonprofessional nonprofessional(name, id, hourly_rate, vacation_hours);
            nonprofessional.setHoursWorked(hours_worked);

            std::cout << "Weekly salary: " << nonprofessional.calculateWeeklySalary() << std::endl;
            std::cout << "Healthcare contributions: " << nonprofessional.calculateHealthCareContributions() << std::endl;
            std::cout << "Vacation days: " << nonprofessional.calculateVacationDays() << std::endl;
            break;
        }
        case 2: {
            std::string name;
            int id, vacation_days;
            double monthly_salary;

            std::cout << "Enter name: ";
            std::cin >> name;
            std::cout << "Enter ID: ";
            std::cin >> id;
            std::cout << "Enter monthly salary: ";
            std::cin >> monthly_salary;
            std::cout << "Enter vacation days: ";
            std::cin >> vacation_days;

            Professional professional(name, id, monthly_salary, vacation_days);

            std::cout << "Weekly salary: " << professional.calculateWeeklySalary() << std::endl;
            std::cout << "Healthcare contributions: " << professional.calculateHealthCareContributions() << std::endl;
            std::cout << "Vacation days: " << professional.calculateVacationDays() << std::endl;
            break;
        }
        default:
            std::cout << "Invalid choice!" << std::endl;
            break;
        }
    
    return 0;
}
