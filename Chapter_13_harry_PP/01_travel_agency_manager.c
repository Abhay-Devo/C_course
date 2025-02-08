// here we will make a program which will manage a travel agency by tracking the records of driver. 
// and storing them using a structrure...


#include <stdio.h>
#include <string.h>


typedef struct driver
{
    char name[20];
    int licence_no;
    int kms;
    char route[50];
    
}driver;

void input_taking(driver *driver_data, int num){
    for (int i = 0; i < num; i++)
    {
        char temp_name[20];
        char temp_route[30];

        getchar();      // stoping the '\n' new line character to get into the below gets funtion
        printf("Enter the Name of the driver:\n");
        gets(temp_name);
        strcpy(driver_data[i].name, temp_name);

        printf("Enter the Driving license no. of the driver:\n");
        scanf("%d", &driver_data[i].licence_no);

        printf("Enter No. of kms you have drive the vechile:\n");
        scanf("%d", &driver_data[i].kms);

        getchar();    // stoping the '\n' new line character to get into the below gets funtion
        printf("Enter the route of the driver e.g(Kashmir-Mumbai):\n");
        gets(temp_route);
        strcpy(driver_data[i].route, temp_route);
        
    }
}

void output(driver *driver_data, int num){
    for (int i = 0; i < num; i++)
    {
        printf("The name of the driver is: %s\n", driver_data[i].name);
        printf("Driving licesnse no. of the driver is: %d\n", driver_data[i].licence_no);
        printf("Total No. of Kms driver has drove is: %d\n", driver_data[i].kms);
        printf("The route of the driver is: %s\n", driver_data[i].route);
        
    }
}

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number of which you want to store data of driver:");
    scanf("%d", &num);

    driver driver_data[num];

    // Taking input form user 
    input_taking(driver_data, num);

    // Printing the output
    output(driver_data, num);
    
    return 0;
}