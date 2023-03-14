#ifndef MAIN_H
#define MAIN_H

char *_strstr(char *haystack, char *needle);
char *_strpbrk(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);
char *_strchr(char *s, char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _atoi(char *s);
char *_strcpy(char *dest, char *src);
void _puts(char *s);
int _strlen(char *s);
int _isdigit(int c);
int _isupper(int c);
int _abs(int n);
int _isalpha(int c);
int _islower(int c);
int _putchar(char c);

#endif /* MAIN_H */