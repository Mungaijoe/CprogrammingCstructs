#include <stdio.h>
#include "function.h"

int main() 
{
    int arraySize = 10;
    struct Phone phonesArray[arraySize];
  displayPhones(phonesArray, arraySize);
    printPhones(phonesArray, arraySize);
    return 0;
}

