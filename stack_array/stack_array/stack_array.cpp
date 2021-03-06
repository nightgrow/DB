// stack_array.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include "ArrayStackHeader.h"
#include <iostream>

void StartMain() {

}

int main()
{
	Stack stack;
	StackInit(&stack);

	int num;
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &num);
		SPush(&stack, num);
	}

	while (!IsStackEmpty(&stack)) {
		printf("%d ", SPop(&stack));
	}

	return 0;
}

