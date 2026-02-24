#include <stdio.h>

int main() {

    // Primitive data types
    int carID;
    char carType[20];
    float price;

    // Input from user
    printf("Enter Car ID: ");
    scanf("%d", &carID);

    printf("Enter Car Type (Sedan/SUV/Truck/Van): ");
    scanf("%s", carType);

    printf("Enter Car Price: ");
    scanf("%f", &price);

    // Display output
    printf("\n----- CAR DETAILS -----\n");
    printf("Car ID: %d\n", carID);
    printf("Car Type: %s\n", carType);
    printf("Car Price: %.2f Ksh\n", price);

    return 0;
}