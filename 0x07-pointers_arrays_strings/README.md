# 0x07. C - Even more pointers, arrays and strings

0. 0-memset.c - a function that fills memory with a constant byte
	* The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
	* Returns a pointer to the memory area s
1. 1-memcpy.c - a function that copies memory area
	* _memcpy() function copies n bytes from memory area src to memory area dest
	* Returns a pointer to dest
2. 2-strchr.c - a function that locates a character in a string
	* Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
3. 3-strspn.c - a function that gets the length of a prefix substring
	* Returns the number of bytes in the initial segment of s which consist only of bytes from accept
4. 4-strpbrk.c -  function that searches a string for any of a set of bytes
	* a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
5. 5-strstr.c - a function that locates a substring.
	* finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are
	* Returns a pointer to the beginning of the located substring, or NULL if the substring is not found
6. 7-print_chessboard.c - a function that prints the chessboard
