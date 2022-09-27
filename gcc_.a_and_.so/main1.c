# include<stdio.h>
# include"sub1.c"
# include"sub2.c"
int main(){
	int a,b;
	printf("please cin>>a");
	scanf("%d",&a);
	printf("please cin>>b");
        scanf("%d",&b);
	printf("%d*%d =%f",a,b, x2x(a,b));
	printf("%d/%d =%f",a,b,x2y(a,b));
	return 0;
}


