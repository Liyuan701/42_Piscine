#include <stdio.h>
#include <string.h>

int main ()
{
	const char a[20] = "there is a cat here";
	const char b[10] = "cat";
	char *ret;

	ret = strstr(a,b);
 	printf("%s",ret);
	return (0);
}
