#include <stdio.h>

int main (void)
{
	char v[10];
	int i;
	FILE *fp;
	
	fp = fopen("arquivo", "r");
	if (!fp) {
		
		printf("Erro na abertura do Arquivo\n");
		exit(0);
	}
	
	i = 0;

	while ((v[i] = getc(fp)) != EOF) {
		if ((v[i] = getc(fp)) != '\n' && (v[i] = getc(fp)) != ' ') {
			printf("%c\n", v[i]);
			i++;
		}
	}
	
	
	return 0;
}	
	
