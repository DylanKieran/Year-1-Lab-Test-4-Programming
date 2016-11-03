/* 
Dylan Kieran
C15321906
19/04/2016
Programming Test

Program that allow user to input drivers details in a function
and then in another function displays the data inputted back to the user
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAMESIZE 21

//Struct Template
struct dob 
{
	int day;
	int month;
	int year;
};

struct st_driver
{
	char firstname[NAMESIZE];
	char lastname[NAMESIZE];
	struct dob dateofbirth;
	int height;
	char eyes[NAMESIZE];
	int weight;
};

//Function prototype
void enter_details(struct st_driver *,struct st_driver *);
void display(struct st_driver,struct st_driver);

main()
{
	//Declare Variables
	struct st_driver driver1, driver2;
	struct st_driver *ptr1, *ptr2;
	ptr1 = &driver1;
	ptr2 = &driver2;
	
	//Call Function
	enter_details(ptr1,ptr2);
	display(driver1,driver2);
	
}//end main


//Implement Function
//
//enter_details()
void enter_details(struct st_driver *p1,struct st_driver *p2)
{
	
	//Enter details for passenger 1
	printf("Please enter the details of driver 1\n");
	printf("Firstname: ");
	scanf("%20s", p1->firstname);
	printf("Lastname: ");
	scanf("%20s", p1->lastname);
	printf("Date of Birth in Day Month Year format:\n");
	scanf("%d",&p1->dateofbirth.day);
	scanf("%d",&p1->dateofbirth.month);
	scanf("%d",&p1->dateofbirth.year);
	printf("Height in cm: ");
	scanf("%d",&p1->height);
	printf("Eye colour: ");
	scanf("%20s",p1->eyes);
	printf("Weight in kg: ");
	scanf("%d",&p1->weight);

	//Enter Details for passenger 2
	printf("\nPlease enter the details of driver 2\n");
	printf("Firstname: ");
	scanf("%20s", p2->firstname);
	printf("Lastname: ");
	scanf("%20s", p2->lastname);
	printf("Date of Birth in Day Month Year format:\n");
	scanf("%d",&p2->dateofbirth.day);
	scanf("%d",&p2->dateofbirth.month);
	scanf("%d",&p2->dateofbirth.year);
	printf("Height in cm: ");
	scanf("%d",&p2->height);
	printf("Eye colour: ");
	scanf("%20s",p2->eyes);
	printf("Weight in kg: ");
	scanf("%d",&p2->weight);
	
}//end enter_details()

//display()
void display(struct st_driver drive1,struct st_driver drive2)
{
	//Display first drivers details
	printf("\nDriver 1's details are listed below \n");
	printf("Firstname: \t%s \n",drive1.firstname);
	printf("Lastname: \t%s \n",drive1.lastname);
	printf("Date of Birth: \t%d/%d/%d \n",drive1.dateofbirth.day,drive1.dateofbirth.month,drive1.dateofbirth.year);
	printf("Height: \t%d \n",drive1.height);
	printf("Eye Colour: \t%s \n",drive1.eyes);
	printf("Weight: \t%d \n",drive1.weight);
	
	//Display second drivers details
	printf("\nDriver 2's details are listed below \n");
	printf("Firstname: \t%s \n",drive2.firstname);
	printf("Lastname: \t%s \n",drive2.lastname);
	printf("Date of Birth: \t%d/%d/%d \n",drive2.dateofbirth.day,drive2.dateofbirth.month,drive2.dateofbirth.year);
	printf("Height: \t%d \n",drive2.height);
	printf("Eye Colour: \t%s \n",drive2.eyes);
	printf("Weight: \t%d \n",drive2.weight);
	
}//end display()
