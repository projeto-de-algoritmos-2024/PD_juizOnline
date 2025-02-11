Você recebe n balões, indexados de 0 a n - 1. Cada balão é pintado com um número representado por uma matriz nums. Você é solicitado a estourar todos os balões.

Se você estourar o i-ésimo balão, você obterá nums[i - 1] * nums[i] * nums[i + 1] moedas. Se i - 1 ou i + 1 sair dos limites da matriz, então trate como se houvesse um balão com um 1 pintado nele.

Retorne o máximo de moedas que você pode coletar estourando os balões sabiamente.