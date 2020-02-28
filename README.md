<h3 align="center">Criptografia de Fluxo</h3>


## :scroll: Como funciona
O programa em questão recebe uma mensagem e uma senha de no máximo 50 caracteres, gera um array de numeros pseudo-aleatórios e faz um XOR entre este array e a mensagem para criptografar. Depois, ele pega a mensagem criptografada e passa novamente no array de numeros pseudo-aleatórios gerando assim a mensagem original.

### :rocket: Compilando e executando

1. `git clone git@github.com:GustavoBlaze/criptografia-fluxo.git`
2. `cd criptografia-fluxo`
3. `g++ -Wformat=0 main.cpp -o main`
4. `./main`
5. Entre com a mensagem
6. Entre com a senha
7. Veja a mágica a acontecer 🙌 

<hr>
<p align="center">Com 💜 Luiz Gustavo</p>