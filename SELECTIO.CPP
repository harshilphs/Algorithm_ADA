#include<stdio.h>
#include<conio.h>

void main() {
clrscr();
int n,a[20],i,j,min,temp;
printf("Enter no of Elements :");
scanf("%d",&n);
printf("Enter %d Elements: \n",n);
for(i=0;i<=n-1;i++) {
	scanf("%d",&a[i]);
}

for(i=0;i<=n-2;i++){
 min = i;
 for(j=i+1;j<=n-1;j++){
	if(a[j]<a[min]){
		min = j;
	}
 }
 if(min != i) {
 temp = a[i];
 a[i] = a[min];
 a[min] = temp;
 }
}

printf("Sorted Array: \n");
for(i=0;i<=n-1;i++) {
	printf("%d\n",a[i]);
}
getch();
}