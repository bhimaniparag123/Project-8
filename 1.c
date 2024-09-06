#include <stdio.h>

main() 
{
    char str[100];
    char *ptr = str;
    int length = 0;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    while (*ptr != '\0') 
	{
        length++;       
        ptr++;
    }

    if (length > 0 && str[length - 1] == '\n') 
	{
        length--;  
    }
    printf("The length of the string is: %d\n", length);
}
