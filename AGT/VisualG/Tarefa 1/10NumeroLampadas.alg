algoritmo "numero de lâmpadas"

var

PotLampada : real
LargComodo : real
CompComodo : real
AreaComodo : real
PotNecessaria : real
NumLampadas : real

inicio

escreva ("Potência da lâmpada (em watts): ")
leia (PotLampada)

escreva ("Largura do cômodo: ")
leia (LargComodo)

escreva ("Comprimento do cômodo: ")
leia (CompComodo)

AreaComodo  <- LargComodo * CompComodo : real
PotNecessaria  <- AreaComodo * 18
NumLampadas <- PotNecessaria / PotLampada

escreva ("Numero de lâmpadas necessárias para iluminar o cômodo é ", NumLampadas)

fimalgoritmo
