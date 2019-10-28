/* INPUT  :TWO STRINGS
   OUTPUT :IF THE 1ST STRING HAS SAME END AS 2ND DOES PRINTS THE COMMON END PART AND PRINTS 0 IF DIFFERENT
*/

#include<stdio.h>
#include<stdlib.h>

int strend(char *s,char *t)  //declaring a function
{
int l=0,m=0;
for(int i=0;s[i]!='\0';i++) //using for loop for finding the count of string s length
{
l++;
}

for(int j=0; t[j]!='\0';j++)  //using the for loop fir finding the string t length
{
 m++;
}

int counter=l-m;  //taking the index from where to compare

for(int k=0;s[k]!='\0';k++) //using a for loop
{

if(s[counter]!=t[k]) //comparing the ends of the strings

   {  return 0;
       break;}
 
else
  {
    return 1;
    break;
  }

counter++;

}


}

int main()
{
int result;
char *s=(char*)malloc(257*sizeof(char));  //dynamically allocating memory for string s
char *t=(char*)malloc(257*sizeof(char));  //dynamically allocating memory for string t

scanf("%s %s",s,t);

result=strend(s,t); //storing in result

if(result==1)
 printf("%s",t); // printing the string if result is 1

else
 printf("0");  //printing 0

}
