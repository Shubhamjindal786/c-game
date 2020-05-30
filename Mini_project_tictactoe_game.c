#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

char a[9]={'1','2','3','4','5','6','7','8','9'};
int count=0;
void gamename()
{
    printf("********************************************************************************");
    printf("********************************************************************************");
    printf("\n\n\t\t************TIC TAC TOE GAME ****************");
    printf("\n\t\t\t\tMADE BY SHUBHAM JINDAL");
    printf("\n\n\n********************************************************************************");
    printf("********************************************************************************");
}
void show()
{
    printf("\n\n\t\t\t|----|----|----|");
    printf("\n\t\t\t| %c  |  %c | %c  |",a[0],a[1],a[2]);
    printf("\n\t\t\t|----|----|----|");
     printf("\n\t\t\t| %c  |  %c | %c  |",a[3],a[4],a[5]);
    printf("\n\t\t\t|----|----|----|");
     printf("\n\t\t\t| %c  |  %c | %c  |",a[6],a[7],a[8]);
    printf("\n\t\t\t|----|----|----|");
}
void inputsymbol()
{
    printf("\n\n********************************************************************************");
    printf("Player 1 Symbol :0:");
    printf("\nPlayer 2 Symbol :x:");
    printf("\n********************************************************************************");
}
void start()
{
    char pa;
    printf("\nEnter who will start the game player 1 or player 2:");
    scanf("%c",&pa);
    printf("\n\t\tFirst turn is of player :%c\n ",pa);
}
void check(char P,char S)
{
    int i;
    for(i=0;i<=8;i++)
    {
        if(a[i]==P)
        {
            a[i]=S;
        }
    }

}

void play()
{
    char p,s;
  //  label1:
    printf("\nEnter  position and symbol:");
    fflush(stdin);
    scanf("%c",&p);
    fflush(stdin);
    scanf("%c",&s);
   /* if(s!='0')
    {
      printf("\nEnter invalid ,Enter your input again\n");
      goto label1;
    }
    if(s!='x')
    {
      printf("\nEnter invalid ,Enter your input again\n");
      goto label1;
    }
*/    count++;
    check(p,s);
}

int end()
{
    if((a[0]=='0'&&a[3]=='0'&&a[6]=='0')||(a[0]=='0'&&a[1]=='0'&&a[2]=='0')||(a[0]=='0'&&a[4]=='0'&&a[8]=='0'))
        return 100;
    else if((a[0]=='x'&&a[3]=='x'&&a[6]=='x')||(a[0]=='x'&&a[1]=='x'&&a[2]=='x')||(a[0]=='x'&&a[4]=='x'&&a[8]=='x'))
        return 200;
    else if(a[1]=='0'&&a[4]=='0'&&a[7]=='0')
        return 100;
    else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')
        return 200;
    else if((a[2]=='0'&&a[5]=='0'&&a[8]=='0')||(a[2]=='0'&&a[4]=='0'&&a[6]=='0'))
        return 100;
    else if((a[2]=='x'&&a[5]=='x'&&a[8]=='x')||(a[2]=='x'&&a[4]=='x'&&a[6]=='x'))
        return 200;
    else if(a[3]=='0'&&a[4]=='0'&&a[5]=='0')
        return 100;
    else if(a[3]=='x'&&a[4]=='x'&&a[5]=='x')
        return 200;
    else if(a[6]=='0'&&a[7]=='0'&&a[8]=='0')
        return 100;
    else if(a[6]=='x'&&a[7]=='x'&&a[8]=='x')
        return 200;
    return 300;
}

int main()
{
    char ch;
    int k;
    labell:
    gamename();
    show();
    inputsymbol();
    start();
    play();

    label:
    system("cls");
    show();
    play();
    k=end();
    system("cls");
    show();
   if(count<9)
   {
    if(k==100)
    {
        printf("\n\tPlayer 1 won the game");
        count=0;
    }
    else if(k==200)
    {
        printf("\n\tPlayer 2 won the game");
        count=0;
    }
    else
    {
        goto label;
    }
   }
   else
   {
       printf("\n\tGame Draw");
       count=0;
   }
    printf("\n\n\tDo you want to contniue next game?\n\t\tEnter y for YES and n for NO:");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
    {
        system("cls");
        a[0]='1';
        a[1]='2';
        a[2]='3';
        a[3]='4';
        a[4]='5';
        a[5]='6';
        a[6]='7';
        a[7]='8';
        a[8]='9';
        goto labell;
    }
    else
    {
        printf("\n\n\t\t\tGAME IS FINISH ,PRESS ANY KEY TON EXIT");
    }
    getch();
    return 0;
}
