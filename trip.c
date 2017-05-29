// Philip Holtzman
// May 28th 2017
// Functions Assignment
// sources: none

#include <stdio.h>

// prototypes
void welcomeMessage();
void askUserForInput();
void printTripSummary(float fuel, float minCost, float maxCost, float travelMiles);

int main() {

    // calling the functions
    welcomeMessage();
    askUserForInput();

    return 0;
}

void welcomeMessage()
{
    printf("----------------------------------------\n");
    printf("     Welcome to the Trip Planner\n");
    printf("----------------------------------------\n");
    printf("  Lets determine destination and cost!\n");
    printf("----------------------------------------\n");
    printf("\n");
}

void askUserForInput()
{

    float milesPerGal;
    float lowestCostPerGal;
    float highestCostPerGal;
    float milesToTravel;
    int condition = 1; // poor mans C Boolean control

    while(condition == 1) {

        printf("----------------------------------------\n");
        printf(" Input your car's average miles per gallon\n");
        printf("  (enter 0 to quit) \n");

        printf("\n");
        printf("\n");

        scanf("%f", &milesPerGal);

        printf("\n");
        if (milesPerGal > 0) {

            printf("Range of fuel costs you expect to pay (per gallon)\n");
            printf("The lowest per gallon cost of fuel is? \n");
            scanf("%f", &lowestCostPerGal);
            printf("The highest per gallon cost of fuel is? \n");
            scanf("%f", &highestCostPerGal);
            printf("Please tell me how many miles you plan to travel? \n");
            scanf("%f", &milesToTravel);

            // push the values to the print report function
            printTripSummary(milesPerGal, lowestCostPerGal, highestCostPerGal, milesToTravel);
        } else {
            printf("goodbye");
            condition = 0; // escape the program and while loop with fake bool
        }
    }
}

void printTripSummary(float milesPerGal, float lowestCostPerGal, float highestCostPerGal, float milesToTravel){

    float fuel;
    float lowestCost;
    float highestCost;

    // fuel calculations
    fuel = milesToTravel / milesPerGal;

    lowestCost = fuel * lowestCostPerGal;
    highestCost = fuel * highestCostPerGal;

    printf("================================TRIP SUMMARY=================================\n", fuel);
    printf("       You will need to purchase %.2f gallons of fuel.\n", fuel);
    printf("  The approximate cost of fuel for your trip is between $%.2f and $%.2f.\n", lowestCost, highestCost);
    printf("===============================END SUMMARY===================================\n", lowestCost, highestCost);


}