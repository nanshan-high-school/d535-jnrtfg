#include <iostream>
/*#include <stdio.h>
#include <string>
#include <cstdio>*/
//記住 非int 因此要用字串char來想 字母有不同意思 


int main(int argc, char** argv) 
{
	start:
	int withnum=0,dou=0;
	char enter[9999];
	for(int i=0;i<=9999;i++)//洗乾淨 
	{
		enter[i]=0;
	}
	scanf("%s",enter);//記錄
	//printf("%s",enter);//返回字串 
	for(int i=0;i<=9999;i++)//記錄總字數 
	{
		if(enter[i]>0)
		{
			withnum++;
		}
		else
		{
			break;
		}
		if(enter[30]>0)
		{
			printf("INCORRECT\n");
			goto end;
		}
		else
		{
			if(enter[9]==0)
			{
				printf("INCORRECT\n");
				goto end;
			}
		}
	}
	for(int i=0;i<=withnum-1;i++)
	{
		if(enter[i]%2==0)
		{
			dou=1;
		}
	}
	if(dou==0)
	{
		printf("0\n");
		goto end;
	}
	for(int j=0;j<=withnum-1;j++)
	{
		if(enter[j+1]-48>enter[j]*2-48*2)
		{
			//printf("\nNo.%d:%d",j+1,enter[j]-48);
			//printf("\nNo.%d:%d是No.%d:%d的兩倍",j+1,2*enter[j]-48*2,j+1,enter[j]-48);
			//printf("\nNo.%d:%d",j+2,enter[j+1]-48);
			printf("INCORRECT\n");
			goto end;
			break;
		}
	}
	for(int i=0;i<=withnum;i++)
	{
		for(int j=0;j<=withnum-1;j++)//if ex:121 enter[0]==enter[withnum]=>enter[0+1]==enter[withnum-1]
		{
			if(enter[0+j]==enter[withnum-j-1])
			{
				break;
			}
			else
			{
				printf("INCORRECT\n");
				//printf(" No,%d:%d   No,%d:%d",1+j,enter[0+j]-48,withnum-j,enter[withnum-j-1]-48);
				goto end;
			}
		}
	}
	for(int i=0;i<=withnum-1;i++)
	{
		if(enter[i]%2==0)
		{
			printf("%d",enter[i]-48);
		}
	}
	printf("\n");
	end:
	goto start;
}