section .text

global calcPorcen

calcPorcen:  
 divsd xmm1, xmm0 ; Divide o valor do etanol pelo da gasolina
 movsd xmm0, xmm1 ; Move o resultado da divisão para xmm0
 ret 
