#include <stdio.h>
// klavyeden katsayı ve x'e bağlı üs girilir,türev hesaplanır

int main() 

{

  int sayi,us; 
  
  printf("bu program x'e bagli turev hesaplar.\n");

  printf("sayi girin: ");
  scanf("%d",&sayi);
  
  printf("x^ olacak sekilde bir us girin: ");
  scanf("%d",&us); 
    
  printf("f(x) = (%dx^%d) türevi f'(x) = %dx^%d",sayi,us,sayi*us,us-1);

  return 0;

}