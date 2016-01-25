#include "method.h"

/*
*	strstr()함수와 동일한 기능을 하는 mystrstr()구현하기
*/
char* mystrstr(char *str1, char *str2);

int problem_87(){
	char *str1 = "Hansung University Computer Engineering";
	char *str2 = "ompu";
	char *p, buf[100];

	p = mystrstr(str1, "Uni");
	printf("%s\n", p);
	p = mystrstr(str1, str2);
	printf("%s\n", p);
	p = mystrstr(str1, "COMP");
	printf("%s\n", p);
	printf("%s\n", mystrstr(str1, "ng"));
	while(1)
		printf("%s\n", mystrstr(str1, gets(buf)));
	
	return 0;
}

char* mystrstr(char *str1, char *str2){
	char *cp = (char *) str1;
    char *s1, *s2;

    if (!*str2){
		return (char *) str1;
	}

    while (*cp){
		s1 = cp;
		s2 = (char *) str2;

		while (*s1 && *s2 && !(*s1 - *s2)){
			s1++, s2++;
		}
		if (!*s2){
			return cp;
		}
		cp++;
    }

	return NULL;
}