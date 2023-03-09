#include"stdio.h"
#include"stdlib.h"
#include"string.h"
int i = 0;
struct {

char name[90];
char email[200];
char mobile_number[15];
char from[100];
char to[100];
char password[10];
char CLASS[100];

}person[500];


void signin()
{
  printf("Enter your name : ");
  scanf("%[^\n]s* person",person[i].name);
  printf("Enter your mobile number : ");
  scanf("%[^\n]s* person",person[i].mobile_number);
  printf("Enter your Email wihout @gmail.com : ");
  scanf("%[^\n]s* person",person[i].email);
  printf("Enter your distinatin : ");
  scanf("%[^\n]s* person",person[i].to);
  printf("Enter where you from : ");
  scanf("%[^\n]s* person",person[i].from);
  printf("Enter class name\nAC\nNon-AX");
  scanf("%[^\n]s* person",person[i].CLASS);
  i++;
}




void login(){

  char email[20];
  char password[20];
printf("Enter your gmail : ");
scanf("%s",email);
printf("Enter your password : ");
scanf("%s",password);

if( strcmp(email,person[i].email) )
{
    if( strcasecmp(password,person[i].password)){
        void show();
    }

}
else {
  printf("please signin");
   void signin();
}

}

void show()
{

int n1=5,n2=100;

printf("--------------------------------------------------------------------------------------------------------------\n");
printf("|                              AIRLINE RESERVATION SYSTEM                                                    |\n");
printf("|                                                                                                            |\n");
printf("|                                   FLIGHT INFORMATION                                                       |\n");
printf("| FLIGHT NO : AFG%dZ%d                                                                                       |\n",n1,n2);
printf("|                                                                                                            |\n");
printf("| FLIGHT DATE DD/MM/YY                                                                                       |\n");
printf("|   FROM : xxxxxxxxx                                                                                         |\n");
printf("|     TO : %s                                                seat : A%d  ||  Time 11:00am                   |\n",person[i].CLASS,n1);
printf("|                                                                                                            |\n");
printf("| BOOKING SEATS                                                                                              |\n");
printf("| ______________                                                                                             |\n");
printf("|                                                                                                            |\n");
printf("| FLIGHT CLASS : XXXXXX                                                                                      |\n");
printf("|                                                                                                            |\n");
printf("|  NAME : %s                                                                              |\n",person[i].name);
printf("|  MOBILE NO. :  %s                                                                            |\n",person[i].mobile_number);
printf("|  YOUR SEATS :  XX                                                                                          |\n");
printf("|  YOUR GMAIL : %s                                                                              |\n",person[i].email);
printf("                                                                                                             |\n");
printf("-------------------------------------------------------------------------------------------------------------|\n");

n1++;
n2--;

}

void showadmin()
{
    int t,g;
    printf("Enter how many ticket you want to show  : ");
    scanf("%d",&t);

    for(int z = 1; z <= t; z++) {
        printf("Enter index : ");
        scanf("%d",&g);

struct person;
int n1=5,n2=100;

printf("--------------------------------------------------------------------------------------------------------------\n");
printf("|                              AIRLINE RESERVATION SYSTEM                                                    |\n");
printf("|                                                                                                            |\n");
printf("|                                   FLIGHT INFORMATION                                                       |\n");
printf("| FLIGHT NO : AFG%dZ%d                                                                                       |\n",n1,n2);
printf("|                                                                                                            |\n");
printf("| FLIGHT DATE DD/MM/YY                                                                                       |\n");
printf("|   FROM : xxxxxxxxx                                                                                         |\n");
printf("|     TO : %s                                                seat : A%d  ||  Time 11:00am                   |\n");
printf("|                                                                                                            |\n");
printf("| BOOKING SEATS                                                                                              |\n");
printf("| ______________                                                                                             |\n");
printf("|                                                                                                            |\n");
printf("| FLIGHT CLASS : %s                                                                                      |\n");
printf("|                                                                                                            |\n");
printf("|  NAME : %s                                                                              |\n");
printf("|  MOBILE NO. :  %s                                                                            |\n");
printf("|  YOUR SEATS :  XX                                                                                          |\n");
printf("|  YOUR GMAIL : %s                                                                              |\n");
printf("                                                                                                             |\n");
printf("-------------------------------------------------------------------------------------------------------------|\n");

n1++;
n2--;
i++;
}
}


void admin(){
int n;
printf("How many user info your need : ");
scanf("%d",&n);


        void showadmin();



}




int main(){
  // int i = 0;


    int choice;


printf("Enter what you want?\n\n");
printf("1.signin in.\n2.login\n3.admin login\n4.Exit\n\nEner your digit : ");

while(scanf("%d",&choice)){

switch (choice)
{
  case 1:
  void signin();
  break;
  case 2:
     printf("Your Ticket is \n\n");
  void login();
  break;
case 3:
    void showadmin();
    break;
case 4:
   exit(0);
default:
  printf("Your info is false \n");

  break;
}



}


}
