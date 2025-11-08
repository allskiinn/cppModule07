## Instruções de IA

### Contexto

Este projeto foi concebido para o ajudar a descobrir os alicerces fundamentais da sua formação em TIC.

Para consolidar adequadamente os conhecimentos e competências essenciais, é essencial adotar uma abordagem ponderada na utilização de ferramentas e apoio de IA.

A verdadeira aprendizagem fundamental requer um esforço intelectual genuíno — através de desafios, repetição e trocas de aprendizagem entre pares.

Para uma visão geral mais completa da nossa posição sobre a IA — como ferramenta de aprendizagem, como parte do currículo de TIC e como expectativa no mercado de trabalho — consulte as perguntas frequentes dedicadas na intranet.

### Mensagem principal

☛ Construa bases sólidas sem atalhos.
☛ Desenvolva realmente competências tecnológicas e de poder.
☛ Experimente a aprendizagem entre pares, comece a aprender como aprender e resolver novos problemas.
☛ A jornada de aprendizagem é mais importante do que o resultado.
☛ Aprenda sobre os riscos associados à IA e desenvolva práticas de controlo eficazes e contramedidas para evitar armadilhas comuns.

### Regras para o aluno:

• Deve aplicar o raciocínio às tarefas que lhe forem atribuídas, especialmente antes de recorrer à A.
• Não se deve pedir respostas diretas à IA.
• Deve-se aprender sobre a abordagem global da 42 em relação à IA.

### Resultados da fase:

Nesta fase fundamental, obterá os seguintes resultados:

• Adquirir bases adequadas de tecnologia e codificação.
• Saber por que e como a IA pode ser perigosa durante esta fase.

### Comentários e exemplo:

• Sim, sabemos que a IA existe — e sim, ela pode resolver os seus projetos. Mas você está aqui para aprender, não para provar que a IA aprendeu. Não desperdice o seu tempo (ou o nosso) apenas para demonstrar que a IA pode resolver o problema apresentado.

• Aprender na 42 não é saber a resposta — é desenvolver a capacidade de encontrá-la. A IA dá-lhe a resposta diretamente, mas isso impede-o de construir o seu próprio raciocínio. E o raciocínio leva tempo, esforço e envolve falhas. O caminho para o sucesso não é suposto ser fácil.

• Tenha em mente que durante os exames, a IA não está disponível — sem internet, sem smartphones, etc. Você perceberá rapidamente se confiou demais na IA no seu processo de aprendizagem.

• A aprendizagem entre pares expõe-no a diferentes ideias e abordagens, melhorando as suas competências interpessoais e a sua capacidade de pensar de forma divergente. Isso é muito mais valioso do que apenas conversar com um bot. Portanto, não seja tímido — converse, faça perguntas e aprendam juntos!

• Sim, a IA fará parte do currículo — tanto como ferramenta de aprendizagem quanto como tema em si. Você terá até a chance de criar seu próprio software de IA. Para saber mais sobre a nossa abordagem crescendo, consulte a documentação disponível na intranet.

### ✓ Boa prática:

Estou com dificuldades num novo conceito. Pergunto a alguém próximo como abordou o assunto. Conversamos por 10 minutos e, de repente, tudo faz sentido. Eu entendo.

### ✗ Má prática:

Eu uso secretamente IA, copio algum código que parece correto. Durante a avaliação pelos colegas, não consigo explicar nada. Reprovo. Durante o exame — sem IA — fico novamente bloqueado. Reprovo.

## Exercício 00: Comece com algumas funções

Diretório: ex00/
Ficheiros a enviar: Makefile, main.cpp, whatever.{h, hpp}
Proibido: Nenhum

- Implemente os seguintes modelos de função:
  • swap: Troca os valores de dois parâmetros fornecidos. Não retorna nada.
  • min: Compara os dois valores passados como parâmetros e retorna o menor deles.
  Se forem iguais, retorna o segundo.
  • max: Compara os dois valores passados como parâmetros e retorna o maior.
  Se forem iguais, retorna o segundo.

Essas funções podem ser chamadas com qualquer tipo de argumento. O único requisito é que os dois argumentos tenham o mesmo tipo e suportem todos os operadores de comparação.

### ATENCAO: Os modelos devem ser definidos nos ficheiros de cabeçalho.

Executando o seguinte código:

```
int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}
```

Deve produzir:

```
a = 3, b = 2
min(a, b) = 2
max(a, b) = 3
c = chaine2, d = chaine1
min(c, d) = chaine1
max(c, d) = chaine2
```

## Exercício 01: Iter

Diretório: ex01/
Ficheiros a enviar: Makefile, main.cpp, iter.{h, hpp}
Proibido: Nenhum

- Implemente um modelo de função iter que receba 3 parâmetros e não retorne nada.

      • O primeiro parâmetro é o endereço de uma matriz.
      • O segundo é o comprimento da matriz, passado como um valor const.
      • O terceiro é uma função que será chamada em cada elemento da matriz.

Envie um ficheiro main.cpp que contenha os seus testes. Forneça código suficiente para gerar um executável de teste.

O seu modelo de função iter deve funcionar com qualquer tipo de matriz. O terceiro parâmetro pode ser um modelo de função instanciado.

A função passada como terceiro parâmetro pode receber o seu argumento por referência const ou não const, dependendo do contexto.

### DICA: Pense cuidadosamente sobre como suportar elementos const e não const na sua função iter.

## Exercício 02: Array

Diretório: ex02/
Ficheiros a enviar: Makefile, main.cpp, Array.{h, hpp}
e ficheiro opcional: Array.tpp
Proibido: Nenhum

- Desenvolva um modelo de classe Array que contenha elementos do tipo T e que implemente o seguinte comportamento e funções:
  • Construção sem parâmetro: cria uma matriz vazia.
  • Construção com um unsigned int n como parâmetro: cria uma matriz de n elementos inicializados por predefinição.

### Dica: tente compilar int * a = new int(); e, em seguida, exiba *a.

    • Construção por operador de cópia e atribuição. Em ambos os casos, modificar a matriz original ou a sua cópia após a cópia não deve afetar a outra matriz.
    • DEVE usar o operador new[] para alocar memória. A alocação preventiva (alocar memória antecipadamente) é proibida. O seu programa nunca deve aceder à memória não alocada.
    • Os elementos podem ser acedidos através do operador de índice :[ ].
    • Ao aceder a um elemento com o operador [ ], se o seu índice estiver fora dos limites, é lançada uma exceção std::exception.
    • Uma função membro size() que retorna o número de elementos na matriz. Esta função membro não aceita parâmetros e não deve modificar a instância atual.

Como de costume, certifique-se de que tudo funciona como esperado e entregue um ficheiro main.cpp que contenha os seus testes.
