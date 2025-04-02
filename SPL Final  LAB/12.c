#include <stdio.h>
#include <string.h>

//define structure
struct employee {
    int id;
    char name[100];
    float salary;
    float bonus;
};
int main()
{
    struct employee employee;

    //data input from user
    printf("Enter Employee Id: ");
    scanf("%d",&employee.id);
    getchar();
    printf("Enter Employee Name: ");
    gets(employee.name);
    printf("Enter Employee salary: ");
    scanf("%f",&employee.salary);
    printf("Enter Employee bonus: ");
    scanf("%f",&employee.bonus);

    //calculate total compensation
    float total_compensation=employee.salary+employee.bonus;

    //print result
    printf("\n");
    printf("Employee Id: %d\n",employee.id);
    printf("Employee Name: %s\n",employee.name);
    printf("Total compensation: %0.3f\n",total_compensation);

    return 0;
}
