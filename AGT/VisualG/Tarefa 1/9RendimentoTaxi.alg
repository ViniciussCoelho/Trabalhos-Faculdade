algoritmo "C?lculo do lucro l?quido do dia"

var

PrecoCombustivel : real
LitroCombustivel : real
InicioOdometro : real
FimOdometro: real
ValorPassageiro : real
consumo : real
lucro : real

inicio

escreva ("Digite o pre?o do combust?vel: ")
leia (PrecoCombustivel)

escreva ("Digite a marca??o do od?metro no in?cio do dia: ")
leia (InicioOdometro)

escreva ("Digite a marca??o do od?metro no fim do dia: ")
leia (FimOdometro)

escreva ("Digite o n?mero de litros de combust?vel gasto: ")
leia (LitroCombustivel)

escreva ("Digite o valor total (R$) recebido dos passageiros: ")
leia (ValorPassageiro)

consumo <- (FimOdometro - InicioOdometro) / LitroCombustivel
lucro <- ValorPassageiro - (LitroCombustivel * PrecoCombustivel)

escreval ("M?dia do consumo de combust?vel (em Km/l): ", consumo)
escreval ("Lucro l?quido do dia: ", lucro)

fimalgoritmo
