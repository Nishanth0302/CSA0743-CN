#include<stdio.h>
#include<string.h>
void bitstuffing(char *input, char *output){
	int count=0,j=0;
	for(int i=0;i<strlen(input);i++){
		output[j++]=input[i];
		if(input[i]=='1'){
			count++;
		}
		else{
			count=0;
		}
		if(count==5){
			output[j++]='0';
			count=0;
		}
	}
	output[j]='\0';
}
int main(){
	char input[100], output[100];
	scanf("%s",input);
	bitstuffing(input, output);
	printf("Bit Stuffed output: %s\n",output);
	return 0;
}
