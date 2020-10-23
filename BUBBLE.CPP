#include<stdio.h>
#include<conio.h>

void main() {
clrscr();
int a[20],flag,i,n,j,temp;
printf("Enter Total Elements: ");
scanf("%d",&n);
printf("Enter %d Elements: \n",n);
for(i=0;i<=n-1;i++){
	scanf("%d",&a[i]);
}

for(i=0;i<=n-2;i++) {
flag = 0;
	for(j=0;j<=n-2-i;j++) {
		if(a[j]>a[j+1]) {
			temp = a[j];
			a[j] = a[j+1];
			a[j+1] = temp;
			flag = 1;
		}
	}
if(flag == 0) break;
}
printf("Sorted Array: \n");
for(i=0;i<=n-1;i++) {
	printf("%d\n",a[i]);
}
getch();
}

