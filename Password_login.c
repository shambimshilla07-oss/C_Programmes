#include <stdio.h>
#include <string.h>

int main() {
char password[10];

do {
printf("Enter password:\t");
scanf("%s",password);
} while(strcmp(password,"1234") !=0);

printf("Access Granted \n");

return 0;
}