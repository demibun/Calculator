#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int mult_ten(int n)
{
	int i, result=1;
	for (i = 0; i < n-1; i++)
	{
		result *= 10;
	}
	return result;
}
int power(int a, int b)
{
	int i, result = 1;
	for (i = 0; i < b; i++)
	{
		result = a * result;
	}
	return result;
}
void put_int(int count[], char getf[], int lenf, int num[])
{
	int i, j, sum = 0;
	for (j = 0; j < lenf; j++)
	{
		for (i = 0; i < count[j]; i++)
		{
			sum = sum + ((getf[i] - 48) * mult_ten(count[j]) / power(10, i));
			num[j] = sum;
		

		}
		sum = 0;
	}

	
}
int main(void)
{
	char geti[100] /* 공백 포함 입력 */, getf[100] = { 0 }; /* 공백 제거 */
	int num[100] = { 0 }, i, j=0, num_len = 0, len = 0, lenf = 0, 
		count[100] = { 0 } /* 자릿수 */, index = 0, oper[10] = { 0 }, sum=0, oper_index=0;

	scanf(" %[^\n]", geti); // 12*34

	len = strlen(geti); 

	for (i = 0; i < len; i++)
	{
		if(geti[i] != ' ') 
		{
			getf[j] = geti[i];
			j++; 
		}
		
	}
	lenf = strlen(getf);
	printf("%s", getf);
	
	for (i = 0; i < lenf; i++) // 모든 숫자와 연산자 확인
	{
	   if ((getf[i] == '+') || (getf[i] == '-') || (getf[i] == '*') || (getf[i] == '/') || getf[i+1] == '\0')
		{
		   count[index] = num_len;
		   index++;
		   num_len = 0;
		   count[i + 1] = count[i] * 10;
		   oper[oper_index] = getf[i];
		   oper_index++;
		}
	   else
	   { 
		   num_len++; 
	   }
	}
	count[index-1]++; 

	for (i = 0; i < lenf; i++)
	{
		printf("\ncount[%d] = %d\n", i, count[i]);
	}
	
	put_int(count, getf, lenf, num);
	for (i = 0; i < lenf; i++)
	{
		for (j = 0; j < i; j++)
		{
			if ((getf[i] == '+') || (getf[i] == '-') || (getf[i] == '*') || (getf[i] == '/'))
			{
				
			}
		}
	}
	
	
	for (i = 0; i < 2; i++)
	{
		printf("num%d: %d ", i, num[i]);
	}
	printf("\n");
	for (i = 0; i < 4; i++)
	{
		printf("oper: %c", oper[i]);
	}




	

		
	
}