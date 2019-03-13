#include <stdio.h>
void main()
{
    int n, c, d, a[100], b[100];
    printf("Enter the number of elements in array:");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (c = 0; c < n ; c++){
        printf("[%d]:",c+1);
        scanf("%d", &a[c]);
    }
    for (c = n - 1, d = 0; c >= 0; c--, d++)
        b[d] = a[c];
    for (c = 0; c < n; c++)
        a[c] = b[c];
    printf("Reverse array is\n");
    for (c = 0; c < n; c++)
        printf("%d ", a[c]);
 }