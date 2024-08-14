#include <stdio.h>
void main()
{ int data[] = {-2, 45, 0, 11, -9},i;
for ( i=0; i <6 ; i++) {
if (data[i] > data[i + 1]) {
int temp = data[i];
data[i] = data[i + 1];
data[i + 1] = temp;
}
}
for ( i = 0; i < 5; i++) {
printf("%d ", data[i]);
}
}
