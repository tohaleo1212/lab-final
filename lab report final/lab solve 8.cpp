#include <stdio.h>
#include <conio.h>
#define N 100
int main()
{
    int arr1[N];
    int i, mx, mn, n;

    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    mx = arr1[0];
    mn = arr1[0];

    for (i = 1; i < n; i++)
    {
           if (arr1[i] < mn)
        {
            mn = arr1[i];
        }
		
		
		if (arr1[i] > mx)
        {
            mx = arr1[i];
        }

     
    }
   
    printf("Minimum element is : %d\n", mn);
    printf("Maximum element is : %d\n", mx);

    return 0;
}

// output:
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 45
// element - 1 : 2
// element - 2 : 21
// Maximum element is : 45
// Minimum element is : 2
