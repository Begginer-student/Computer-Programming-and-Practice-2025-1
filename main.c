/* 매개변수가 없는 함수의 호출식 */ 

/* 문법
 * 식 ( ) 형태로 함수호출식을 씁니다.
 * 여기서의 식은 함수를 가리켜야 합니다. 함수 이름 등이 가능합니다.
 *
 * 의미
 * 함수를 실행합니다. 
 * 함수에서 반환한 값이 식의 결과값이 됩니다. 
 */

/* five는 int 타입의 값인 5를 반환하는 함수입니다. */

#include<stdio.h>
int five() {
	return 5;
}

int main() {
	/* To Do: five()를 호출한 결과를 반환해보세요 */
	printf("%d", five());
	return 0;
}
// 위 코드는 vs code는 printf가 존재하지 않으면 출력되지 않아서 vs code에 맞게 코드를 변형해보았습니다.

int five()
{
	int five();
	{
		return 5;
	}
}
int main()
{
	return five();
}
// 위 코드는 vs용 정답코드로 만들었습니다.