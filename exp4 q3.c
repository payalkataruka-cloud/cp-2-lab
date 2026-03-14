//enumeration to implement menu driven program
#include<stdio.h>
enum menudriven{
	FALSE,TRUE,EXIT
};
main()
{
	int choice;
	printf("MENU:\n");
	printf("FALSE: %d\n",FALSE);
	printf("TRUE: %d\n",TRUE);
	printf("EXIT: %d\n",EXIT);
	printf("enter your choice:");
	scanf("%d",&choice);
	if(choice==1)
	printf("Answer is correct");
	else if(choice==0)
	printf("Answer is incorrect");
	else
	printf("Answer not found");	
}
