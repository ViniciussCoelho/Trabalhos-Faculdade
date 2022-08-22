algoritmo "Troco de pagamento"

var

custo :inteiro
ValorPago : inteiro
troco : inteiro

inicio

escreva ("Digite o preço:")
leia(custo)

escreval ("Digite o valor recebido do cliente:")
leia (ValorPago)

troco <- ValorPago - custo

escreval ("A quantidade de notas de R$50,00: ", troco \ 50)
troco <- troco - (troco \ 50) * 50
escreval ("A quantidade de notas de R$20,00: ", troco \ 20)
troco <- troco - (troco \ 20) * 20
escreval ("A quantidade de notas de R$10,00: ", troco \ 10)
troco <- troco - (troco \ 10) * 10
escreval ("A quantidade de notas de R$5,00: ", troco \ 5)
troco <- troco - (troco \ 5) * 5
escreval ("A quantidade de notas de R$2,00: ", troco \ 2)
troco <- troco - (troco \ 2) * 2
escreval ("A quantidade de notas de R$1,00: ", troco)

fimalgoritmo
