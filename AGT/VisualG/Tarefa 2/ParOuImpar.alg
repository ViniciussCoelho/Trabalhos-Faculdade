algoritmo "Par ou ?mpar?"

var

num_entrada : inteiro
num_impar : inteiro
num_par : inteiro

inicio

escreval("Digite um n?mero inteiro: ")
leia(num_entrada)

se num_entrada < 0 entao
   escreval("ERRO: o n?mero ? negativo")
senao
   se num_entrada mod 2 = 0 entao
      escreval("O n?mero ? par!")
   senao
      escreval("O n?mero ? impar!")
   fimse
fimse

fimalgoritmo
