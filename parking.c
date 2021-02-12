#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int nor=0,noc=0,nob=0,amount=0,count=0;
int Menu()
{
    int ch; 
	printf("\n 1.Enter Bus");
	printf("\n 2.Enter Cycle");
	printf("\n 3.Enter Riksha");
	printf("\n 4.Show Status");
	printf("\n 5.Delete Status");
	printf("\n 6.Exit");
	printf("\n Enter your choice");
	scanf("%d",&ch);
	return(ch);
}
void Delete()
{
	nor=0;
	noc=0;
	nob=0;
	amount=0;
	count=0;
}
void ShowDetail()
{
	printf("\n Number of Bus : %d",nob);
	printf("\n Number of Cycle : %d",noc);
	printf("\n Number of Riksha : %d",nor);
	printf("\n Total number of vehicles : %d",count);
	printf("\n Total gain amount : %d",amount);
}
void Riksha()
{
    printf("\n Entry Successful !!!"); 
	nor=0;
	amount=amount+50;
	count++;
}
void Cycle()
{
	printf("\n Entry Successful !!!");
	noc=0;
	amount=amount+20;
	count++;
}
void Bus()
{
	printf("\n Entry Successful !!!");
	nob=0;
	amount=amount+100;
	count++;
}
int main()
{
	system("cls");
	while(1)
	{
		switch(Menu())
		{
			case 1:
			    Bus();
			    break;
		case 2:
		        Cycle();
				break;
		case 3:
				Riksha();
				break;
		case 4:
				ShowDetail();
				break;
		case 5:
				Delete();
				break;
		case 6:
				exit(0);
				break;
		default:
				printf("Invalid Choice");
		}
			    
	}
	return 0;
}

