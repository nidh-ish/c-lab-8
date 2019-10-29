/*Input:Two strings 
 * Output:print the second string or 0 acording to the condition
 * Remarks:If the second string is at the end of the first string:print second string
 *        :else-print 0*/
#include<stdio.h>
#include<stdlib.h>

/*function declared to measure the length of the strings*/
int stringlen(char *t)
{
	int count=0;
	while(*t!='\0')
	{
	   t++;	
           count++;
	}
	return count;
}

/*function declared to check if the second string exists at the end of first string*/
int strend(char *s,char *t)
{       /*length_string1:declared for measuring length of first string
	  length_string2:declared for measuring length of second string*/
        int length_string1=stringlen(s);
	int length_string2=stringlen(t);

	/*changing the position of the pointer to a suitable poistion to start comparing*/
        s=s+((length_string1-length_string2));
        
	/*while loop returns 1 if the string is at the end 
	 *else returns 0*/
	while(*s!='\0')
	{
		/*if an element does not match accordingly the while loop breaks and returns 0*/
		if (*s!=*t)
		{
			return 0;
			break;
		}

		/*else it continues comparing until the the string does not reach the end*/
		else
		{
			s++;
			t++;
			return 1;
	        }
		
	}

}

int main()
{
    /* string1:pointer declared for storing string1
     * string2:pointer declared for storing string2*/	
    char *string1=malloc(sizeof(char)*256);
    char *string2=malloc(sizeof(char)*256);

    /*scanning the strings*/
    scanf("%s %s",string1,string2);

    /*If strend returns 1-print the second string
     *Else strend returns 0-print 0*/
    int value=strend(string1,string2);
    if (value==1)
    {
	    printf("%s",string2);
    }
    else
    {
	    printf("0");
    }

    /*freeing the memory space allocated previously*/
    free(string1);
    free(string2);
  
    return 0;
}

