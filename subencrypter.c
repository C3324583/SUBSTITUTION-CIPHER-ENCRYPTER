#include <stdio.h>
#include <stdlib.h>


int main(){
    //initialising variables
	char text[1000], substitution[100], element;
	int n, i, rotationkey;
	
	printf("Enter message: ");//prompt the user to imput a message
	scanf(" %[^\n]s", text);//store the text imputted by the user in the array "text"
	printf("Enter an alphabet substitution by typing 26 consecutive letters, where the first will replace A, the second will replace B and so on");//prompt the user to imput an alphabet substitution
	scanf(" %[^\n]s", substitution);//store the rotation value in the variable "rotationkey"
    
    for(i=0, i<26, i++){
        
    }
    return 0;
}