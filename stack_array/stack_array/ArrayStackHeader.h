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

void StackInit(Stack * pstack);	// ���� �ʱ�ȭ
int IsStackEmpty(Stack * pstack);	// ������ ����ִ��� Ȯ��

Data SPush(Stack * pstack, Data data);	// ���ÿ� �����͸� ����
Data SPop(Stack * pstack);	// ���ÿ� �ִ� �����͸� ����
Data SPeek(Stack * pstack);	// ���� �ֱٿ� ���� ���� �����͸� ��ȯ

#endif // !__H_A_STACK__
