#include<stdio.h>

main()
{
	// Nested if...Else	6 numbers of min :-
	int a ,b ,c ,d ,e ,f;

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
	
	printf("enter the value of f : ");
	scanf("%d", &f);

	 // Nested if...Else value :- 
	 
	if(a < b){
		
		if(a < c){
			
			if(a < d){
				
				if(a < e){
					
					if(a < f){
						printf("a is min");
					}
					else{
						printf("f is min");
					}
				}
				
				else{
					
					if(e < f){
						printf("e is min");
					}
					else{
						printf("f is min");
					}
				}
			}
			
			else{
				
				if(d < e){
					
					if(d < f){
						printf("d is min");
					}
					else{
						printf("f is min");
					}
				}
				
				else{
					
					if(e < f){
						printf("e is min");
					}
					else{
						printf("f is min");
					}
				}
			}
		}
		
		else{
			
			if(c < d){
				
				if(c < e){
					
					if(c < f){
						printf("c is min");
					}
					else{
						printf("f is min");
					}
				}
				
				else{
					
					if(e < f){
						printf("e is min");
					}
					else{
						printf("f is min");
					}
				}
				
			}
			else{
				
				if(d < e){
					
					if(d < f){
						printf("d is min");
					}
					else{
						printf("f is min");
					}
				}
				
				else{
					
					if(e < f){
						printf("e is min");
					}
					else{
						printf("f is min");
					}
				}
			}
		}
	}
	else{
		
		if(b < c){
			
			if(b < d){
				
				if(b < e){
					
					if(b < f){
						printf("b is min");
					}
					else{
						printf("f is min");
					}
				}
				
				else{
					
					if(e < f){
						printf("e is min");
					}
					else{
						printf("f is min");
					}
				}
			}
			
			else{
				
				if(d < e){
					
					if(d < f){
						printf("d is min");
					}
					else{
						printf("f is min");
					}
				}
				
				else{
					
					if(e < f){
						printf("e is min");
					}
					else{
						printf("f is min");
					}
				}
			}
		}
		
		else{
			
			if(c < d){
				
				if(c < e){
					
					if(c < f){
						printf("c is min");
					}
					else{
						printf("f is min");
					}
				}
				
				else{
					
					if(e < f){
						printf("e is min");
					}
					else{
						printf("f is min");
					}
				}
			}
			
			else{
				
				if(d < e){
					
					if(d < f){
						printf("d is min");
					}
					else{
						printf("f is min");
					}
				}
				
				else{
					
					if(e < f){
						printf("e is min");
					}
					else{
						printf("f is min");
					}
				}
			}
		}
	}
}
