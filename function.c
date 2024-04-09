#include <stdio.h>
#include "function.h"

void displayPhones(struct Phone *phonesArray, int arraySize) 
{
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for Phone %d:\n", i + 1);
        printf("Brand: ");
        scanf("%s", phonesArray[i].brand);
        printf("Battery (mAh): ");
        scanf("%d", &phonesArray[i].battery);
        printf("Camera (MP): ");
        scanf("%f", &phonesArray[i].camera);
        printf("Network: ");
        scanf("%s", phonesArray[i].network);
        printf("Storage (GB): ");
        scanf("%d", &phonesArray[i].storage);
        printf("Memory (GB): ");
        scanf("%d", &phonesArray[i].memory);
        printf("Price: ");
        scanf("%f", &phonesArray[i].price);
    }
}

// Function to print the structure elements
void printPhones(struct Phone *phonesArray, int arraySize) {
    printf("\nPhone Details:\n");
    for (int i = 0; i < arraySize; i++) 
    {
        printf("Phone %d:\n", i + 1);
        printf("Brand: %s\n", phonesArray[i].brand);
        printf("Battery: %d mAh\n", phonesArray[i].battery);
        printf("Camera: %.1f MP\n", phonesArray[i].camera);
        printf("Network: %s\n", phonesArray[i].network);
        printf("Storage: %d GB\n", phonesArray[i].storage);
        printf("Memory: %d GB\n", phonesArray[i].memory);
        printf("Price: $%.2f\n", phonesArray[i].price);
    }
}

