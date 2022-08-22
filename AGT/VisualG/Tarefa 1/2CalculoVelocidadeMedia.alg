algoritmo "Cálculo de Velocidade Média"

var

nome : caractere
velocidade : real
distancia : real
tempo : real

inicio

escreva ("Digite o nome do piloto: ")
leia (nome)

escreva ("Digite a distância(em km): ")
leia (distancia)

escreva ("Digite o tempo(em horas): ")
leia (tempo)

velocidade <- distancia / tempo

escreva ("A velocidade média do ", nome, "foi ", velocidade, ".")

fimalgoritmo
