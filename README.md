# Calculator
팀원: 옥상윤, 김형기, 왕승재

작동방식: 
1. char형 배열인 geti에 string 형식으로 값을 입력받는다.

2. operator을 기준으로 양 옆의 숫자 개수를 int형 count 배열에 저장한다

3. count배열의 원소 개수에 따라서 10의 제곱수를 만들어 char형 배열에 저장된 숫자를 원래 입력한 숫자로 만들어 int형 배열인 num에 저장한다.
  ex) 123 = 1 * 100 + 2 * 10 + 3 * 1
  
4. oper 배열 안에서 *와 /를 먼저 찾고 계산하고, +와 -를 나중에 찾아 계산하고 result에 값을 담아 출력한다.