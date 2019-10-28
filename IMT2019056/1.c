/* INPUT :TWO INTEGERS ONE IS N AND OTHER IS BASE
   OUTPUT:CONVERT THE GIVEN NUMBER INTO THAT PARTICULAR BASE
*/

#include<stdio.h>
#include<stdlib.h>

char itob(int n,char *s,int b) //defining the function itob
{

int j=0,k,p=10; //declaring the variables required
char alph[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w'}; //taking an array of alphabets
int r[1024]; //declaring an int array

for(int i=0;n>=b;i++)
{
  r[i]=n%b; //storing all the remainders
  n= (n-r[i])/b; //converting the n to new n
  j++; //counting the no of remainders
}
 r[j]=n; //taking the left number as remainder

for(int i=0;i<j+1;i++) //using for loop
{
 
 if(r[i]<=9)
 {
   s[i]=r[i]+'0'; //storing in s if remainders are less than or equal to 9
 }


if (r[i]>9)
{
 for(p=10;p<=32;p++)
  { 
      if(r[i]==p)
       k=p-10;
  }
  s[i]=alph[k]; //storing the corresponding alphabet in s if remainder is greater then 10 
  	
}

} 



for(int l=j;l>-1;l--)
  printf("%c",s[l]);  //printing the s



}



int main()
{
int n,b;
char *s=(char*)malloc(256*sizeof(char)); //dynamically allocating the char s
scanf("%d %d",&n,&b); //taking the n and b as input

itob(n,s,b); //calling the itob function

}
