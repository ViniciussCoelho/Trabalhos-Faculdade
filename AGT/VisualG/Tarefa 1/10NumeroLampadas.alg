algoritmo "numero de l?mpadas"

var

PotLampada : real
LargComodo : real
CompComodo : real
AreaComodo : real
PotNecessaria : real
NumLampadas : real

inicio

escreva ("Pot?ncia da l?mpada (em watts): ")
leia (PotLampada)

escreva ("Largura do c?modo: ")
leia (LargComodo)

escreva ("Comprimento do c?modo: ")
leia (CompComodo)

AreaComodo  <- LargComodo * CompComodo : real
PotNecessaria  <- AreaComodo * 18
NumLampadas <- PotNecessaria / PotLampada

escreva ("Numero de l?mpadas necess?rias para iluminar o c?modo ? ", NumLampadas)

fimalgoritmo
