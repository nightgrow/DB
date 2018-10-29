#include <stdio.h>

int ISearch(int ar[], int first, int last, int target) {
	int mid;
	
	if(ar[first] > target || ar[last] < target)
		return -1;	// Å½»ö ½ÇÆÐ 
		
	// ÀÌÁø Å½»ö°úÀÇ Â÷ÀÌÁ¡ ¹Ý¿µ
	mid = ((double)(target - ar[first]) / (ar[last] - ar[first]) * (last - first)) + first;
	
	if(ar[mid] == target)
		return mid;	// Å½»öµÈ Å¸°ÙÀÇ ÀÎµ¦½º °ª ¹ÝÈ¯
	else if(target < ar[mid])
		return ISearch(ar, first, mid - 1, target);
	else
		return ISearch(ar, mid + 1, last, target);
}

int main(void) {
	int arr[] = {1, 3, 5, 7, 9};	// Á¤·ÄµÈ ¸®½ºÆ® 
	int idx;
	int target;	// Å½»ö ´ë»ó
	
	scanf("%d", &target);

	idx = ISearch(arr, 0, sizeof(arr) / sizeof(int) - 1, target);
	
	if(idx == -1)
		printf("Å½»ö ½ÇÆÐ \n");
	else
		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º: %d\n", idx);
}
