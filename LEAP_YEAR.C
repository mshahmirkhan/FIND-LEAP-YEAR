#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

main()
{
	int year=0 ;
    printf("\n\n\t\t\t\t\tLEAP YEAR");
    printf("\n\n\n\t\tENTER YEAR  : %d",year);
    scanf("%d",&year);
    
    
// main program 



     if(year<=1751)
     {
     	printf("\n\n\n\t\t%d is ************** NOT A LEAP YEAR **************",year);
	 }
	 
	 
	 
	 
	 else if(year==1752)
	 {
	 	printf("\n\n\n\t\tThe first leap year in the modern sense in Britain was 1752,\n\t\t when 11 days were 'lost' from the month September with the adoption \n\t\t of the Gregorian calendar by Britain and her colonies.");
	 }
	 
	 
	 
	 
	 else if(year%100==0)
	 {
	 	if(year%400==0)
	 	printf("\n\n\t\t************** LEAP YEAR **************");
	 	
	 	else
	 	printf(" \n\n\t\t************** NOT A LEAP YEAR **************");
	 }
	 
	 
	 
	 
	 else if(year%4==0)
	 {
	 	printf("\n\n\t\t  ************** LEAP YEAR **************");
	 }
	 
	 else
	 {
	 	printf("\n\n\t\t************** NOT LEAP YEAR **************");
	 }
	 
	 
	 

	getch();
}


