algoritmo "Par ou ímpar?"

var

num_entrada : inteiro
num_impar : inteiro
num_par : inteiro

inicio

escreval("Digite um número inteiro: ")
leia(num_entrada)

se num_entrada < 0 entao
   escreval("ERRO: o número é negativo")
senao
   se num_entrada mod 2 = 0 entao
      escreval("O número é par!")
   senao
      escreval("O número é impar!")
   fimse
fimse

fimalgoritmo
