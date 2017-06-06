#include <stdio.h>
#include <strings.h>

// create the struct .. alternatively I could have used a a seperate header.. 
struct customer {
    char firstName[30];
    char lastName[30];
    char street[35];
    char city[20];
    char state[3];
    int zip;
    char phone[15];
    int accountId;
};

int main() {

	
    struct customer user[10]; // invoke the customer base
    int i; 
    char stateQuery[3]; // query variable for comparison 

	// data entry loop .. 
    for (i=0;i<10;i++) { 
        user[i].accountId = i+1;
        printf("Please enter in data for customer %d \n", user[i].accountId); 
        printf("Enter First, Last, and Phone: \n");
        scanf("%s", user[i].firstName);
        scanf("%s", user[i].lastName);
        scanf("%s", user[i].phone);
        printf("\n");
        printf("Enter Address (Street, City, State, Zip):\n");
        scanf("%s", user[i].street);
        scanf("%s", user[i].city);
        scanf("%s", user[i].state);
        scanf("%d", &user[i].zip);
        printf("\n");
    }

    // query for state code
    printf("Please enter 2-character State code: \n");
    scanf("%s", stateQuery);
    printf("\n");

    printf("State filter: %s \n", stateQuery);

	// loop to spit out users that match to state.. 
    for(i=0;i<10;i++){
        if(strcmp(user[i].state, stateQuery) == 0){
            printf("\nData for customer :[%d] \n", user[i].accountId);
            printf("Full Name : %s %s \n", user[i].firstName, user[i].lastName);
            printf("Address : %s %s %s %d \n", user[i].street, user[i].city, user[i].state, user[i].zip);
            printf("Phone : %s \n\n", user[i].phone);
        }

    }

    return 0;
}