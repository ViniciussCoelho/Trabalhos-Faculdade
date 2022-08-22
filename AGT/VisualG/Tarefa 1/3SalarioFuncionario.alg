algoritmo "Salario do Funcionario"

var

nome_funcionario: caractere
horas_trabalhadas: real
valor_hora: real
salario: real

inicio

escreva ("Digite o nome do funcionário: ")
leia (nome_funcionario)
escreva ("Digite o nùmero de horas trabalhadas: ")
leia (horas_trabalhadas)
escreva ("Digite o valor que o funcionário recebe por hora: ")
leia (valor_hora)

salario <- horas_trabalhadas * valor_hora

escreva ("O funcionario(a) ", nome_funcionario, " possui um salario de ", salario, " reais.")






fimalgoritmo
