#include<stdio.h>

int interpolationSearch(int arr[], int n, int x)
{
	int start, end, pos;

	start = 0;	   
	end = (n - 1); 

	while (start <= end && x >= arr[start] && x <= arr[end])
	{

		pos = start + (((double)(end - start) /
						(arr[end] - arr[start])) *
					   (x - arr[start]));

		if (arr[pos] == x)
			return pos;

		if (arr[pos] < x)
			start = pos + 1;

		else
			end = pos - 1;
	}
	return -1;
}

int main()
{
	int arr[10], x, n, i;

	printf("\n Enter items: ");

	for (int i = 0; i < 5; i++)
		scanf("%d",&arr[i]);

	n = sizeof(arr);

	printf("Enter the element to search:";
	scanf("%d",&x);

	int index = interpolationSearch(arr, n, x);

	if (index != -1)
		printf("Element found at index: %d",index);
	else
		printf("Element not found");
	return 0;
}