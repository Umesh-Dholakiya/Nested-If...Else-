#include<stdio.h>

main()

{
	//  Nested if...Else 3 numbers of max :-
	
	int a ,b ,c;

	printf("enter the value of a : ");
	scanf("%d", &a);
	
	printf("enter the value of b : ");
	scanf("%d", &b);
	
	printf("enter the value of c : ");
	scanf("%d", &c);
	
	 // Nested if...Else value :-
	  
	if(a > b){
		
		if(a > c){		
			printf("a is max");
		}
		else{
			printf("c is max");
		}
		
	}
	else{
		if(b > c){
			printf("b is max");
		}
		else{
			printf("c is max");
		}
	}

}
