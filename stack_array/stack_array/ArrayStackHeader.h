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

void StackInit(Stack * stack);	// ���� �ʱ�ȭ
int IsStackEmpty(Stack * stack);	// ������ ����ִ��� Ȯ��

Stack SPush(Stack * pstack, Data data);	// ���ÿ� �����͸� ����
Stack SPop(Stack * pstack);	// ���ÿ� �ִ� �����͸� ����
Data SPeek(Stack * pstack);	// ���� �ֱٿ� ���� ���� �����͸� ��ȯ

#endif // !__H_A_STACK__
