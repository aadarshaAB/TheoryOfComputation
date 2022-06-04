#include<stdio.h>
#include<string.h>
	void isidentifier(char s[],int count){
		int num_flag=0,special_flag=0;
		int str_len=strlen(s);
		if (s[0] == '0' || s[0] == '1' || s[0] == '2' ||
        s[0] == '3' || s[0] == '4' || s[0] == '5' ||
        s[0] == '6' || s[0] == '7' || s[0] == '8' ||
        s[0] == '9')
        {
			++num_flag;
		}
		for(int i=0;i<str_len;i++){
		if( s[i] == ' ' || s[i] == '+' || s[i]== '-' || s[i] == '*' ||
        s[i] == '/' || s[i]== ',' || s[i] == ';' || s[i] == '>' ||
        s[i] == '<' || s[i] == '=' || s[i] == '(' || s[i] == ')' ||
        s[i]== '[' || s[i] == ']' || s[i] == '{' || s[i] == '}'||s[i]=='@')
        {
        	++special_flag;
        }
    }
		if(special_flag!=0 || count==1)
			printf("\n%s is invalid identifier",s);
		else
			printf("\n%s is valid identifier",s);
	}
	int iskeyword(char s[])
{
	int count=0;
    if 
	
	(!strcmp(s, "if") || !strcmp(s, "else") ||
        !strcmp(s, "while") || !strcmp(s, "do") ||
        !strcmp(s, "break") ||
         !strcmp(s, "continue") || !strcmp(s, "int") ||!strcmp(s,"include")
        || !strcmp(s, "double") || !strcmp(s, "float")
        || !strcmp(s, "return") || !strcmp(s, "char")
        || !strcmp(s, "case") || !strcmp(s, "char")
        || !strcmp(s, "sizeof") || !strcmp(s, "long")
        || !strcmp(s, "short") || !strcmp(s, "typedef")
        || !strcmp(s, "switch") || !strcmp(s, "unsigned")
        || !strcmp(s, "void") || !strcmp(s, "static")
        || !strcmp(s, "struct") || !strcmp(s, "goto")||!strcmp(s, "enum")||!strcmp(s, "union"))
        {
        printf("\n%s Is valid keyword",s);
        count++;
        return(count);
    }
   	else 
   		printf("\n%s Invalid keyword",s);
}
	
int main(){
	
	char str2[50];
 	printf("\n Enter the keyword to check :");
	gets(str2);
	int count=0;
	count=iskeyword(str2);
	isidentifier(str2,count);


       
    
}
