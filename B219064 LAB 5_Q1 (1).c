#include <stdio.h> 
/* Prototype Declarations */
void get_data(int *year, int *month, int *day); 
int calc_day(int year, int month, int day); 
void print_results(int total); 


int main() 
{ 
/* Local Definitons */
int year;
int month;
int day; 
int total; 

get_data(&year, &month, &day); 
total = calc_day(year, month, day); 
print_results(total); 

return 0; 
} 

void get_data(int *year, int *month, int *day) 
{ 

printf("\nEnter the Month of the Person's Birthdate:\n");
scanf("%d", &month);
printf("\nEnter the Day of the Person's Birthdate:\n");
scanf("%d", &day);
printf("\nEnter the Year of the Person's Birthdate:\n");
scanf("%d", &year); 
printf("\nHere is the date entered: %d/%d/%d\n", month, day, year); 
return; 
} 

int calc_day(int year, int month, int day) 
{ 
/* Local Definitons */
int dayofdec31;
int total; 
/* Calculate Day of December 31 */
dayofdec31 = ((((year - 1)*365) + ((year - 1)/100) + ((year - 1)/400)) % 7); 

total = 0; 
switch (month) 
{ 
case 12 : total = total + 30; 
case 11 : total = total + 31; 
case 10 : total = total + 30; 
case 9 : total = total + 31; 
case 8 : total = total + 30; 
case 7 : total = total + 31; 
case 6 : total = total + 30; 
case 5 : total = total + 31; 
case 4 : total = total + 30; 
case 3 : total = total + 31; 
case 2 : total = total + 28; 
case 1 : total = total + 0; 


} 
/* Calculate Leap year */
if ((!(year % 4) && (year % 100) ) || !(year % 400))
{ 
if (month > 2) 
{ 
total = (total + day + 1); 
} 
} 
else 
{ 
total = (total + day); 
} 

return ((total + dayofdec31)%7); 
} 


void print_results(int total) 
{ 
/* Local Definitons */
int days; 

switch(days) 
{ 
case 0 : printf("Sunday\n"); 
break; 
case 1 : printf("Monday\n"); 
break; 
case 2 : printf("Tuesday\n"); 
break; 
case 3 : printf("Wednesday\n"); 
break; 
case 4 : printf("Thursday\n"); 
break; 
case 5 : printf("Friday\n"); 
break; 
case 6 : printf("Saturday\n"); 
break; 
} 
printf("\nThe Person's Birthday Is On: %d\n", days); 

getch();
return; 

} 
