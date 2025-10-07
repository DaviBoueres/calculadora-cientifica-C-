🧮 Calculadora Científica desenvolvida em C

📌 Função do programa


Este projeto desenvolve uma calculadora científica interativa.
em linguagem C, realizada por meio do terminal. Ela disponibiliza um conjunto
robusto de 25 operações matemáticas, incluindo desde cálculos
cálculos aritméticos básicos, como funções trigonométricas e logaritmos;
radiciação, conversão de unidades e solução de equações
quadráticas utilizando o método de Bhaskara.

O usuário seleciona a operação por meio de um menu intuitivo.
desejada por meio de um número equivalente. O programa é perfeito
para alunos, apaixonados por programação ou qualquer indivíduo que
queiram realizar cálculos científicos no ambiente de linha de comando.


 Tecnologias e ferramentas empregadas

- Linguagem C: Opção tradicional para aplicações de baixo nível e
controle direto sobre memória e performance.
 
- Bibliotecas padrão:
- stdio.h: Manipulação de dados de entrada e saída.
- stdlib.h: Funções auxiliares, como a alocação de memória dinâmica.
- math.h: funções matemáticas avançadas, como seno e cosseno;
logaritmos, potências, entre outros.
- Ponteiros e constantes:
- Utilização de const double pi para assegurar precisão e invariabilidade
do valor de pi.
- Ponteiros para arrays possibilitam a execução de operações com vários valores,
como adição e multiplicação em lote.

 Como instalar, compilar e rodar

Para compilar e executar o programa em sistemas semelhantes ao Unix (Linux, macOS):


gcc -o calculadora calculadora.c -lm
./calculadora

Para vincular a biblioteca matemática (math.h), é preciso usar o parâmetro -lm.

Para sistemas Windows, é aconselhável utilizar ambientes como MinGW ou
compiladores incorporados, como o Code::Blocks.

Exemplos de aplicação

Quando o programa é iniciado, o usuário se depara com um menu que apresenta 25 opções. Exemplos:

- [1] Adição: Soma de dois ou mais números.
- [11] Seno: Calcula o seno de um ângulo em radianos.
- [25] Bhaskara: Resolve equações do segundo grau com entrada dos
  coeficientes a, b e c.
- [20] Radianos para Graus: Converte ângulos de radianos para graus.

Cada operação solicita os valores necessários e exibe o resultado
diretamente no terminal.

 Informações adicionais

- Loop contínuo: O programa permanece em execução até que o usuário
  decida encerrar, permitindo múltiplos cálculos em sequência.

- Reset de variáveis: Todas as variáveis são zeradas a cada ciclo
  para evitar lixo de memória e garantir precisão.

- Interface simples: O menu é claro e direto, facilitando o uso
  mesmo para iniciantes.

- Uso de ponteiros: Algumas operações utilizam arrays dinâmicos para
  manipular conjuntos de dados, demonstrando conceitos fundamentais
  de alocação de memória.

---

Este projeto é uma excelente introdução à programação em C com foco
em matemática aplicada. Ele pode ser expandido com interface gráfica,
histórico de operações, ou integração com bibliotecas externas para
visualização de gráficos.

Ideal para fins educacionais, aprendizado de lógica de programação
e reforço de conceitos matemáticos.
