#include <stdio.h>
#include <string.h>

int my_strlen(char* str)
{
    int count = 0;
    while(*str != 0)
    {
        count++;
        str++;
    }
    return count;
}
char* my_revers(char* str)
{
    int len = my_strlen(str);
    int start = 0;
    int end = len -1;

    while(start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp; 
        
        start++;
        end--;
    }
}
int main()
{
    char str[] = "Hello";
    printf("original version: %s\n",str);
    my_revers(str);
    printf("reversed version: %s\n",str);
}