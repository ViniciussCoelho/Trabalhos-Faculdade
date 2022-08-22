algoritmo "Segundos para Horas:Min:Seg"

var

tempo : inteiro
horas , minutos, segundos : real

inicio

escreva ("Entre com os segundos: ")
leia (tempo)

horas <- tempo div 3600
minutos <- (tempo mod 3600)div 60
segundos <- (tempo mod 3600)mod 60

escreva (horas, " : ", minutos, " : ", segundos)

fimalgoritmo


