/* 1. Capture Employee 10 records in the structure and save it in a file

01 10001 Bhima 10001.5 M 99999 Kar

02 16002 bhima2 103. M 93833 Kar */

#include <stdio.h>

struct employee 
{
    int emp_id;
    char emp_name[50];
    float emp_salary;
    char emp_gender;
    int emp_dept_id;
    char emp_dept_name[50];
};

int main() 
{
    struct employee employees[10];

    printf("Enter Employee details:\n");
    for (int i=0;i<2;i++)
    {
        printf("Employee %02d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].emp_id);
        printf("Name: ");
        scanf("%s", employees[i].emp_name);
        printf("Salary: ");
        scanf("%f", &employees[i].emp_salary);
        printf("Gender M/F: ");
        scanf(" %c", &employees[i].emp_gender);
        printf("Department ID: ");
        scanf("%d", &employees[i].emp_dept_id);
        printf("Department Name: ");
        scanf("%s", employees[i].emp_dept_name);
    }

    FILE *file = fopen("employee_records.txt", "w");
    if (file==NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i=0;i<2;i++) 
    {
        fprintf(file, "%02d %05d %s %.2f %c %d %s\n",
                i+1, employees[i].emp_id, employees[i].emp_name,
                employees[i].emp_salary, employees[i].emp_gender,
                employees[i].emp_dept_id, employees[i].emp_dept_name);
    }

    fclose(file);
    printf("Employee records saved to employee_records.txt\n");

    return 0;
}
