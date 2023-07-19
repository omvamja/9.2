/*
 * Q [2]
 *
 */

#include<stdio.h>

void main(){
	
	char oldemail [50];
	char oldpassword[12];
	
	int i,l;
	
	printf("\nenter your email ");
	gets(oldemail);
	
	printf("\nenter your password ");
	gets(oldpassword);
	

	if(strcmp(oldemail,"admin@gmail.com")==0){
		if(strcmp(oldpassword,"123456")==0){
			printf("\nWelcome Login successful");
		}
		else{
		printf("\nwrong password");
		}
		
		
	}else{
		printf("\nplease try again");
	}
}
