algoritmo "Cálculo do lucro líquido do dia"

var

PrecoCombustivel : real
LitroCombustivel : real
InicioOdometro : real
FimOdometro: real
ValorPassageiro : real
consumo : real
lucro : real

inicio

escreva ("Digite o preço do combustível: ")
leia (PrecoCombustivel)

escreva ("Digite a marcação do odômetro no início do dia: ")
leia (InicioOdometro)

escreva ("Digite a marcação do odômetro no fim do dia: ")
leia (FimOdometro)

escreva ("Digite o número de litros de combustível gasto: ")
leia (LitroCombustivel)

escreva ("Digite o valor total (R$) recebido dos passageiros: ")
leia (ValorPassageiro)

consumo <- (FimOdometro - InicioOdometro) / LitroCombustivel
lucro <- ValorPassageiro - (LitroCombustivel * PrecoCombustivel)

escreval ("Média do consumo de combustível (em Km/l): ", consumo)
escreval ("Lucro líquido do dia: ", lucro)

fimalgoritmo
