algoritmo "semnome"

var

numA : real
numB : real
numC : real

inicio

escreval("Digite a seguir tr?s n?meros distintos!")
escreval("Digite um n?mero: ")
leia(numA)
escreval("Digite outro n?mero: ")
leia(numB)
escreval("Digite mais um n?mero: ")
leia(numC)

se (numA >= numB) e (numA >= numC) entao
   escreval(numA, " ? o maior n?mero.")
senao
     se (numB >= numA) e (numB >= numC) entao
        escreval(numB, " ? o maior n?mero.")
     senao
        escreval(numC, " ? o maior n?mero.")
     fimse
fimse

fimalgoritmo
