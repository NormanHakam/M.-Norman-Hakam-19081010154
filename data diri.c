#include <stdio.h>
#include <stdlib.h>

int main( void ) 
{
	char nama[50], npm[50], status[50], jurusan[50], umur[50];
	int hobi;
	
	printf("  Masukkan Data Diri Anda\n");
	printf("  Nama\t\t: ");
	gets(nama);
	printf("  NPM\t\t: ");
	scanf("%s",&npm);
	printf("  Umur\t\t: ");
	scanf("%s",&umur);
	printf("  Jurusan\t: ");
	scanf("%s",&jurusan);
	printf("  Status\t: ");
	scanf("%s",&status);
	printf("  Hobi\t\t: ");
	scanf("%s",&hobi);
	
	

	return 0;
}
