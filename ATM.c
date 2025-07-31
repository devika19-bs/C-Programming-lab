#include <stdio.h>
int main(){
int choice;
float balance=1000.00,amount;
while(1){
    printf("\n==ATM MENU===\n");
    printf("1. view balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("Enter your choice:");
    scanf("d%",&choice);
    switch(choice){
case 1:
    printf("your balance:Rs%.2f\n",balance};
    break;
case 2:
    printf("Enter amount to deposit:Rs");
    scanf("%F",&amount);
    blance+=amount;
    printf("Deposit successful!\n");
    break;
case 3:
    printf("Enter amount to withdrawl:Rs");
    scanf("%f",&amount);
    if(amount<=balance){
        balance-=amount;
        printf("withdrawl successful!\n");
        } else {
        printf("insufficient balance!\n");
        }
        break;
case 4:
    printf(Thank you! visit again.\n");
    return 0;//ends the program
default:
    printf("Invalid choice!\n");
    }
}
return 0;
}
