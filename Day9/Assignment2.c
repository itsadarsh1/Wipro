/* 2. read the content from the records of Employee and store in structure variable. */

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

    FILE *file = fopen("employee_records.txt", "r");
    if (file==NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }

    int count=0;
    while (fscanf(file, "%d %d %s %f %c %d %s", &count, &employees[count].emp_id, employees[count].emp_name,
                  &employees[count].emp_salary, &employees[count].emp_gender,
                  &employees[count].emp_dept_id, employees[count].emp_dept_name)
                  == 7) 
                  {
        count++;
    }

    fclose(file);

    printf("Employee details read from file:\n");
    for (int i=0;i<count;i++) 
    {
        printf("Employee %d:\n", i+1);
        printf("ID: %d\n", employees[i].emp_id);
        printf("Name: %s\n", employees[i].emp_name);
        printf("Salary: %.2f\n", employees[i].emp_salary);
        printf("Gender: %c\n", employees[i].emp_gender);
        printf("Department ID: %d\n", employees[i].emp_dept_id);
        printf("Department Name: %s\n", employees[i].emp_dept_name);
    }

    return 0;
}
