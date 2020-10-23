#include<stdio.h>
#include<conio.h>

void main() {
clrscr();
int a[5],i,n,j,temp;
printf("Enter Total Elements: ");
scanf("%d",&n);
printf("Enter %d Elements: \n",n);
for(i=0;i<=n-1;i++){
	scanf("%d",&a[i]);
}


int gap;
for(gap=n/2;gap>=1;gap/=2) {
  for(j=gap;j<n;j++) {
    for(i=j-gap;i>=0;i-=gap) {
      if(a[i+gap]>a[i]) break;
      else {
	 temp = a[i];
	 a[i] = a[i+gap];
	 a[i+gap] = temp;
      }

    }
  }
}


printf("Sorted Array: \n");
for(i=0;i<=n-1;i++) {
	printf("%d\n",a[i]);
}
getch();
}

