#include<stdio.h>

main()
{
	// Nested if...Else	4 numbers of min :- 
	
	int a ,b ,c ,d;
 
	printf("enter the value of a : ");
	scanf("%d", &a);
	
	printf("enter the value of b : ");
	scanf("%d", &b);
	
	printf("enter the value of c : ");
	scanf("%d", &c);
	
	printf("enter the value of d : ");
	scanf("%d", &d);

	 // Nested if...Else value :-
	  
	if(a < b){
		
		if(a < c){
			
			if(a < d){
				
				printf("a is min");
			}
			
			else{
				printf("d is min");
			}
		}
		
		else{
			
			if(c < d){
				
				printf("c is min");
			}
			
			else{
				printf("d is min");
			}
		}
	}
	else{
		
		if(b < c){
			
			if(b < d){
				
				printf("b is min");
			}
			
			else{
				
				printf("d is min");
			}
		}
		else{
			
			if(c < d){
				
				printf("c is min");
			}
			
			
			else{
				printf("d is min");
			}
		}
	}

}
