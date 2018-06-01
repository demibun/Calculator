# Calculator
팀원: 옥상윤, 김형기, 왕승재

작동방식: 
1. char형 배열인 geti에 string 형식으로 식을 입력받는다.

2. operator을 기준으로 양 옆의 숫자 개수를 int형 count 배열에 저장한다.

3. count배열의 원소 개수에 따라서 10의 제곱수를 만들어 char형 배열에 저장된 숫자를 원래 입력한 숫자로 만들어 int형 배열인 num에 저장한다.
  ex) 123 = 1 * 100 + 2 * 10 + 3 * 1
  
4. oper 배열 안에서 *와 /를 먼저 찾고 계산하고, +와 -를 나중에 찾아 계산하고 result에 값을 담아 출력한다.

------------------------------------------------------------------------------------------------------------------------------------

How it works:
1. Get equation in char type array "geti".

2. Get the number of digits on both side of operator.

3. Based on the number of elements in the count array, a number of 10 squares is created to make the number stored in the char array into the number originally entered and stored in the num, the int array.
  ex) 123 = 1 * 100 + 2 * 10 + 3 * 1

4. Find and calculate the * and / in the oper array first, and calculate the + and - later, and print the values in the result.
