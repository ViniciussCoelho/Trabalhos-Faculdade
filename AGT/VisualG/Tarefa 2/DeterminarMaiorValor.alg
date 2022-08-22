algoritmo "semnome"

var

numA : real
numB : real
numC : real

inicio

escreval("Digite a seguir três números distintos!")
escreval("Digite um número: ")
leia(numA)
escreval("Digite outro número: ")
leia(numB)
escreval("Digite mais um número: ")
leia(numC)

se (numA >= numB) e (numA >= numC) entao
   escreval(numA, " é o maior número.")
senao
     se (numB >= numA) e (numB >= numC) entao
        escreval(numB, " é o maior número.")
     senao
        escreval(numC, " é o maior número.")
     fimse
fimse

fimalgoritmo
