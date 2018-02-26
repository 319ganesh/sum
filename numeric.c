#include<stdio.h>

main()
{
	char a;
	printf("\n enter the value of a:");
	scanf("%c",&a);
	if((a>='a')&&(a<='z')||(a>='A')&&(a<='Z'))
	{
		printf("\n no");
	}
	else
	{
        printf("\n yes");
    }

return 0;
}
