#include <stdio.h>
int main() {
int ret;
char comm[15];
int pass=0;
for(pass=1000;pass<10000;pass++)  {
	sprintf(comm,"./hack %d",pass);
	ret = system(comm);
	if(ret == 0)
		break;
}
printf("password is %d \n",pass);

return 0;
}
