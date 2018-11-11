#ifndef __H_A_STACK__
#define __H_A_STACK__

#define TRUE	1
#define FALSE	0
#define STACK_LEN	100

typedef int Data;

typedef struct _arrayStack {
	Data stackArr[STACK_LEN];
	int topIndex;
} ArrayStack;

typedef ArrayStack Stack;

void StackInit(Stack * stack);	// 스택 초기화
int IsStackEmpty(Stack * stack);	// 스택이 비어있는지 확인

Stack SPush(Stack * pstack, Data data);	// 스택에 데이터를 넣음
Stack SPop(Stack * pstack);	// 스택에 있는 데이터를 삭제
Data SPeek(Stack * pstack);	// 가장 최근에 넣은 스택 데이터를 반환

#endif // !__H_A_STACK__
