#include <stdio.h>

int main() {
    int slno, id;
    char name[50], gender, phone[15], address[100];
    float salary;

    printf("Enter Employee Details:\n");
    printf("SLNO:");
    scanf("%d",&slno);
    printf("ID: ");
    scanf("%d", &id);
    printf("Name: ");
    scanf("%s", name);
    printf("Enter Gender M/F: ");
    scanf(" %c", &gender);
    printf("Salary: ");
    scanf("%f", &salary);
    printf("Phone: ");
    scanf("%s", phone);
    printf("Address: ");
    scanf(" %s", address);

    printf("\n========================================================\n");
    printf("                  Employee Details\n");
    printf("========================================================\n");
    printf("SLNo    ID      Name    Gender  Sal     Phno    Address\n");
    printf("----    ---     ------- ------  ----    ------  -------\n");
    printf("%-8d%-8d%-8s%-8c%-8.2f%-8s%-8s\n",slno,id,name,gender,salary,phone,address);

    return 0;
}