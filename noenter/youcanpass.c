#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *name[5][10] = {
    "Nathan", "Smith", "john",
    "Jone", "Mathew"
};

int Password = 1210;

void enter(void)
{
    int n;
    int p;
    int count;
       

    for(count = 0; count < 3;) {
        
        printf("Enter the name: ");
        scanf("%s", &n);

        printf("Enter the Password: ");
        scanf(" %d", &p);
        count++;

        if(n == name, p == Password)
            printf("Welcome\n");
        else 
            printf("Incorrect username or password\n");
            printf("Attempted %d times\n", count);
            //should be able to restart the prompet
            //ok
            //this should also stop once it hits 3 but does not 
            if(count == 3) {
                printf("You have used 3 attempts");
                    exit(EXIT_FAILURE);
            }
    }
   
};

int main(void)
{
    enter();
}