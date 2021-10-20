#include<stdio.h>
int  main(){
	float target = 2.0f;
	float  left = 0.0f;
	float  right = target;
	float mid = (left +right)/2;
	while (target-mid>0.01){
	
 	  if (mid*mid<target){
	    left = mid;
		right = right;
		mid = (left +right)/2;	
	    }	
	  else{
	  	left = left;
	  	right = mid;
	  	mid = (left + right)/2	;
	    }
	printf("%.6f",mid);						
}

	
	
	return 0;
}
	
	
	

