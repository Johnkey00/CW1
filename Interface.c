#include<stdio.h>

static char first_choice;
static char reg_choice;
static char search_book;

void RegisterOrLogin();
void Register();
void User_Register();
void Lib_Register();
void Login();
void SearchBook();
void DisplayBook();


void first_interface()
{
	// The first interface that allow users to register or login.
	do
	{
		printf("****** Welcome to the libarary! ******\n");
		printf("Here you can choose: \n");
		printf("1. Register\n");
		printf("2. Login In\n");
		printf("3. Search For Books\n");
		printf("4. Display All Books\n");
		printf("5. Exit\n");
		printf("Please enter your choice(1, 2, 3, 4 or 5): ");
		scanf("%s",&first_choice);
		printf("\n\n");
		if(first_choice!='1'&&first_choice!='2'&&first_choice!='3'&&first_choice!='4'&&first_choice!='5')
		{
			printf("\nError: Invalid input! Please enter 1, 2, 3, 4 or 5\n\n");
		}
	}
	while(first_choice!='1'&&first_choice!='2'&&first_choice!='3'&&first_choice!='4'&&first_choice!='5');
	RegisterOrLogin();
	
			
}


// This function is to determine whether users want to register or login.
void RegisterOrLogin()
{
	if(first_choice=='1')
	{
		Register();
		return;
	}
	else if(first_choice=='2')
	{
		Login();
		return;
	}
	else if(first_choice=='3')
	{
		SearchBook();
		return;
	}
	else if(first_choice=='4')
	{
		DisplayBook();
		return;
	}
	else if(first_choice=='5');
	{
		printf("****** Exit successfully! ******\n");
		return ;	
	} 
}


// This function is the interface for register.
void Register()
{
	printf("***** Welcomt To Register ******\n");
	printf("1. User Registration\n");
	printf("2. Librarian Registration\n");
	printf("3. Back To the Home page\n");
	printf("4. Exit\n");
	printf("Please enter your choice(1, 2, 3 or 4):");
	scanf("%s", &reg_choice);
	printf("\n\n");
	
	//The code below is the function of register.
	
	// User Registration needs to call a funtion of User_Register.
	if(reg_choice=='1')
	{
		User_Register();
		return;
	}
	
	
	// Librarian Registration needs to call a function of Lib_Register.
	else if (reg_choice=='2')
	{
		Lib_Register();
		return;
	}
	
	
	// This choice allows users to go back to the home page.
	else if (reg_choice=='3')
	{
		first_interface();
		return;
	}
	
	
	// This choice allows users to exit the program.
	else if (reg_choice=='4')
	{
		printf("****** Exit successfully! ******\n");
		return ;
	}

}


// This function allows users to register.
void User_Register()
{
	printf("****** User Registration ******\n\n");
	printf("Please enter user name: ");
	
	
	
	
}


// This function allows a librarain to register.
void Lib_Register()
{
	printf("****** Librarain Registration ******\n\n");
	printf("Please enter user name: ");
	
}


// This function is the interface for login.
void Login()
{
	printf("****** Login ******\n\n");
	printf("User name:");
	
}


// This function allows users to search books by name, year and Author's name.
void SearchBook()
{
	
	printf("****** Search books ******\n\n");
	printf("You can search books by title of the book, author's name or year\n");
	printf("1. Search by title: \n");
	printf("2. Search by Author: \n");
	printf("3. Search by year: \n");
	printf("4. Back to the Home page\n");
	printf("5. Exit\n");
	printf("Please enter your choice(1, 2, 3, 4 or 5): ");
	scanf("%s",&search_book);
	printf("\n\n");
	
	if(search_book=='1')
	{
		printf("Please enter title of the book: ");
	}
	if(search_book=='2')
	{
		printf("Please enter Author's name: ");
	}
	if(search_book=='3')
	{
		printf("Please enter year of book published: ");
	}
	if(search_book=='4')
	{
		first_interface();
		return;
	}
	if(search_book=='5')
	{
		printf("****** Exit successfully! ******\n");
		return;
	}
}


// This funtion allows users to see all books in the library.
void DisplayBook()
{
	printf("****** Display all books ******");
}

int main()
{
	first_interface();
	return 0;
}
