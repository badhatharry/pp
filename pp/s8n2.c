#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

// PALINDROME-NESS OF STRINGS
						  // important: i < strlen(str) same as str[i].
#define L 101

void remove_spaces(char str[]){	                  // analogous to script (one { was set wrongly).

  int i1, i2;
	for (i1=0; str[i1]; i1++){
	
	  if (str[i1] == ' '){
	    for (i2=i1; str[i2]; i2++){
	      str[i2] = str[i2+1];}
	      i1--;
	    }
	  } 
}

void lowercase(char str[]){                       // hammer down those upper case letters!

  for (int i=0; str[i]; i++){
	str[i]=tolower(str[i]);
  }
}

void palindrome(char str[]){
  
  int ok;
  printf("String: %s\n",str);
  int sl = strlen(str)-1;   
	  
  for (int p1=0, p2=sl-1; p1 < p2; p1++, p2--){   // at once, program looks at first and last, +1 -1, +2 -2, etc.
		
		if (str[p1] == str[p2]){          // if string there is equal, that's cool.
			ok=1;
		}
		else {				  // if string there isn't equal... that's pretty crap.
			printf("Not a palindrome.\n"); 	
			ok=0; 
			break;	
		}
  }

 if (ok==1){ printf("Woo it's a palindrome!\n"); }

}

int main(){

  char string[L]; 
  printf("Enter a line of characters, max. 100: \n");
  fgets(string, L, stdin); 		          // enter some stuff (characters only).
  printf("\n");

  remove_spaces(string);  		          // call those cool functions up there.
  printf("String without spaces: %s\n", string);
  lowercase(string);
  printf("String all lowercase: %s\n", string);
  palindrome(string);

}

