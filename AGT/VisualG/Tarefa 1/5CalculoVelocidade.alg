algoritmo "Calculo da Velocidade"

var

V : real
Vi : real
A: real
T: real

inicio

escreva ("Digite a velocidade inicial (em m/s): ")
leia (Vi)

escreva ("Digite a aceleração (em m/s²): ")
leia (A)

escreva ("Digite o tempo (em segundos): ")
leia (T)

V <- Vi + (A * T)

escreva ("A velocidade do objeto é: ", V, "m/s")

fimalgoritmo
