//vector
#include<stdio.h>
struct vector{
	int x;
	int y;
};
void calculateSum(struct vector v1,struct vector v2,struct vector sum);
int main(){
	struct vector v1={5,2};
	struct vector v2={3,4};
	struct vector sum={0};
        calculateSum(v1,v2,sum);
	return 0;
}
void calculateSum(struct vector v1,struct vector v2,struct vector sum){
	sum.x=v1.x+v2.x;
	sum.y=v1.y+v2.y;
	printf("resuntant vector : %di+%dy",sum.x,sum.y);
}