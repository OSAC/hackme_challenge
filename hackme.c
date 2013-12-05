#include <stdio.h>
int main(int argc, char* argv[]) {
int pass=4523;
int upass = 0;
if(argc < 2) {
	printf("Usage: %s <4-digit_pass>\n",argv[0]);
	return 1;
}
upass = atoi(argv[1]);
if(upass == pass){
	printf("Congrat Hacker. You get it.\n");
	return 0;
	}
return 1;
}
