algoritmo "Porcentagem de Eleitores"

var

TotalEleitores : real
brancos : real
nulos : real
validos : real
PerEleitores : real
PerBrancos : real
PerNulos : real
PerValidos : real

inicio

escreva ("Digite o número total de eleitores do município: ")
leia (TotalEleitores)

escreva ("Digite o número total de votos em branco: ")
leia (brancos)

escreva ("Digite o número total de votos nulos: ")
leia (nulos)

escreva ("Digite o número total de votos válidos: ")
leia (validos)

PerBrancos <- (100 * brancos) / TotalEleitores
PerNulos <- (100 * nulos) / TotalEleitores
PerValidos <- (100 * validos) / TotalEleitores

escreval ("Porcentagem de votos em branco: ", PerBrancos, "%")
escreval ("Porcentagem de votos nulos: ", PerNulos, "%")
escreval ("Porcentagem de votos validos: ", PerValidos, "%")

fimalgoritmo
