#include<stdio.h>
int birthdayCakeCandles(int n,int arr[]){
    int count=0,i,max=0;
    max=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(i=0;i<n;i++){
        if(max==arr[i])
            count++;
    }
    return count;
}
int main() {
  int n, i, res;
  int arr[10000000];
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  res = birthdayCakeCandles(n, arr);
  printf("%d", res);
  return 0;
}