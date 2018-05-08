#include <iostream>
#include <stdio.h>
//記住 非int 因此要用字串char來想 字母有不同意思 


int main(int argc, char** argv) 
{
	int withnum=0,ans[9999],now=0;
	char enter[9999];
	for(int i=0;i<=9999;i++)//洗乾淨 
	{
		enter[i]=0;
	}
	gets(enter);//記錄
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
		if(enter[31]>0)
		{
			printf("INCORRECT");
			goto end;
		}
		else
		{
			if(enter[10]==0)
			{
				printf("INCORRECT");
				goto end;
			}
		}
	}
	for(int j=0;j<=withnum-1;j++)
	{
		if(enter[j+1]-48>enter[j]*2-48*2)
		{
			//printf("\nNo.%d:%d",j+1,enter[j]-48);
			//printf("\nNo.%d:%d是No.%d:%d的兩倍",j+1,2*enter[j]-48*2,j+1,enter[j]-48);
			//printf("\nNo.%d:%d",j+2,enter[j+1]-48);
			printf("INCORRECT");
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
				printf("INCORRECT");
				//printf(" No,%d:%d   No,%d:%d",1+j,enter[0+j]-48,withnum-j,enter[withnum-j-1]-48);
				goto end;
			}
		}
	}
	for(int i=0;i<=withnum-1;i++)
	{
		if(enter[i]%2==1)
		{
			break;
		}
		else
		{
			ans[now]=enter[i];
			now++;
		}
	}
	for(int i=1;i<=now;i++)
	{
		printf("a");
		printf("%d",ans[i]);
	}
	end:
	return 0;
}