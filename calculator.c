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
void put_int(int count[], char getf[], int lenf, int num[],int numnum)
{
	int i, j, sum = 0, count_rep =0;
	for (j = 0; j < lenf; j++)
	{
		for (i = 0; i < count[j]; i++)
		{
			sum = sum + ((getf[i] - 48) * mult_ten(count[j]) / power(10, i));
			num[j] = sum;
		

		}
		sum = 0;
		for (i = 0; i < lenf - count[j] - 1; i++)
		{
			getf[i] = getf[i + count[j] + 1];
			
		}
		count_rep++;
		if (count_rep == numnum)
			break;

	}

	
}
int main(void)
{
	char geti[100] /* 공백 포함 입력 */, getf[100] = { 0 }; /* 공백 제거 */
	int num[100] = { 0 }, i, j=0, num_len = 0, len = 0, lenf = 0, 
		count[100] = { 0 } /* 자릿수 */, index = 0, oper[10] = { 0 }, sum=0, oper_index=0, result=0, numIdx;
	
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

	put_int(count, getf, lenf, num,oper_index+1);
	numIdx = oper_index + 1;
	for (i = 0; i < oper_index; i++)

	{

		if (oper[i] == '*')

		{

			num[i] = num[i] * num[i + 1];

			for (j = i + 1; j < numIdx; j++)

				num[j] = num[j + 1];

			numIdx -= 1;

			for (j = i; j < oper_index; j++)

				oper[j] = oper[j + 1];

			oper_index -= 1;

			i -= 1;

		}

		else if (oper[i] == '/')

		{

			num[i] = num[i] / num[i + 1];

			for (j = i + 1; j < numIdx; j++)

				num[j] = num[j + 1];

			numIdx -= 1;

			for (j = i; j <oper_index; j++)

				oper[j] = oper[j + 1];

			oper_index -= 1;

			i -= 1;

		}

	}

	result = num[0];

	for (i = 0; i < oper_index; i++)

	{

		if (oper[i] == '+')

			result += num[i + 1];

		else if (oper[i] == '-')

			result -= num[i + 1];

	}
	printf("%d\n", result);



	

		
	
}