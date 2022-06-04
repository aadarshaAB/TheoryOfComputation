#include<stdio.h>
#include<string.h>
#define max 50
int main()
{
char paswd[max];
int i;
printf("Password must contain a-z A-Z 1-9 @,#,[,],{,},(,)");
printf("\nEnter password:");
gets(paswd);
int low_case_count=0;
int upper_case_count=0;
int numeric_case_count=0;
int special_case_count=0;
int d=strlen(paswd);
if(d>7){
for(i=0;i<d;i++)
{
if(paswd[i]>='a' && paswd[i]<='z')
++low_case_count;
if(paswd[i]>='A' && paswd[i]<='Z')
++upper_case_count;
if(paswd[i]>='0' && paswd[i]<='9')
++numeric_case_count;
if(paswd[i]=='@' || paswd[i]=='#'|| paswd[i]=='['|| paswd[i]==']'|| paswd[i]=='{'|| paswd[i]=='}' || paswd[i]=='('|| paswd[i]==')')
++special_case_count;
}
}
else
    printf("Password too short must be 8 character");
if(low_case_count>0 && upper_case_count>0 && numeric_case_count>0 && special_case_count>0)
    printf("\nPassword can be validated");
else
    printf("\nPassword must contain at least 1 uppercase,lowercase,numeric and special character");
return 0;
}


