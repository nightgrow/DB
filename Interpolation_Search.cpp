#include <stdio.h>

int ISearch(int ar[], int first, int last, int target) {
	int mid;
	
	if(ar[first] > target || ar[last] < target)
		return -1;	// Ž�� ���� 
	mid = ((double)(target - ar[first]) / (ar[last] - ar[first]) * (last - first)) + first;
	
	if(ar[mid] == target)
		return mid;	// Ž���� Ÿ���� �ε��� �� ��ȯ
	else if(target < ar[mid])
		return ISearch(ar, first, mid - 1, target);
	else
		return ISearch(ar, mid + 1, last, target);
}

int main(void) {
	int arr[] = {1, 3, 5, 7, 9};	// ���ĵ� ����Ʈ 
	int idx;
	int target;	// Ž�� ���
	
	scanf("%d", &target);

	idx = ISearch(arr, 0, sizeof(arr) / sizeof(int) - 1, target);
	
	if(idx == -1)
		printf("Ž�� ���� \n");
	else
		printf("Ÿ�� ���� �ε���: %d\n", idx);
}
