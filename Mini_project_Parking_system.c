#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define price_of_cycle  20
#define price_of_bicycle 30
#define price_of_risksha 50
#define price_of_car  80
#define price_of_bus  100
int nocycle=0,nobus=0,norisksha=0,nocar=0,nobicycle=0,total=0,count=0;

int menu()
{
    int ch;
    printf("\n********************************************************************************");
    printf("\n\n********************************************************************************");
    printf("\n\t\t*************WELCOME TO PARKING SYSTEM*************");
    printf("\n\n\t\t******************SUPER MALL********************");
    printf("\n\n\t\t***************KARNAL,HARYANA******************");
    printf("\n\n********************************************************************************");
    printf("\n********************************************************************************");
    printf("\n\n\t\t\tSelect only single option give below ");
    printf("\n\n\t\t\t1.Enter Cycle");
    printf("\n\n\t\t\t2.Enter Bicycle");
    printf("\n\n\t\t\t3.Enter Risksha");
    printf("\n\n\t\t\t4.Enter Car");
    printf("\n\n\t\t\t5.Enter Bus");
    printf("\n\n\t\t\t6.Show Status");
    printf("\n\n\t\t\t7.Delete Data");
    printf("\n\n\t\t\t8.Exit");
    printf("\n\n********************************************************************************");
    printf("\n********************************************************************************");
    printf("\n\n\tEnter your choice :");
    scanf("%d",&ch);
    return ch;
}
void cycle()
{
    nocycle++;
    count++;
    total+=price_of_cycle;
    printf("\n\t\tCycle entry is sucessful enter to system");
}


void bicycle()
{
    nobicycle++;
    count++;
    total+=price_of_bicycle;
    printf("\n\t\tBicycle entry is sucessful enter to system");
}

void risksha()
{
    norisksha++;
    count++;
    total+=price_of_risksha;
    printf("\n\t\tRisksha entry is sucessful enter to system");
}

void car()
{
    nocar++;
    count++;
    total+=price_of_car;
    printf("\n\t\tCar entry is sucessful enter to system");
}

void bus()
{
    nobus++;
    count++;
    total+=price_of_bus;
    printf("\n\t\tBus entry is sucessful enter to system");
}
void delete()
{
    printf("\n\n\t\tSystem is Reset,for again use");
    nocycle=0;
    nobicycle=0;
    norisksha=0;
    nocar=0;
    nobus=0;
    count=0;
    total=0;
}

void showdetail()
{
    printf("\n********************************************************************************");
    printf("\n\n********************************************************************************");
    printf("\n\t\t*************WELCOME TO PARKING SYSTEM*************");
    printf("\n\n\t\t******************SUPER MALL********************");
    printf("\n\n\t\t***************KARNAL,HARYANA******************");
    printf("\n\n********************************************************************************");
    printf("\n********************************************************************************");
    printf("\n\n\t\tStatus of Parking sytem till today is given below");
    printf("\n\n\tNumber of Cycle entry in System: %d",nocycle);
    printf("\n\n\tNumber of Bicycle entry in System: %d",nobicycle);
    printf("\n\n\tNumber of Risksha entry in System: %d",norisksha);
    printf("\n\n\tNumber of Car entry in System: %d",nocar);
    printf("\n\n\tNumber of Bus entry in System: %d",nobus);
    printf("\n\n\tTotal Number vechicle  entry in System: %d",count);
    printf("\n\n\tTotal gain amount in system: %d",total);
    printf("\n\n********************************************************************************");
    printf("\n********************************************************************************");


}
int main()
{
    while(1)
    {
        system("cls");
        switch(menu())
        {
          case 1:
            cycle();
             break;
          case 2:
            bicycle();
            break;
          case 3:
            risksha();
            break;
          case 4:
            car();
            break;
          case 5:
            bus();
            break;
          case 6:
            system("cls");
            showdetail();
            break;
          case 7:
            delete();
            break;
          case 8:
            system("cls");
            showdetail();
            printf("\n\n\t\tTHANKS FOR VISIT OUR SYSTEM");
            printf("\n\n\t\t\tMADE BY SHUBHAM JINDAL");
            printf("\n\n********************************************************************************");
            printf("\n********************************************************************************");
            exit(0);
            getch();
        }
        getch();
    }
    return 0;
}


