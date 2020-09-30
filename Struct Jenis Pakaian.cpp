#include <stdio.h>

struct jenis_pakaian{
	char nama[50];
	int harga;
};
typedef struct jenis_pakaian jenis_pakaian;

int main() {
	int a,b;
	jenis_pakaian list[a];
	
	printf("  Masukkan Banyak Jenis Pakaian : ");
	scanf(" %d",&a);
	
	for(b=0;b<a;b++){
		printf("\n  Pakaian ke - %d\n",b+1);
		printf("\t- Jenis Pakaian : ");
		scanf(" %[^\n]%*c",&list[b].nama);
		printf("\t- Harga : ");
		scanf("%d",&list[b].harga);
	}
	
		printf("\n  Data yang berhasil diinput \n");
	
	for(b=0;b<a;b++){
		printf("  %d. %s\t = %d\t \n",b+1,list[b].nama,list[b].harga);
	
	}
		printf("\n  Selesai");
		
	return 0;
}
