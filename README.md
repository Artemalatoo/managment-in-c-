[ https://slidesgo.com/editor/share/9c0bd9b8-f950-4f1d-8e6f-f73544bf4f31#rs=whatsapp](https://slidesgo.com/editor/share/9c1049e8-84cd-4a6f-8f8f-7bc7c2b72165#rs=link)
# EMPLOYEE PAYROLL MANAGEMENT

## OVERVIEW
The Employee Payroll Management system is designed to manage employee payrolls, including processing paychecks, calculating deductions, and tax withholdings. The system allows adding new employee payroll data, updating existing employee data, displaying all employee salaries, and saving/loading data to/from a file to ensure persistence.

## FEATURES
**Add New Employee Payroll**: Allows adding new employees and calculates their payroll.
**Display All Employee Salaries**: Displays the payroll information for all employees.
**Update Employee Data**: Allows updating the payroll details for an existing employee.
**Data Persistence**: Saves employee data to a file and loads it upon program start.
**Continuous Operation**: The program runs in a loop, allowing multiple operations until the user chooses to exit.
## FUNCTIONS
**Payroll Calculations
**double calculateGrossPay(double hourlyRate, double hoursWorked): Calculates the gross pay based on hourly rate and hours worked.
**double calculateTaxDeduction(double grossPay): Calculates the tax deduction from the gross pay.
**double calculateOtherDeductions(double grossPay): Calculates other deductions from the gross pay.
**double calculateNetPay(double grossPay, double taxDeduction, double otherDeductions): Calculates the net pay after all deductions.
