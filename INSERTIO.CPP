#include<stdio.h>
#include<conio.h>

void main() {
 int a[20],n,i,j,temp;
 clrscr();
 printf("Enter total Element: ");
 scanf("%d",&n);
 printf("Enter %d Elements: \n",n);
 for(i=0;i<=n-1;i++) {
	scanf("%d",&a[i]);
 }

 for(i=1;i<=n-1;i++) {
 temp = a[i];
 j=i-1;
 while(j>=0 && a[j]>temp) {
	a[j+1] = temp;
	j = j-1;
 }
 a[j+1] = temp;
 }
  printf("Sorted array: ");
  for(i=0;i<=n-1;i++) {
	printf("%d\n",a[i]);
 }
}