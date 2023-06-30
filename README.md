# Assignment -2


 This code implements an Employee Salary calculation System. It consists of two classes: Employee, Professional, and Nonprofessional.
The Employee class is an abstract base class that serves as the parent class for all types of employees. It provides common functionality and declares pure virtual functions for calculating the weekly salary, health care contributions, and vacation days.
The Professional class is a derived class from Employees and represents professional employees. Professional employees have a fixed weekly salary and a certain number of vacation days. The Professional class implements the virtual functions inherited from Employees to calculate the weekly wage, health care contributions, and vacation days specific to professional employees.
The Nonprofessional class is another derived class from Employee and represents nonprofessional employees. Nonprofessional employees are paid based on an hourly rate and the number of hours worked. They also receive vacation hours based on the number of hours they have worked. The Nonprofessional class implements the virtual functions inherited from Employees to calculate the weekly salary, health care contributions, and vacation days specific to nonprofessional employees.
Usage
To use this code, you can create instances of Professional and Nonprofessional employees, passing the necessary information such as name, salary rate, and vacation days/hours to the constructor.
 ![Screenshot 2023-06-29 224454](https://github.com/Azim1588/Assignment--2/assets/114971320/2caf688a-710a-4e32-a065-09a7194f8b15)
![Screenshot 2023-06-29 223931](https://github.com/Azim1588/Assignment--2/assets/114971320/d2feceae-3119-4b6d-a1c1-2b0147c941b6)
