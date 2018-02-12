#include<stdio.h>

int time = 0; /* Total time in minutes */
int minutes = 0; 
int hours = 0;

int main()
{



minutes = time % 60; /* Divide by 60 minutes and and take
hours = (time - minutes) / 60; 

printf("Total minutes %d = %d hours and %d minutes\n", time, 
hours, minutes); 

return(0);
}
