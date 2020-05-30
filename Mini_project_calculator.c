#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int k=0;
int result=0;
int menu()
{
    int ch;
    printf("\n\t\t\tCalacutor ");
    printf("\n\t\t1.Add");
    printf("\n\t\t2.Sub");
    printf("\n\t\t3.Mul");
    printf("\n\t\t4.Div");
    printf("\n\t\t5.Getreminder");
    printf("\n\t\t6.(1/x) operator");
    printf("\n\t\t7.clear");
    printf("\n\t\t8.Exit");
    printf("\n\tEnter your choice:");
    scanf("%d",&ch);
    return ch;
}

void add()
{

    int a,b;
    printf("\n\tAddition mode");
    if(k)
    {
        printf("\nEnter number:");
        scanf("%d",&a);
        result+=a;
        printf("\n\tResult is:%d",result);
    }
    else
    {
        printf("\nEnter two value:");
        scanf("%d%d",&a,&b);
        result=a+b;
        printf("\n\tResult is:%d",result);
    }
}

void sub()
{
    int a,b;
    printf("\n\tSubtraction mode");
    if(k)
    {
        printf("\nEnter number:");
        scanf("%d",&a);
        result-=a;
        printf("\n\tResult is:%d",result);
    }
    else
    {
        printf("\nEnter two value:");
        scanf("%d%d",&a,&b);
        result=a-b;
        printf("\n\tResult is:%d",result);
    }
}

void mul()
{
    int a,b;
    printf("\n\tMulitication mode");
    if(k)
    {
        printf("\nEnter number:");
        scanf("%d",&a);
        result*=a;
        printf("\nResult is:%d",result);
    }
    else
    {
        printf("\nEnter two value:");
        scanf("%d%d",&a,&b);
        result=a*b;
        printf("\nResult is:%d",result);
    }
}

void divide()
{
    int a,b;
    printf("\n\tDivision mode");
    if(k)
    {
        printf("\nEnter number:");
        scanf("%d",&a);
        result/=a;
        printf("\nResult is:%d",result);
    }
    else
    {
        printf("\nEnter two value:");
        scanf("%d%d",&a,&b);
        result=a/b;
        printf("\nResult is:%d",result);
    }
}

void getreminder()
{
    int a,b;
    printf("\n\tReminder mode");
    if(k)
    {
        printf("\nEnter number:");
        scanf("%d",&a);
        result%=a;
        printf("\nResult is:%d",result);
    }
    else
    {
        printf("\nEnter two value:");
        scanf("%d%d",&a,&b);
        result=a%b;
        printf("\nResult is:%d",result);
    }
}

void x_value()
{
    int a;
    printf("\n\t(1/x) mode");
    if(k)
    {
        if(result==0)
        {
            printf("x should not be zero");
        }
        else
        {
        result=1/result;
        printf("\nResult is:%d",result);
        }
    }
    else
    {
        printf("\nEnter number:");
        scanf("%d",&a);
        result=1/a;
        printf("\nResult is:%d",result);
    }
}

void clear()
{
    printf("\n Old Data Cleared");
    result=0;
    k=0;
}

int main()
{
 while(1)
 {
    system("cls");
    printf("\n\n\t\t\tResult :%d",result);
    switch(menu())
    {
        case 1:
          add();k=1;break;
        case 2:
          sub();k=1;break;
        case 3:
          mul();k=1;break;
        case 4:
          divide();k=1;break;
        case 5:
          getreminder();k=1;break;
        case 6:
            x_value();k=1;break;
        case 7:
            clear();
            break;
        case 8:
            exit(0);
        default :
            printf("\n Invalid choice,Try again");
    }
    printf("\n\n\t\tTHANKS FOR VISIT OUR SYSTEM");
    printf("\n\n\t\t\tMADE BY SHUBHAM JINDAL");
    printf("\n\n********************************************************************************");
    printf("\n********************************************************************************");

    getch();
 }
    return 0;
}
