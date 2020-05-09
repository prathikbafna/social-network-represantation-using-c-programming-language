#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>
#include"function.h"
#include<windows.h>

char names[20][15];
int MAXV;

struct node vertices[20]; //array of nodes



int main()
{   system("cls");
    printf("\t\t\t\t\t\tMini$Network\n");
    printf("\t\t\t\t\t\t____________\n\n\n\n");
	int choice;
	char term;
	/*
    char term;
    if(scanf("%d%c", &choice, &term) != 2 || term != '\n')
        printf("failure\n");
    */


	addFriendsTONetwork();
	displayNames();
	delay(2);
	for(int i=0;i<MAXV;i++)
        {
		vertices[i].label = i;
		vertices[i].name = names[i];
		vertices[i].next = NULL;
	}
	printf("\n \n");


    do
    {
        delay(0.5);
        system("cls");
printf("\n\n\t\t\t\t\t\tMini$Network\n\t\t\t\t\t\t____________\n\n\n\n 1.add friends\n 2.display friendship among people\n 3.Find mutual friends\n 4.Display people in the network\n 5.Append people to list\n press 6 to exit\n\n ");

     if(scanf("%d%c", &choice, &term) != 2 || term != '\n')
        printf("Enter a valid key\n");

     else
     {
         if(choice>=1 && choice<=6)
        {
		 switch(choice)
		{


		    case 1:
		    {
		        addFriendByName();

		    }
		    break;


		    case 2:
		    {
		        traverseGraph();
		    }
		    break;


		    case 3:
		    {
		       show_mutual_friends();
		    }
		    break;

		    // Find the given key.
		    case 4:
		    {
		        displayNames();
		    }
		    break;

		    case 5:
		    {
		        appendFriends();
		    }
		    break;



		    default:
		        break;
        	}
        }

     }


	printf("\n\n---------------------------------------------\n\n");

    fflush(stdin);
    delay(2);
    system("cls");
    }
    while(choice != 6);

	return 0;
}



