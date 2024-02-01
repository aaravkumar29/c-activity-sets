#include <stdio.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
 {
    char string1[100],string2[100];
    int n,result;
    input_two_strings(string1,string2);
    result=stringcompare(string1,string2);
    output(string1,string2,result);
    return 0;

 }
 void input_two_strings(char *string1, char *string2)
 {
    printf("enter first str: ");
    scanf("%s",string1);
    printf("enter second str: ");
    scanf("%s",string2);
 }
 int stringcompare(char *string1, char *string2)
 {
    int i;
    for(i=0;string1[i]==string2[i] && string1[i] != '\0';i++);
    return string1[i]-string2[i];
 }
 void output(char *string1, char *string2, int result)
 {
    if(result>0)
    {
        printf("%s is greater than % s",string1,string2);

    }
    if(result<0)
    {
        printf("%s is greater than % s",string2,string1);

    }
    else
    {
        printf("strings are equal");
    }
 }