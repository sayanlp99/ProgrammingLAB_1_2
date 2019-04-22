#include <stdio.h>
int main() {
  int arr[100],i;
  float n, z = 0, p = 0, np = 0;
  float rz, rp, rnp;
  scanf("%f",&n);
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  for (i = 0; i < n; i++) {
    if (arr[i] == 0)
      z++;
    else if (arr[i] > 0)
      p++;
    else
      np++;
  }
  rz = z / n;
  rp = p / n;
  rnp = np / n;
  printf("%f\n%f\n%f", rp, rnp, rz);
  return 0;
}