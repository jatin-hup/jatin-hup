#include <stdio.h>
int main()
{
    int select_mode, date, working_days, no_of_product, year, total_salary, hrd, da, basic_salary, total_da, total_hrd, gross_salary, product_quantity[500], product_price[100], total_sales, percentage_com, con_allow, total_conveyence, medical_allow, total_medical, total_allowances, over_time_pay, bonus, gratuity, total_over, total_bonus, total_gratuity, total_indirect_allowance, total_epf, epf, ded, pro_tax, total_pro_tax, ded1, total_deductions, net_salary;
    char emp_name[50];
    char product_name[500];
    char m;
    printf("\n");
    printf("=====Welcome to Payroll Software=====");
    printf("Select mode of Payroll Software in Salary Calculations\n1) Normal Salary Calculation\n2) Commission Based Caluculation\n3) Salary Calculation\n4) Professtional Corporation Salary Calculation\n5) Exit\n\nEnter Here Choice : ");
    scanf("%d", &select_mode);
    switch (select_mode)
    {
    case (1):
        printf("\n");
        printf("Enter Data Month Year  : ");
        scanf("%d\t%s\t%d", &date, &m, &year);
        printf("Enter The Employee Name : ");
        scanf("%s", &emp_name);
        printf("Enter The Employee of Basic Salary : ");
        scanf("%d", &basic_salary);
        printf("Enter The Employee of Work of Days : ");
        scanf("%d", &working_days);
        total_salary = (basic_salary * working_days);
        printf("Mr.%s is The Total Salary of %d", emp_name, total_salary);
        break;
    case (3):
        printf("\n");
        printf("\nEnter Date Month Year : ");
        scanf("%d\t%s\t%d", &date, &m, &year);
        printf("Enter The Employee Name : ");
        scanf("%s", &emp_name);
        printf("Enter The Emplyee of Basic Salary : ");
        scanf("%d", &basic_salary);
        printf("Enter The Percentage of HRD : ");
        scanf("%d", &hrd);
        total_hrd = (basic_salary * hrd) / 100;
        printf("Total HRD : %d\n", total_hrd);
        printf("Enter The Percentage of DA : ");
        scanf("%d", &da);
        total_da = (basic_salary * da) / 100;
        printf("Total DA : %d\n", total_da);
        gross_salary = (basic_salary + total_hrd + total_da);
        printf("Mr.%s is The Total Salary of %d", emp_name, gross_salary);
        break;
    case (2):
        printf("\n");
        printf("\nEnter Date Month Year : ");
        scanf("%d\t%s\t%d", &date, &m, &year);
        printf("Enter The Employee Name : ");
        scanf("%s", &emp_name);
        printf("Enter The Saled No of Product : ");
        scanf("%d", &no_of_product);
        for (int i = 1; i <= no_of_product; i++)
        {
            printf("\n");
            printf("Enter The Name of Saled Product : ");
            scanf("%s", &product_name[i]);
            printf("Enter The Saled Quantity of Product : ");
            scanf("%d", &product_quantity[i]);
            printf("Enter The Pre Peice Price of Product : ");
            scanf("%d", &product_price[i]);
            total_sales = (product_quantity[i] * product_price[i]);
            printf("Total Sales is  : %d", total_sales);
            printf("\n");
            printf("Enter The Percentage of Comission : ");
            scanf("%d", &percentage_com);
            total_salary = (total_sales * percentage_com) / 100;
            printf("Mr.%s is The Total Salary : %d", emp_name, total_salary);
            printf("\n");
        }
        break;
    case (4):
        printf("\n");
        printf("Enter Date Mouth Year : ");
        scanf("%d\t%s\t%d", &date, &m, &year);
        printf("Enter The Name of Employee : ");
        scanf("%s", &emp_name);
        printf("Enter The Basic Salary : ");
        scanf("%d", &basic_salary);

        printf("\n");
        printf("=== Allowances ===");
        printf("\n");
        printf("Enter The Percentage of HRD : ");
        scanf("%d", &hrd);
        total_hrd = (basic_salary * hrd) / 100;
        printf("Total HRD : %d", total_hrd);
        printf("\nEnter The Percentage of DA : ");
        scanf("%d", &da);
        total_da = (basic_salary * da) / 100;
        printf("Total DA : %d", total_da);
        printf("\nEnter The Percentage of Conveyence Allowances : ");
        scanf("%d", &con_allow);
        total_conveyence = (basic_salary * con_allow) / 100;
        printf("Total Conveyence Allowances : %d", total_conveyence);
        printf("\nEnter The Percentage of Medical Allowances : ");
        scanf("%d", &medical_allow);
        total_medical = (basic_salary * medical_allow) / 100;
        printf("Total Medical Allowances : %d", total_medical);
        total_allowances = (total_hrd + total_da + total_conveyence + total_medical);
        printf("\nTotal Allowances Salary is %d", total_allowances);

        printf("\n");
        printf("=== Other Indirect Incomes ===");
        printf("\n");
        printf("Enter The Percentage of Overtime Payment : ");
        scanf("%d", &over_time_pay);
        total_over = (basic_salary * over_time_pay) / 100;
        printf("Total Overtime Payment : %d", total_over);
        printf("\nEnter The Percentage of Bonus : ");
        scanf("%d", &bonus);
        total_bonus = (basic_salary * bonus) / 100;
        printf("Total Bonus : %d", total_bonus);
        printf("\nEnter The Percentage of Gratuity : ");
        scanf("%d", &gratuity);
        total_gratuity = (basic_salary * gratuity) / 100;
        printf("Total Gratuity : %d", total_gratuity);
        total_indirect_allowance = (total_over + total_bonus + total_gratuity);
        printf("\nOther Indirect Incomes : %d", total_indirect_allowance);
        gross_salary = (total_allowances + total_indirect_allowance);
        printf("\nGross Salary : %d", gross_salary);

        printf("\n");
        printf("=== DEDUCTIONS ===");
        printf("\n");
        printf("Enter The Percentage of EPF : ");
        scanf("%d", &epf);
        total_epf = (basic_salary * epf) / 100;
        ded = (gross_salary - total_epf);
        printf("Total EPF : %d", ded);
        printf("\nEnter Professtional Tax : ");
        scanf("%d", &pro_tax);
        total_pro_tax = (gross_salary * pro_tax) / 100;
        ded1 = (ded - total_pro_tax);
        printf("Total Professtional Tax : %d", ded1);
        total_deductions = (ded + ded1);
        printf("\nTotal Deductions is : %d", total_deductions);
        net_salary = (basic_salary + gross_salary - total_deductions);
        printf("\nMr.%s is Net Salary is %d", emp_name, net_salary);
        break;
    case (5):
        printf("Thanks :)");
        return 0;
        

    default:
        printf("!! Invailed Choice !!");
    }

    return 0;
}