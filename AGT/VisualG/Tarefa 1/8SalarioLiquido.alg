algoritmo "Cálculo do Salário Liquido"

var

SalarioBruto, SalarioLiquido, IR, INSS, Sindicato : real
inicio

escreva ("Digite o Salário bruto mensal do funcionário: ")
leia (SalarioBruto)

IR <- (SalarioBruto * 15) / 100
INSS <- (SalarioBruto * 11) / 100
Sindicato <- (SalarioBruto * 3) / 100
SalarioLiquido <- SalarioBruto - IR - INSS - Sindicato

escreval ("Salário Bruto : R$ ", SalarioBruto)
escreval ("(-) IR (15%) : R$ ", IR)
escreval ("(-) INSS (11%) : R$ ", INSS)
escreval ("(-) Sindicato (3%) : R$ ", Sindicato)
escreval ("Salário Liquido : R$ ", SalarioLiquido)
fimalgoritmo
