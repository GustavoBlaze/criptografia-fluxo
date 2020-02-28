#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main(){
  // char message[20] = "Hello"; // Mensagem a ser criptografada
  // char password[20'] = "12345"; // Senha para criptografar a mensagem
  char message[50] = "";
  char password[50] = "";

  printf("Digite uma mensagem: ");
  scanf("%50[^\n]%*c", &message);

  printf("Digite uma senha: " );
  scanf("%50[^\n]%*c", &password);

  int messageLength = strlen(message); // Pegando o tamanho da mensagem 
  char  random[messageLength], // Iniciando o vetor que vai guardar a chave pseudo-randomica
        encrypted[messageLength], // Iniciando o vetor que vai guardar a mensagem codificada
        decrypted[messageLength]; // Iniciando o vetor que vai guardar a mensagem decriptada

  // memset(&random, '\0', messageLength);
  // memset(&encrypted, '\0', messageLength);
  // memset(&decrypted, '\0', messageLength);
  
  for(int i=0; i < messageLength; i++){ // loop de 0 até tamanhoDaMensagem - 1
    srand(password[i % messageLength]); // Passando a semente do numero randomico
    
    random[i] = rand(); // Gerando uma letra randomica e guardando dentro do vetor
  }

  printf("Mensagem a ser criptografa: %s\n", message);
  printf("Senha: %s\n", password);
  printf("Tamanho da mensagem em bytes: %d\n", messageLength);
  
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