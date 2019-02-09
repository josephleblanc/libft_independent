#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s);

int		main(void)
{
	printf("Testing strlen against ft_strlen\n\n");
	
	printf("strlen(\"\"): %zu\nft_strlen(\"\"): %zu\n\n", strlen(""), ft_strlen(""));
	printf("strlen(\"1\"): %zu\nft_strlen(\"1\"): %zu\n\n", strlen("1"), ft_strlen("1"));
	printf("strlen(\"12\"): %zu\nft_strlen(\"12\"): %zu\n\n", strlen("12"), ft_strlen("12"));
	printf("strlen(\"123\"): %zu\nft_strlen(\"123\"): %zu\n\n", strlen("123"), ft_strlen("123"));
	printf("strlen(\"abc\"): %zu\nft_strlen(\"abc\"): %zu\n\n", strlen("abc"), ft_strlen("abc"));
	printf("strlen(\"NULL\"): %zu\nft_strlen(\"NULL\"): %zu\n\n", strlen("NULL"), ft_strlen("NULL"));
	printf("strlen(\"qwertyuiopasdfghjklzxcvbnm\"): %zu\nft_strlen(\"qwertyuiopasdfghjklzxcvbnm\"): %zu\n\n", strlen("qwertyuiopasdfghjklzxcvbnm"), ft_strlen("qwertyuiopasdfghjklzxcvbnm"));
	
	printf("Tests Complete\n");
	return (0);
}
