#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main(){
  char message[50] = "";
  char password[50] = "";

  printf("Digite uma mensagem: ");
  scanf("%50[^\n]%*c", &message);

  printf("Digite uma senha: " );
  scanf("%50[^\n]%*c", &password);

  int messageLength = strlen(message); // Pegando o tamanho da mensagem 

  char  random[messageLength + 1]     = ""; // Iniciando o vetor que vai guardar a chave pseudo-randomica
  char  encrypted[messageLength + 1]  = ""; // Iniciando o vetor que vai guardar a mensagem codificada
  char  decrypted[messageLength + 1]  = ""; // Iniciando o vetor que vai guardar a mensagem decriptada

  
  for(int i=0; i < messageLength; i++){ // loop de 0 até tamanhoDaMensagem - 1
    srand(password[i % strlen(password)]); // Passando a semente do numero randomico
    
    random[i] = rand(); // Gerando uma letra randomica e guardando dentro do vetor
  }

  printf("Tamanho da mensagem: %d\n", messageLength);
  
  // Criptografando
  for(int i=0; i < messageLength; i++){ 
    encrypted[i] = message[i] ^ random[i]; // A ^ B = C
  }

  printf("Codificada: %s\n", encrypted);

  // Descriptografando  
  for(int i=0; i < messageLength; i++){
    decrypted[i] = encrypted[i] ^ random[i]; // C ^ B = A
  }

  memset(decrypted + messageLength, '\0', 1);

  printf("Decodificada: %s\n", decrypted);

  return 0;
}