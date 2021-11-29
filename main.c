#include<stdio.h>
#include<string.h>

int func1(){
	int trial;
	trial = main();
}

int dashboard()
{
	int menu;
	printf(" ==================================================================\n");
	printf("                 Account Ticketing System -Agent Menu     \n");
	printf(" ==================================================================\n");
	printf("\n");
	printf("||             1) Add a new account                       ||\n");
	printf("||             2) Modify an existing account              ||\n");
	printf("||             3) Remove an account                       ||\n");
	printf("||             4) List accounts: detailed view            ||\n");
	printf("\n");
	printf("||================================================================||\n");
	printf("||             5) List new tickets                        ||\n");
	printf("||             6) List Active Tickets                     ||\n");
	printf("||             7) List closed tickets                     ||\n");
	printf("||             8) Add a new ticket                        ||\n");
	printf("||             9) Manage a Ticket                         ||\n");
	printf("\n");
	printf("||================================================================||\n");
	printf("  0) Logout                                                \n");
	printf("||================================================================||\n");
	printf("\n");
	printf("||================================================================||\n");
	printf("  Enter your choice:                                                  \n");
	scanf("%d",&menu);
	printf("||================================================================||\n");

	if(menu == 1)
	{
		printf("  Menu 1                                                 \n");
	}
	if (menu == 2)
	{
		printf("  Menu 2                                                 \n");
	}
	if (menu == 3)
	{
		printf("  Menu 3                                                 \n");
	}
}

int main()

{

char name[25],pwd[25],ver[25];

int i,a,digi=0,up=0,low=0,schar=0;

int choice;
	printf("                 Account Ticketing System - Login\n");
	printf(" ==================================================================\n");
	printf("||             1) Login to the system           ||\n");
	printf("||             0) Exit application              ||\n");
	printf("||================================================================||\n");
	printf("  Enter your choice: ");
	scanf("%d",&choice);
//	return choice;

if(choice > 2 )

{

printf("ERROR: Value must be between 0 and 1 inclusive:\n");

char toexit;
	printf(" ==================================================================\n");
	printf("                 Are you sure you want to exit? ([Y]es|[N]o):\n");
	printf(" ==================================================================\n");
	printf("  Enter your choice: ");
	scanf("%d",&toexit);

	if (toexit == 'n')

	{
		
	int login;
		printf(" ==================================================================\n");
		printf("                 Account Ticketing System - Login      \n              ");
		printf(" ==================================================================\n");
		printf("||             1) Login to the system           ||\n");
		printf("||             0) Exit application              ||\n");
		printf("||================================================================||\n");
		printf("  Enter your choice:                                                  ");
		printf("||================================================================||\n");
		scanf("%d",&login);
		
		if(login == 1){
			
//			printf("||================================================================||\n");
//			printf("Enter your Name:                                                    \n");
//			printf("||================================================================||\n");
//            gets(name);

			return;
		}
	
	}else{
		return;
	}

}else{
			int account;
			printf("||================================================================||\n");
			printf("  Enter The Account:                                                    \n");
			printf("||================================================================||\n\n");
			scanf("%d",&account);

			if (account == 1)
			{
				int user;
				printf("||================================================================||\n");
				printf("  Enter the User Login:                                                    \n");
				printf("||================================================================||\n");
				scanf("%d",&user);
				// return user;

				if(user == 2){

					
				}
			}

			int pass;
			printf("||================================================================||\n");
			printf("  Enter the Account Password:                                                    \n");
			printf("||================================================================||\n");
			scanf("%d",&pass);

			if (pass == 3)
			{
				printf("||================================================================||\n");
				printf("\n");
				printf("Logging in........ \n");
				printf("\n");
				printf("AGENT: Will Smith (50008) \n");
				printf("||================================================================||\n");
				printf("\n");
				printf("||================================================================||\n");
				int trial;
				trial = dashboard();
				// return;
			}
			else
			{
				printf("||================================================================||\n");
				printf("Wrong Credentials  \n"); 
				printf("||================================================================||\n");
				int trial;
				trial = func1();
				//  return;
			}

			// else
			// {
				// printf("Wrong Credentials                    \n");
				// account();
				// account;
				// return;
			// }			
				
			// printf("Hello %s, Enter your password:\n",name);
			int trial;
			trial = func1();
			// return;
}

return 0;




}
