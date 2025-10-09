/*Name:Mshilla Joseck Shambi
Reg no.CT101/G/26417/25*/





#include<stdio.h>

int main () {


//initial balance example
int balance =10000;
int withdrawal;

while(balance>0) {

printf("Enter amount to withdraw");
scanf("%d", &withdrawal);

balance -=withdrawal;
printf("Remaining balance: %d\n",balance);
}

printf("Account balance is zero or negative\n");
return 0;

}
