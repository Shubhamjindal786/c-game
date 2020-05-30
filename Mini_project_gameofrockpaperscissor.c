#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef int PLAYER;
PLAYER you,computer;

int menu()
{
    int ch;
    char a[18];
    printf("\n**********************************GAME******************************************");
    printf("\n********************SCISSOR,PAPER AND ROCK GAME*********************************\n");
    printf("\t1.Select Rock ");
    printf("\n\t2.Select Paper");
    printf("\n\t3.Select Scissor");
    printf("\n\t4.Exit");
    printf("\n\n********************************************************************************");
    printf("\n\tEnter Name Before Start the game:");
    gets(a);
    gets(a);
    printf("\n\tHello %s,Welcome to our game ",a);
    printf("\n\tEnter your choice:");
    scanf("%d",&ch);
    return ch;
}
void setup()
{
    label:
    computer=rand()%4;
    if(computer==0)
        goto label;
    you=menu();
    //printf("\ncomputer:%d",computer);
    //printf("\nyou:%d",you);
}
void Makelogic()
{
    switch(you)
    {
      case 1://you=rock
          if(computer==1)//you=rock and computer=rock
          {
              printf("\n\t\t****Game Draw****");
              printf("\n\t\t****You=Rock****");
              printf("\n\t\t****Computer=Rock****");
          }
          else if(computer==2)//you=rock and computer=paper
          {
              printf("\n\t\t****Computer Won****");
              printf("\n\t\t****You=Rock****");
              printf("\n\t\t****Computer=Paper****");

          }
          else //you=rock and computer=scissor
          {
              printf("\n\t\t****You Won****");
              printf("\n\t\t****You=Rock****");
              printf("\n\t\t****Computer=Scissor****");
          }
          break;
      case 2://you=paper
          if(computer==1)//you=paper and computer=rock
          {
              printf("\n\t\t****You Won****");
              printf("\n\t\t****You=Paper****");
              printf("\n\t\t****Computer=Rock****");
          }
          else if(computer==2)//you=paper and computer=paper
          {
              printf("\n\t\t****Game Draw****");
              printf("\n\t\t****You=Paper****");
              printf("\n\t\t****Computer=Paper****");

          }
          else //you=paper and computer=scissor
          {
              printf("\n\t\t****Computer Won****");
              printf("\n\t\t****You=Paper****");
              printf("\n\t\t****Computer=Scissor****");
          }
          break;
      case 3://you=scissor
          if(computer==1)//you=scissor and computer=rock
          {
              printf("\n\t\t****Computer Won****");
              printf("\n\t\t****You=Scissor****");
              printf("\n\t\t****Computer=Rock****");
          }
          else if(computer==2)//you=scissor and computer=paper
          {
              printf("\n\t\t****You Won****");
              printf("\n\t\t****You=Scissor****");
              printf("\n\t\t****Computer=Paper****");

          }
          else //you=scissor and computer=scissor
          {
              printf("\n\t\t****Game Draw****");
              printf("\n\t\t****You=Scissor****");
              printf("\n\t\t****Computer=Scissor****");
          }
          break;
      case 4:
        exit(0);
      default:
        printf("\nInvalid choice,Try again");
    }
    printf("\n\n\n********************************************************************************");
    printf("\n********************************************************************************");
    printf("\n\t\t\t********GAME OVER*******");
    printf("\n\n********************************************************************************");
    printf("\n********************************************************************************");
    printf("\n\n\t\tTHANKS FOR VISIT OUR SYSTEM");
    printf("\n\n\t\t\tMADE BY SHUBHAM JINDAL");
    printf("\n\n********************************************************************************");
    printf("\n********************************************************************************");


}
int main()
{
    while(1)
    {
        system("cls");
        setup();
        Makelogic();
        getch();
    }
    return 0;
}
