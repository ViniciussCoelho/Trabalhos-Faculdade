algoritmo "C?lculo do Sal?rio Liquido"

var

SalarioBruto, SalarioLiquido, IR, INSS, Sindicato : real
inicio

escreva ("Digite o Sal?rio bruto mensal do funcion?rio: ")
leia (SalarioBruto)

IR <- (SalarioBruto * 15) / 100
INSS <- (SalarioBruto * 11) / 100
Sindicato <- (SalarioBruto * 3) / 100
SalarioLiquido <- SalarioBruto - IR - INSS - Sindicato

escreval ("Sal?rio Bruto : R$ ", SalarioBruto)
escreval ("(-) IR (15%) : R$ ", IR)
escreval ("(-) INSS (11%) : R$ ", INSS)
escreval ("(-) Sindicato (3%) : R$ ", Sindicato)
escreval ("Sal?rio Liquido : R$ ", SalarioLiquido)
fimalgoritmo
