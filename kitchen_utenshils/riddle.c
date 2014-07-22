/*
Want to little headache?
Ram have $20, he want to purches 20 kitchen utensils.
After he went to shop, he find out that he can get
1 pan on $5
1 plate on $0.5 and 
1 cup on $0.25

Help him get exectly 20 kitchen utensils on exactly $20.

Write a program to solve it iteratively.
How many iteration you require at minimum?
*/

//a+b+c=20
//5a+0.5b+0.25c=20

#include <stdio.h>
int main(){

int a, b,c;
float res1, res2;

int i=0;
for(c=0;c<20;c++){
for(b=0;b<20-c;b++){
	a = 20-b-c;
	i++;	
	res1 = a+b+c;
	res2 = 5*a+ 0.5*b + 0.25*c;
	
	if(res1==res2){
		if(res1==20){
			printf(" Solution is %d %d %d\n",a,b,c);
			printf(" Mon  is %d %f %f\n", a*5, b*0.5, c*0.25);
			printf("==============\n");
			break;
		}
	}

}

}

printf("Loop = %d\n",i);


}
