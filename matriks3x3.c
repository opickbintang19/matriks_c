#include <stdio.h>
void judul(){
	printf("--------------------------------------------------\n");
	printf("| NAMA 		: HUSAIN TAUFIQQURRAHMAN 	|\n");
	printf("| NPM 		: 19081010075 			|\n");
	printf("| MATA KULIAH 	: PEMROGRAMAN DASAR 		|\n");
	printf("--------------------------------------------------\n");
	printf("Selamat Datang Di Menu Matriks 3x3\n");
	printf("1.Penjumlahan\n");
	printf("2.Pengurangan\n");
	printf("3.Perkalian\n");
	printf("4.Keluar\n");
}
int sum(int matsum){
  int a,b,A[3][3],B[3][3],C[3][3];
  printf("Masukkan Elemen Matrix Pertama: \n");
  for (a =0;a<3;a++)
  {
    for (b=0;b<3;b++)
    {
      printf("Elemen ke [%d][%d] : ",a+1,b+1);
      scanf("%d", &A[a][b]);
    }
  }
  printf("\n");
  printf("Masukkan Elemen Matrix Kedua: \n");
  for (a=0;a<3;a++)
  {
    for (b=0;b<3;b++)
    {
      printf("Elemen ke [%d][%d] : ",a+1,b+1);
      scanf("%d", &B[a][b]);
    }
  }
  printf("\n");
  printf("Hasil Penjumlahan Matrix: \n");
  for (a=0;a<3;a++)
  {
    for (b=0;b<3;b++)
    {
      C[a][b] = A[a][b] + B[a][b];
      printf("%d \t", C[a][b]);
    }
    printf("\n");
  }
  return 0;
}
int min(int matmin){
  int a,b,A[3][3],B[3][3],C[3][3];
  printf("Masukkan Elemen Matrix Pertama: \n");
  for (a =0;a<3;a++)
  {
    for (b=0;b<3;b++)
    {
      printf("Elemen ke [%d][%d] : ",a+1,b+1);
      scanf("%d", &A[a][b]);
    }
  }
  printf("\n");
  printf("Masukkan Elemen Matrix Kedua: \n");
  for (a=0;a<3;a++)
  {
    for (b=0;b<3;b++)
    {
      printf("Elemen ke [%d][%d] : ",a+1,b+1);
      scanf("%d", &B[a][b]);
    }
  }
  
  printf("\n");
  printf("Hasil Pengurangan Matrix: \n");
  for (a=0;a<3;a++)
  {
    for (b=0;b<3;b++)
    {
      C[a][b] = A[a][b] - B[a][b];
      printf("%d \t", C[a][b]);
    }
    printf("\n");
  }
  return 0;
}
int multiply(int matmultiply){	
	int A[3][3], B[3][3], C[3][3];
    int a,b,k,jumlah = 0;
    
	for(a =0;a<3;a++){
    for (b=0;b<3;b++){
      printf("Elemen ke [%d][%d] : ",a+1,b+1);
      scanf("%d", &A[a][b]);
    }
  }
  printf("\n");
  printf("Masukkan Elemen Matrix Kedua: \n");
  for (a=0;a<3;a++){
    for (b=0;b<3;b++){
      printf("Elemen ke [%d][%d] : ",a+1,b+1);
      scanf("%d", &B[a][b]);
    }
  }
    for(a=0;a<3;a++){
      for(b=0;b<3;b++){
        for(k=0;k<3;k++){
          jumlah=jumlah+A[a][k]*B[k][b];
        }
        C[a][b] = jumlah;
        jumlah = 0;
      }
    }
    printf("\n");
    printf("Hasil Perkalian Matriks: \n");
    for(a=0;a<3;a++){
      for(b=0;b<3;b++){
        printf("%d\t", C[a][b]);
      }
      printf("\n");
    }
    return 0;
  }
int main(){
	int pilihan,matsum,matmin,matmultiply;
	do{
		judul();
	printf("Masukkan Pilihan Anda:");
	scanf("%d",&pilihan);
	printf("\n");
	switch(pilihan){
		case 1: sum(matsum); break;
		case 2: min(matmin); break;
		case 3: multiply(matmultiply); break;
		default: printf("Keluar / Salah Inputan\n"); break;
	}
	system("PAUSE"); system("cls");
	}while(pilihan!=4);
}
