#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
int menu();
void execute_action(int action);
int main()
{
    int action;
    action = menu();
    execute_action(action);

    return 0;
}
void execute_action(int action) {
    printf("you selected action %d",action);

}
int menu()
{
     int action;
    do{
        printf("library system\n");
        printf("welcome catherine\n");
        printf("what would you like to do\n");
        printf("1.view users\n");
        printf("2.add a new user\n");
        printf("3.delete user\n");
        printf("4.edit user\n");
        printf("5.change password\n");
        printf("6.log in\n");
        printf("7.log out\n");
        printf("8.exit system\n");
        printf("selected action(1-8): ");
        scanf("%d",&action);
        if(action < 1 || action > 8){
                system("cls");
                printf("invalid action!!!try again.\n");
        }
    }while(action < 1 || action > 8);

    return action;
}
