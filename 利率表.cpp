#include <stdio.h>
#define NUM_RATES (  (int)( sizeof(value)/sizeof(value[0]) )  )
int main()
{
	int low_rate,num_years,year,i;
	double value[5];
	printf("«Î ‰»Îlow_rate:");
	scanf("%d",&low_rate) ;
	printf("«Î ‰»Îyears:");
	scanf("%d",&num_years) ;
	
	printf("\n YEARS");
	for(i=0;i<NUM_RATES;i++){
	
	  
	  	printf("%6d%%",low_rate+i);
	  	value[i]=100.00;
	  }
	   printf("\n");
	   
	for(year=1;year<=num_years;year++)
	   {
	   
	    
	    	printf("%3d   ",year);
	    	for(i=0;i<NUM_RATES;i++)
			 {
			 	
			   value[i]+=(low_rate+i)/100.0*value[i];
			   printf("%7.2f",value[i]);
			   
	     	}	
	    	printf("\n");
			}
			return 0;
}



	

