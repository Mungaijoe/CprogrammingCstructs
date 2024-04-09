#ifndef FUNCTION_H
#define FUNCTION_H

struct Phone {
    char brand[20];
    int battery;
    float camera;
    char network[5];
    int storage;
    int memory;
    float price;
};
void displayPhones(struct Phone *phonesArray, int arraySize);
void printPhones(struct Phone *phonesArray, int arraySize);
#endif

