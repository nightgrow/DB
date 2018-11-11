#include "pch.h"
#include "ArrayStackHeader.h"
#include <stdio.h>
#include <stdlib.h>

void StackInit(Stack * pstack) {
	pstack->topIndex = -1;
}

int IsStackEmpty(Stack * pstack) {
	if (pstack->topIndex == -1) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}


Data SPush(Stack * pstack, Data data) {
	pstack->topIndex += 1;
	pstack->stackArr[pstack->topIndex] = data;

	return 0;
}

Data SPop(Stack * pstack) {
	int delData;

	if (IsStackEmpty(pstack)) {
		printf("Stack is Empty!");

		exit(-1);
	}

	delData = pstack->topIndex;
	pstack->topIndex -= 1;

	return pstack->stackArr[delData];
}

Data SPeek(Stack * pstack) {
	if (IsStackEmpty(pstack)) {
		printf("Stack is Empty!");

		exit(-1);
	}

	return pstack->stackArr[pstack->topIndex];
}