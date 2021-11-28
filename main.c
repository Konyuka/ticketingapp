//C Program to Validate Password

#include<stdio.h>

#include<string.h>

void main()

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
	
	if(choice = "n" )
	
	{
	
	printf("ERROR: Value must be between 0 and 1 inclusive:\n");
	
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
		
		if(login = 1){
			printf("||================================================================||\n");
			printf("Enter your Name:                                                    \n");
			printf("||================================================================||\n");
            gets(name);
		}
	
	}else{
		return;
	}

}else{
			char name;
			printf("||================================================================||\n");
			printf("Enter your Name:                                                    \n");
			printf("||================================================================||\n");
			scanf("%s",&name);
			printf("Hello %s, Enter your password:\n",name);
			return;
}
return;


printf("Hello %s, Enter your password:\n",name);

gets(pwd);

a=strlen(pwd);

if(a<5)

{

printf("Error: Password should contain contain minimum 5 characters ");

}

else if(a>12)

{

printf("Error: Password shouldn't exceed 12 characters ");

}

else

{

for(i=0;pwd[i]!=NULL;i++)

{

if(pwd[i]>='A' && pwd[i]<='Z')

up++;

if(pwd[i]>='a' && pwd[i]<='z')

low++;

if(pwd[i]>='0' && pwd[i]<='9')

digi++;

if(pwd[i]=='@'||pwd[i]=='#'||pwd[i]=='$')

schar++;

}

}

if(up==0)

printf("There must be at least one Uppercase\n");

if(low==0)

printf("There must be at least one Lowercase\n");

if(digi==0)

printf("There must be at least one Digit\n");

if(schar==0)

printf("There must be at least one Special Character\n");

else

{

printf("Confirm your Password\n");

gets(ver);

if(strcmp(pwd,ver)==0)

printf("Welcome %s, your is Password Verified",name);

else

printf("Password did not match");

}

getch();

}
