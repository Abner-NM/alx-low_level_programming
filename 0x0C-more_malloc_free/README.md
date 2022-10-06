# 0x0C. C - More malloc, free

0. 0-malloc_checked.c - a function that allocates memory using malloc
	* Returns a pointer to the allocated memory
	* if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
1. 1-string_nconcat.c - a function that concatenates two strings
	* The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
	* If the function fails, it should return NULL
	* If n is greater or equal to the length of s2 then use the entire string s2 
	* if NULL is passed, treat it as an empty string
2. 2-calloc.c - a function that allocates memory for an array, using malloc
	* The _calloc_  function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
	* The memory is set to zero
	* If nmemb or size is 0, then _calloc_ returns NULL
	* If malloc fails, then _calloc_ returns NULL
3. 3-array_range.c - a function that creates an array of integers
	* The array created should contain all the values from min (included) to max (included), ordered from min to max
	* Return: the pointer to the newly created array
	* If min > max, return NULL
	* If malloc fails, return NULL

