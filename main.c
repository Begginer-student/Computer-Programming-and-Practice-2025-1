/* 0부터 127까지에 해당하는 모든 문자를 출력해보기 */
/* 
 * 함수를 반복실행해주는 repeat_f 함수를 써서 여러 숫자에 대해 해당하는 문자의 값이 무엇인지 출력해보세요.
 * repeat_f 함수는 인자로 리턴타입이 void, 매개변수타입이 int인 함수의 주소를 받습니다. 
 * 인자에 값을 0부터 127까지 숫자를 넣어서 반복적으로 인자로 받은 주소가 가리키는 함수를 호출합니다. 
 *
 * 주어진 print_char, print_int 함수를 활용해서 리턴타입이 void, 매개변수타입이 int인 함수를 정의해보세요.
 * 정의한 함수에서 매개변수의 값을 숫자 형식으로도 화면에 출력하고, 문자 형식으로도 화면에 출력해보세요.
 *
 * 정의한 함수를 repeat_f의 인자로 넣어서 실행해보세요. 
 */

/* 
 * repeat_f 함수
 *
 * 함수를 입력받아서 128번 반복해서 실행합니다. 
 * 실행할 함수는 반환 타입이 void고, 매개변수가 int 하나여야 합니다. 
 * i를 0부터 127까지 반복해서 실행합니다. 
 * 
 * 매개변수: 
 * f: 함수 포인터 타입 (반환타입 void, 매개변수타입 int)
 *
 * 반환값:
 * 없음
 */
void repeat_f(void (*f)(int i));

/* 
 * print_char 함수
 *
 * 숫자를 매개변수로 입력받아서 화면에 표시할 내용에 그 숫자에 해당하는 문자를 추가합니다.
 * 
 * 매개변수: 
 * i: int 타입. 화면에 해당하는 문자를 표시할 숫자
 *
 * 반환값:
 * 없음
 */
void print_char(int i);

/* 
 * print_int 함수
 *
 * 숫자를 매개변수로 입력받아서 화면에 표시할 내용에 그 숫자를 추가합니다.
 * 
 * 매개변수: 
 * i: int 타입. 화면에 표시할 문자
 *
 * 반환값:
 * 없음
 */
void print_int(int i);

/* To Do: 반환타입이 void고, 매개변수를 int 타입으로 받는 함수를 정의해보세요. 매개변수의 값을 문자, 숫자 형식으로 화면에 출력해보세요. */
void f(int i)
{
	print_int(i);
	print_char(':');
	print_char(i);
	print_char('\n');
}

int main() {
	/* To Do: 새로 정의한 함수의 주소를 넣어서 repeat_f 함수를 실행해보세요 */
	repeat_f(&f);
	return 0;
}
