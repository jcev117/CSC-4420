#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{

FILE *input;
FILE *output;
char content[250];
int position=0;
int value1=0;
int value2=0;
int start=0;

//opens input file
input=fopen("HW4P43.txt","r");

if(input==NULL)
{
    printf("Error: File does not exist");
}

//opens outputfile
output=fopen("HW4P43Output.txt","w");

while(start==0)
{
for(value1=0;value1<250;value1++)
{
    //gets current character in position of stream while it is not the end of the file
    if((position=fgetc(input))!=EOF)
    {
        content[value1]=position;
        value2=value1;

    }
    //set position to 1
    else
    {
        start=1;
    }
    
}
}

//reverse file based on input and writes to output file
for(value1=value2;value1>=0;value1--)
{
fputc(content[value1],output);
}

    return 0;
}

