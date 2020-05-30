#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int totalamount=10000,damount,totaldamount=0,wamount,totalwamount=0,tamount,totaltamount=0,accountnumber;
char uname[23],branch[34],bname[45];
int menu()
{
    int ch;
    printf("\n********************************************************************************");
    printf("\n\n********************************************************************************");
    printf("\n\t\t*************WELCOME TO BANKING SYSTEM*************");
    printf("\n\n\t\t*************PUNJAB NATIONAL BANK******************");
    printf("\n\n\t\t***************MUMBAI,MAIN BRANCH******************");
    printf("\n\n********************************************************************************");
    printf("\n********************************************************************************");
    printf("\n\n\n\t\t1.Deposite Amount");
    printf("\n\t\t2.Withdraw Amount");
    printf("\n\t\t3.Transfer Amount");
    printf("\n\t\t4.Check Amount Details");
    printf("\n\t\t5.Exit from Banking System");
    printf("\n\n\n********************************************************************************");
    printf("\n********************************************************************************");
    printf("\n\tSelect your choice:");
    scanf("%d",&ch);
    return ch;
}
void deposite()
{
    printf("\nEnter Amount you wish deposite into your account:");
    scanf("%d",&damount);
    totalamount+=damount;
    totaldamount+=damount;
    printf("\n\tMONEY IS DEPOSITE SUCCESS IN YOUR ACCOUNT");
}

void withdraw()
{
    printf("\nEnter Amount you wish Withdraw from your account:");
    scanf("%d",&wamount);
    if(wamount<=totalamount)
    {
        totalamount-=wamount;
        totalwamount+=wamount;
        printf("\n\tMONEY IS WITHDRAW SUCCESS FROM YOUR ACCOUNT");
    }
    else
    {
        printf("\nLess balance in your account,NOT POSSIBLE TO WITHDRAW MONEY");
    }
}
void transfer()
{
    printf("\nEnter Amount you wish Transfer from your account:");
    scanf("%d",&tamount);
    if(tamount<=totalamount)
    {
        totalamount-=tamount;
        totaltamount+=tamount;
        printf("\n\tMONEY IS TRANSFER SUCCESS FROM YOUR ACCOUNT");
    }
    else
    {
        printf("\nLess balance in your account,NOT POSSIBLE TO TRANSFER MONEY");
    }

}
void checkdetail()
{
    printf("\n********************************************************************************");
    printf("\n\n********************************************************************************");
    printf("\n\t\t*************WELCOME TO BANKING SYSTEM*************");
    printf("\n\n\t\t*************PUNJAB NATIONAL BANK******************");
    printf("\n\n\t\t***************MUMBAI,MAIN BRANCH******************");
    printf("\n\n********************************************************************************");
    printf("\n********************************************************************************");
    printf("\n\n********************************************************************************");
    printf("\n\t************Account detail while transcation is done:*************");
    printf("\n\n********************************************************************************");
    printf("\n\tTotal Balance in your account: %d",totalamount);
    printf("\n\tTotal Deposite in your account: %d",totaldamount);
    printf("\n\tTotal Withdraw from your account: %d",totalwamount);
    printf("\n\tTotal Transfer from your account: %d",totaltamount);
    printf("\n\n********************************************************************************");
    printf("\n\n********************************************************************************");
}

void viewdetail()
{
    printf("\n********************************************************************************");
    printf("\n\n********************************************************************************");
    printf("\n\t\t*************WELCOME TO BANKING SYSTEM*************");
    printf("\n\n\t\t*************PUNJAB NATIONAL BANK******************");
    printf("\n\n\t\t***************MUMBAI,MAIN BRANCH******************");
    printf("\n\n********************************************************************************");
    printf("\n********************************************************************************");
    printf("\n\n********************************************************************************");
    printf("\n\t****************Account detail After transcation is done:*************");
    printf("\n\n********************************************************************************");
    printf("\n\tUser name: %s",uname);
    printf("\n\tAccount of %s is : %d",uname,accountnumber);
    printf("\n\tBank name: %s",bname);
    printf("\n\tBranch name of %s is : %s\n",bname,branch);
    printf("\n\t****Transaction of %d account number*****",accountnumber);
    printf("\n\n\tTotal Balance in your account: %d",totalamount);
    printf("\n\tTotal Deposite in your account: %d",totaldamount);
    printf("\n\tTotal Withdraw from your account: %d",totalwamount);
    printf("\n\tTotal Transfer from your account: %d",totaltamount);
    printf("\n\n********************************************************************************");
    printf("\n\n********************************************************************************");
    printf("\n\t************THANKS TO VISIT US *************");
    printf("\n\n********************************************************************************");
    printf("\n\n********************************************************************************");
    //printf("\n\n\t\tTHANKS FOR VISIT OUR SYSTEM");
    printf("\n\n\t\t\tMADE BY SHUBHAM JINDAL");
    printf("\n\n********************************************************************************");
    printf("\n********************************************************************************");

}

int main()
{
    system("cls");
    printf("\n********************************************************************************");
    printf("\n\n********************************************************************************");
    printf("\n\t\t*************WELCOME TO BANKING SYSTEM*************");
    printf("\n\n\t\t*************PUNJAB NATIONAL BANK******************");
    printf("\n\n\t\t***************MUMBAI,MAIN BRANCH******************");
    printf("\n\n********************************************************************************");
    printf("\n********************************************************************************");
    printf("\n\n\tEnter your name:");
    gets(uname);
    printf("\n\tEnter bank name :");
    gets(bname);
    printf("\n\tEnter branch of %s is: ",bname);
    gets(branch);
    printf("\n\tEnter your Account number: ");
    scanf("%d",&accountnumber);
    while(1)
    {
        system("cls");
        switch(menu())
        {
           case 1:
             deposite();
             break;
           case  2:
             withdraw();
             break;
           case 3:
             transfer();
             break;
           case 4:
             system("cls");
             checkdetail();
             break;
           case 5:
             system("cls");
             viewdetail();
             getch();
             exit(0);
           default :
             printf("\nInvalid choice ,try again ");
    }
      getch();
    }
    return 0;
}
