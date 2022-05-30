#include<stdio.h>

int main(){
	int i, j, count, temp, no[25];

	//SETTING LIMIT
	printf("Enter no of element in array: ");
	scanf("%d", &count);

	//TO READ THE ELEMENTS ENTERED
	printf("Enter elements: ");
	for(i=0; i<count; i++)
		scanf("%d",&no[i]);

	//INSERTION SORT
	for(i=1; i<count; i++)
	{
		temp = no[i];
		j = i-1;
		while((temp < no[j]) && (j >= 0))
		{
			no[j+1] = no[j];
			j = j-1;
		}
		no[j+1] = temp;
	}
	printf("Elements in order: ");
	for(i=0; i<count; i++)
		printf("%d ",no[i]);

    printf("\n");

}
