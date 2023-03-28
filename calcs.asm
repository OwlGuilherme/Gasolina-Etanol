section .text
  global calcPorcen

calcPorcen: 
  
  movq xmm1, xmm0 ; Copia o valor da gasolina para xmm1
  divsd xmm1, xmm0 ; Divide o valor do etanol pelo da gasolina

  movsd xmm0, [percent] ; Carrega a constante 100.0 em xmm0
  mulsd xmm1, xmm0 ; Multiplica o resultado pelo valor da constante

  movq rax, xmm1 ; Move o resultado para o registrador de retorno
  ret

  percent: dq 100.0 ; Constante para calculo de porcentagem
