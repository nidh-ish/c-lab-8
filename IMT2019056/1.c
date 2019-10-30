/*Input:An integer and a base
  Output:String in base b
  Remarks:Conversion of decimals into any base b*/
#include <stdio.h> 
#include <string.h> 
#include<stdlib.h>
  
/*Returning ascii character based on the remainder*/
char ascii(int number) 
{ 
    /*If remainder is less than 10 then we have to add same number to the string*/
    if (number >= 0 && number <10) 
    {
        return (number + 48);
    }
    /*If remainder is greater than 10 then we have to add a character correspondigly
     *if remainder =10 add 'a'
     *if remainder =11 add 'b' and so on*/
    else
    {
        return (number +87);
    }
} 
  
/*conversion of decimal number to any base n*/
char itob( int n,char *s, int b) 
{ 
    /*index:declared for increasing the pointer address of the pointer*/
    int index =0 ;   

    /*storing the corresponding elements into the string accordingly*/
    while (n> 0) 
    {    
        s[index++] =ascii(n%b);	
        n=n/b; 
    } 

    /*len_string:stores the information of length of string*/
    int len_string = strlen(s); 

    /*reversing the string*/
    char temp;
    for (int i = 0; i < len_string/2; i++) 
    { 
        temp = s[i]; 
        s[i] = s[len_string-i-1]; 
        s[len_string-i-1] = temp; 
    } 

    /*printing the string */
    printf("%s",s); 
} 
  

int main() 
{
    /*n:stores the integer 
     *b:stores the base */ 
    int n,b;

    /*scanning the information of integer and base*/
    scanf("%d %d",&n,&b);
    char *pointer=malloc(sizeof(char)*256);

    /*calling the function*/
    itob(n,pointer,b);
    return 0;
} 
