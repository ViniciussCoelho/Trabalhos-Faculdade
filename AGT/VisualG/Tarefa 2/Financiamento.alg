algoritmo "Financiamento"

var

salario : real
financiamento : real

inicio

escreval("Digite o seu sal?rio: ")
leia(salario)

escreval("Digite o valor do financiamento: ")
leia(financiamento)

se financiamento <= 5 * salario entao
   escreval("Financiamento aceito!")
senao
   escreval("Financiamento recusado!")
fimse

escreval("Obrigado por nos consultar.")

fimalgoritmo
