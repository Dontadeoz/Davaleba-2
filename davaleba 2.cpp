#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	
    double a, b;
    char o;
	string roman;
	int integer;
	int piece;
	
	printf("Enter operator\n");
    scanf("%c", &o);
    printf("Enter first operand\n");
    scanf("%lf", &a);
    printf("Enter second operand\n");
    scanf("%lf", &b); 
   
    
    if (o == '+'){
        integer = a + b;
        printf("The result is %d", integer); 
    } else if (o == '-'){
        integer = a - b;
        printf("The result is %d", integer); 
    } else if (o == '*'){
        integer = a*b;
        printf("The result is %d", integer); 
    } else if (o == '/'){
        if (b != 0){
        integer = a / b;
        printf("The result is %d", integer); 
        }
        else printf("Error");
    }
    
    if ((integer > 9999)  || (integer < 0)) {
		cout << endl << "incorrect integer" << endl;
	}
	else {
		
		if(integer >= 1000) {
			piece = (integer / 1000);
			
			for(int i = 0; i < piece; i++) {
				roman += 'M';
			}
			integer %= 1000;
		}
	    if(integer >= 100){
	    	piece = (integer / 100);
	    	
	    	if(piece == 9) {
	    		roman += "CM";
			}
			else if (piece >= 5){
				roman += 'D';
				
				for(int i = 0; i < piece - 5; i++){
					roman += 'C';
				}
			}
			else if(piece == 4) {
				roman += "CD";
			}
			else if(piece >= 1) {
				
				for (int i = 0; i < piece; i++) {
					roman += 'C';
				}
			}
			integer %= 100;
		}
	
  if (integer >= 10) {
  	    piece = (integer / 10);
  	    
   	    if(piece == 9) {
 	    	roman += "XC";
		}
		else if (piece >= 5) {
			roman += 'L';
			
			for (int i = 0; i < piece - 5; i++){
				roman += 'X';
			}
    	}
		else if (piece == 4) {
			roman += "XL";
		}
		else if (piece >= 1) {
			
			for (int i = 0; i < piece; i++) { 
			roman += 'X';
			}
		}
		integer %= 10;
   }
	
	if (integer >= 1) {
		piece = integer;
		
		if (piece == 9) {
			roman += "IX";
		}
		else if (piece >= 5) {
			roman += "V";
			
			for(int i = 0; i < piece - 5; i++) {
				roman += 'I';
			}
		}
		else if (piece ==4) {
			roman += "IV";
		}
		else if (piece >= 1){
			
			for (int i = 0; i < piece; i++){
				roman += 'I';
			}
		}
	}
	
	cout << "Roman Numeral: " << roman << endl;	
}
	
return 0;
}
