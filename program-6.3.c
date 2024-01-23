#include<stdio.h>

main()
{
	// Nested if...Else	5 numbers of min :- 
	
	int a ,b ,c ,d ,e;

	printf("enter the value of a : ");
	scanf("%d", &a);
	
	printf("enter the value of b : ");
	scanf("%d", &b);
	
	printf("enter the value of c : ");
	scanf("%d", &c);
	
	printf("enter the value of d : ");
	scanf("%d", &d);
	
	printf("enter the value of e : ");
	scanf("%d", &e);
	
	 // Nested if...Else value :- 
	 
	if(a < b){
		
		if(a < c){
			
			if(a < d){
				
				if(a < e){
					printf("a is min");
				}
				else{
					printf("e is min");
				}
			}
			
			else{
				
				if(d < e){
					printf("d is min");
				}
				else{
					printf("e is min");
				}
			}
		}
		
		else{
			
			if(c < d){
				
				if(c < e){
					printf("c is min");
				}
				else{
					printf("e is min");
				}
			}
			else{
				
				if(d < e){
					printf("d is min");
				}
				else{
					printf("e is min");
				}
			}
		}
	 }
	 
 	else{
 		
		if(b < c){
			
			if(b < d){
				
				if(b < e){
					printf("b is min");
				}
				else{
					printf("e is min");
				}
			}
			
			else{
				
				if(d < e){
					printf("d is min");
				}
				else{
					printf("e is min");
				}
			}
		 }
	 	else{
	 		
			if(c < d){
				
				if(c < e){
					printf("c is min");
				}
				else{
					printf("e is min");
				}
			}
			else{
				
				if(d < e){
					printf("d is min");
				}
				else{
					printf("e is min");
				}
			}
		}
	}
}
