**Documentação do Curso:** C++ Moderno para iniciantes

**Start:** 07/03/2021

**Name:** Paulo Henrique

**Country:** Brazil


#--------------------------------------1º Aula--------------------------------------#

### O que irei ver no curso:

Conceitos gerais, compiladores, sintaxe, diretivas, vectores, ponteiros, strucs e exercicios.

### pré-requisistos:

Um computador de 32 ou 64 bits com Linux

### O que irei aprender:

Irei criar os meus primeiros programas, games e outros em C++ via terminal.

### Preciso saber programação para iniciar esse curso?

Não! é perfeito começar com C++. Depois de passar por C++, vai ficar tudo mais facil.



#--------------------------------------2º Aula--------------------------------------#

### O que é C++?

É uma linguagem multiparadigma(Varias funcionalidades), seu suporte inclui linguagem imperativa(comandos que mudam o estado - variaveis - de um programa), orientada a objetos(organizada por classes) e generica, de uso geral;

Desde os anos 90 é uma das linguagens comerciais mais populares, sendo bastante usada também na academia por seu grande desempenho e base de utilizadores;

### Quem criou o C++?

Foi desenvolvido por Bjarne Stroustrup no Bell Labs como uma extensão do C, a partir de 1979;

### Em que o C++ é bom?

O C++ se destaca em situações em que é necessário alto desempenho e controle preciso sobre a memória e outros recursos. Aqui estão alguns tipos comuns de apps que provavelmente seriam/são escritos em C++:

* Games
* Sistemas em tempo real (por exemplo, para transporte, fabricação, etc.)
* Aplicações gráficas e simulações
* Aplicativos de produtividade/escritorio
* Software embutido
* Processamento de audio e video

### Quem desenvolve e mantém o C++?

O grupo de desenvolvimento Boost.org trabalha para evoluir a biblioteca padrão, informando o comite oficial da linguagem das facilidades que possuem maior retorno positivo dos programadores, seja por qualidade ou por utilidade, e quais ainda devem ser desenvolvidas.

### Quais programas famosos foram escritos em C++?

* Adobe Systems (Photoshop)
* Firefox
* Google Chrome
* MySQL
* JavaScript
* Nmap
* MS office
* LibreOffice
* Sistema de pouso Curiosity em marte
* Opera
* OBS studio
* Windows Phone
* Apple OS
* Unreal Engine
* Godot
* JVM (Maquina virtual do Java, bem como compiladores para Java)
* Tensorflow



#--------------------------------------3º Aula--------------------------------------#

### Como o C++ funciona?

A CPU de um computador é incapaz de entender o C++. O conjunto limitado que uma CPU ode entender diretamente é chamado de código da maquina (ou idioma de maquina ou conjunto de instruções). Aqui estóa uma instrução de linguagem de maquina de amostra: 10110000 01100001.

Em palavras finais podemos dizer que: o codigo que se escreve em C++ é transformado em Assembly e posteriormente transformado em linguagem de maquina:

C++: int a = 97 -> Assembly: mov al, 061h -> Máquina: 1011000 01100001

Por isso o C++ é considerada uma linguagem de alto nivel (Longe do hardware em relação ao Assembly), já o Assembly de baixo nivel porque ele transforma diretamente em linguagem de maquina.

### Compilação de codigo:

Esse é o processo simplificado de uma compilãção:

High-level language source code -> Compiler -> executable -> executable -> hardware -> program results

Algumas pessoas confundem COMPILADORES com INTERPRETADORES!

Os interpretadores tendem a ser mais flexiveis que os compiladores, mas menos eficientes ao executar programas, porque o processo de interpretação precisa ser realizado toda vez que o programa é executado. Isso significa que o interprete é necessario toda vez que o programa é executado.

### Interpretadores vs Compiladores

Exemplos de linguagens que usam compiladores: C, C++, C#, COBOL, Common Lisp, Delphi, Fortran, Java, Objective-C, ...

Exemplos de linguagens queusam interpretadores: Bash, Perl, PHP, Python, JavaScript, Lua, Ruby, Haskell, ...

### Compiladores

Existem diversor compiladores. Dentre eles os mais conhecidos são:

GCC/g++ -> Mais usado
LLVM -> Clang



#--------------------------------------4º Aula--------------------------------------#

### Meu primeiro programa em C++

Para se aprender qualquer linguagem de programação deve-se saber o basico do basico. Escrever algo na tela, por que não um Olá mundo?



### Noções basicas para o primeiro hello world 

* Incluir biblioteca: include <>

* Toda função precisa ser definida com um tipo: int por exemplo

* Blocos de codigo funcionam com chaves {}

* Biblicoteca de input e output: iostream

* Todo programa em C++ deve ter a função main: main()

* Todas as instruções devem terminar em ;

* Para escrever em C++ sempre tem que usar aspas duplas ""

* Toda função main precisa de um return: Return 0;

* 1 caractere = aspas simples, mais de 1 caractere = aspas duplas

* Usar "using" para que o proprio compilador insira onde deve o namespace

* Pular linha '\n'

### Sobre compilação

**Para compilar o programa renomeando ele como quiser:**

```g++ nomedoprogramaasercompilado -o nomedoprogramaquevocêquiser```

**Se você não usar "-o" para nomear o programa compilado ele vai criar um arquivo:**

```a.out```

**Para mais detalhes durante a compilação:**

```g++ -v nomedoprogramaasercompilado```

### Extensões em C++

**As extensões do C++ são:** .C, .cc, .cpp, .cxx, .c++, .h, .hh, .hpp, .hxx, .h++.

**Onde colocar as Bibliotecas:** .h, .hh, .hpp, .hxx, .h++.



#--------------------------------------5º Aula--------------------------------------#

### Para que servem os comentarios 

Servem para os outros programadores que forem ler seu codigo e para explicar para si mesmo o que você fez ali anteriormente.

O compilador ignora os comentarios, onde estiver comentado ele não lê. 

### Tipos de comentarios

* ```//```= Começou no C++, ele é usado para comentar uma linha apenas
* ```/* */```= Este é usado para comentar um bloco inteiro de codigo.

### Para forçar o programa a mostrar warnings, caso hajam:

**Compile usando:**

```g++ -Werror nomedoprograma -o nomequevocêquiser```

O ideal é ele não não retornar nenhum erro e nenhum warn 



#--------------------------------------6º Aula--------------------------------------#

### Variaveis em C++

Variaveis, como o proprio nome já diz, o conteudo dela pode variar de acordo como você desejar, elas armazenam valor e guardam essa valor (na memoria do computador) para serem usadas na situação em que solicita. Esta informação está associada com um lugar especifico da memoria (isso feito pelo compilador). Cada variavel tem um tipo associado.

### Os tipos basicos de dados existentes em C++

|     Type      |      Bits     |      Faixa de valores         |
| ------------- |:-------------:|:-----------------------------:| 
| Char          |       8       |         -128 a 127            |
| bool          |       8       |        true ou false          |  
| int           |      32       | -2.147.483.647 a 2.47.483.647 |
| float         |      32       |   7 digitos significativos    |
| double        |      64       |    digitos significativos     |

### Definição de variaveis em C++

Para criar uma variavel, usamos um tipo especial de instrução de declaração chamada definição (definição é diferente de declaração)

```int x;```

Ao definir uma variavel, mesmo que não atibuirmos valor a ela, a mesma já possuira uma instancia apos compilada(runtime = tempo de execução), ou seja, já havera um espaço/endereço reservado para ela na memoria RAM.

É possivel declarar multiplas variaveis de mesmo tipo, exemplos:

```char x, y, z;```

Para criar um nome de variavel deve-se respeitar as seguintes regras:

Inicie suas variaveis somente com letras;

**Não use:** espaços, acentos, cedilhas, traços... somente letras e/ou underlines, exemplo:

|       Variavel       |  Certo/Errado |
| -------------------- |:-------------:|
| int x;               | certo         |
| char letra_inicial;  | certo         |
| double _y;           | certo         |
| int 9x;              | errado        |
| int x, int y;        | errado        |
| int z, float r;      | errado        |  
| char word; int z8;   | certo         |

### Compilando com -Werror e -Wall para transformar warns em erros 

```g++ -Werror -Wall nomedoprograma -o nomequevocêquiser```

### Declaração e inicialização de variaveis em C++

Quando você define uma variavel deve-se declarar/inicializar um valor para ela, o compilador informa um warning, ou seja, se você definir você precisa declarar um valor.

Observação: É importante você ficar atento algumas nomenclaturas do C++ se você veio de outras linguagem de programação, exemplos:

* **Definir** = Criar uma variavel 
* **Declarar ou inicializar** = Atribuir um valor

Exemplo de declaração de acordo com os exemplos anteriores:

```int x = 3;```

```char letra_inicial = 'a';```

```double y = 69.03;```

Outra coisa importante é você não pode declarar uma mesma variavel 2 vezes, isso nem gera warning pelo compilador e sim um Error e seu codigo não compila. Mas você pode alterar o valor da variavel.

### Algumas dicas sobre variaveis

* Toda vez que é um inteiro e você define ele sem valor especifico, ele retorna por padrão, zero.

* Char só pode ter um caractere, não importa qual ele seja. se você colocar 2 caracteres ou mais ele vai dar um Warn e considerar o ultimo caractere, ignorando todo o resto.

* Fique de olho em unsigned e signed. 

* Lembre de usar "." ao inves de virgula.

* String tem que ter o std:: na frente

* String tem que usar aspas duplas sempre "".

* Caso você definir uma string e não declarar ela vai não vai te retornar nada. Mas sempre prefira inicializala vazia de forma uniforme.

* :: quer dizer operador de resolução de escopo. 

* namespace é a forma de não escrever varias vezes um nome de uma classe. 

### Tipos de inicialização de variaveis em C++

Existem 3 formas de você inicializar(declarar ou atribuir valor) a uma variavel, a mais utilizada principalmente para quem veio de outras linguagens de programação é a INICIALIZAÇÃO DE COPIA, mas ela não deve ser usada com frequencia, pois você gasta espaço na memoria e dependendo do tamanho do seu programa ela pode gerar muita lentidão no tempo de execução.

Em muitos lugares você obterá a informação de variaveis citando: lvalue(lado esquerdo, left da declaração da variavel.) e rvalue (lado direito, inicialização, right).

lvalue vs rvalue

```int x = { 10 };``` 

**Inicialização de copia:** int x = 10;

**Inicialização Direta:** int x ( 10 ); Não tão diferente da copia, quando o tipo for inteiro int

**Inicialização Uniforme:** int x { 10 }; Use sempre que possivel isso gera ganho de desempenho.

É possivel (e preferivel) inicializar uma variavel sempre que definirmos, caso não haja um valor pré-definido, inicialize de forma vazia, exemplos:

```double z {};```

```char gun = "";```

```int x();```

Para as inicializações direta e uniforme ainda podemos usar o sinal de = para separar o lvalue do rvalue, exemplo: double z = { 36.09 };, isso continua sendo uniforme mesmo tendo igual. 



#--------------------------------------7º Aula--------------------------------------#  

### Operadores em C++

Apesar de ainda não usarmos todos os operadores que veremos nesse topico, é importante falarmos deles logo no inicio para já termos uma ideia quando usarmos futuramente.

Alguns já vimos e isso facilitara a compreensão dos demais.

### Operadores aritimeticos:

|     Operadores      |      Syntax     | 
| ------------------- |:---------------:|
| Adição unaria | +a |
| Adição | a + b |
| Incremento pré-fixado | ++a |
| Incremento pós-fixado | a++ |
| Atribuição por adição | a += b |
| Subtração unaria | -a |
| Subtração | a - b |
| Decremento pré-fixado | --a |
| Decremento pós-fixado | a-- |
| Atribuição por subtração | a -= b|
| Multiplicação | a * b |
| Atribuição por multiplicação | a *= b |
| Divisão | a / b |
| Atribuição por divisão | /= b |
| Modulo (resto) | a % b |
| Atribuição por módulo (resto) | a %= b |

### Operadores comparativos:

|     Operadores      |      Syntax     | 
| ------------------- |:---------------:|
| Menor que | a < b |
| Menor ou igual que | a <= b |
| Maior que | a > b |
| Maior ou igual que | a >= b |
| Diferente de | a != b |
| Igual a | a == b | 
| Não logico | !a | 
| E logico | a && b |
| Ou logico | a pipe pipe b |
| Deslocamento a esquerda | a << b | 
| Atribuição de deslocamento a esquerda | a <<= b |
| Deslocamento a direita | a >> b |
| Atribuição de deslocamento a direita | a >>= b |

### Operadores logicos sobre bits:

|     Operadores      |      Syntax     | 
| ------------------- |:---------------:|
| Complemento | ~a |
| E | a & b | 
| Atribuição por e | a &= b |
| Ou | a pipe b |
| Atribuição por ou | a pipe= b |
| Ou exclusivo | a ^ b |
| Atribuição por ou exclusivo | a ^= b |  

### Outros operadores: 

|     Operadores      |      Syntax     | 
| ------------------- |:---------------:|
| Atribuição | a = b |
| Chamada de função | a() |
| Elemento de arranjo | a[] | 
| De referencia | *a | 
| Referencia | &a |
| Membro de ponteiro | a -> b |
| Membro de identificador | a.b |
| De referencia de membro de identificador | a.*b
| De-referencia de membro de ponteiro | a ->* b |
| Conversão de tipo de dados | (tipo) a |
| Virgula | a , b |
| Condição ternaria | a ? b : c |
| Resolução de escopo | a :: b |
| Tamanho de | sizeof a | 
| Identificador de tipo | typeid (tido de dado) |



#--------------------------------------8º Aula--------------------------------------# 

### Funções

Quando queremos resolver um problema, em geral tentamos dividi-lo em subproblemas
mais simples e relativamente independentes, e resolvemos os problemas mais simples
um a um. Uma função cria uma maneira conveniente de encapsular alguns detalhes de
"processamento", ou seja, como algum resultado é obtido.

Criando funções, um programa C++ pode ser estruturado em partes relativamente
independentes que correspondem as subdivisões do problema. Funções como: cin.get(),
sqrt() , são funções de uma biblioteca padrão (do C++ ). Você não sabe como elas
foram escritas, mas pode saber como utilizá-las.

Ou seja, você sabe o nome das funções e quais informações específicas você deve
fornecer a elas (valores que devem ser passados para as funções) para que a função
produza os resultados esperados. Quando nos referirmos a uma função neste texto
usaremos a maneira frequentemente utilizada que é o nome da função seguido de () .
As funções - como variáveis - requerem nomes; as mesmas regras aplicáveis aos nomes
de variáveis também se aplicam a nomes de funções (sequência de letras ou dígitos
numéricos, mas não iniciando com um dígito; nenhum caractere especial, exceto o
sublinhado).

**Hello World só que em forma de função:**

```#include <iostream>```

```using namespace std;```

```// criamos a função```

```void minha_funcao(){```

```cout << "Olá, mundo!\n";```

```}```

```main(){```

```// chamamos a função```

```minha_funcao();```

```}```

### Tipos de funções em C++

O tipo de uma função está diretamente relacionado ao tipo de retorno
da função. Funções tipo void não tem e não devem ter retorno.

```void minha_funcao(){```

```std::cout << “Eu sou uma função” << ‘\n’;```

```return 0; // erro```

```}```

Mas todos os tipos que podemos atribuir à variáveis também são
atribuíveis à funções: int, std::string, float, bool e void.

As mesmas regras para criação de nomes de variáveis se aplicam a
criação para nomes de função. 

Parâmetros de funções são valores que devem ser passados para ela.

```#include <iostream>```

```using namespace std;```

```// criamos a função```

```int soma( int x, int y ){```

```return x + y;```

```}```

```int main(){```

```// chamamos a função```

```cout << soma(3, 6) << ‘\n’```

```return 0;```

```}```

Funções da biblioteca padrão: STL(Standard Template Library) do C++ e de outras bibliotecas.
Vamos conhecer algumas como:

Converter para MAIÚSCULA: toupper()

```#include <iostream>```

```int main(){```

```char a = 'a';```

```std::cout << a << '\n';```

```std::cout << toupper( a ) << '\n';```

```a = toupper( a );```

```std::cout << a << '\n';```

```return 0;```

```}```

E entre outras como: tolower(), abs(), isalpha(), isdigit(), … que veremos ao decorrer do curso e quando vermos sobre cabeçalhos.

### Funções

* Toda função int deve ter um return de pelo menos 0. 

* Existem varios jeitos de escrever uma função. Opite sempre pelo jeito que economiza mais.  

* Para quebrar linha é so usar **\n**

* toupper só funciona com char.

* Quando você usa toupper ele vai primeiro jogar o caractere para a tabela ascii. 

### Prototipos 

Protótipos de funções, são utilizados para facilitarmos o trabalho do compilador e o
mesmo gerar um binário sem “buracos”.

Código binário gerado COM “buracos”:

100111       11100   10000  10000          100000
100011   101000  1000101

Código binário gerado SEM “buracos”:

01010000 01110010 01101001 01101101 01100101 01101001 01110010 01101111
01010100 01100101 01110010 01100011 01100101 01101001 01110010 01101111 

Usando prototipos nós damos mais velocidade para nossa aplicação. 

**Exemplo de uma função com protótipo:**

```#include <iostream>```

```int produto( int x, int y );```

```int main(){```

```std::cout << "O produto de 369 x 936 é: " << produto(369, 936) << '\n';```

```return 0;```

```}```

```int produto( int x, int y ){```

```return x * y;```

```}```

Uma dica de boa prática é indicar somente o tipo das variáveis passadas. 



#--------------------------------------9º Aula--------------------------------------# 

### Cabeçalhos

O número de cabeçalhos a serem usados em um programa é uma função de muitos fatores.
Muitos desses fatores têm mais a ver com o modo como os arquivos são manipulados no
sistema do que com o C++.

#### Adicionando seu código em bibliotecas

As bibliotecas criadas por você mesmo precisam estar entre “aspas duplas”, somente as do sistema que usa-se < >.

```#include <iostream>```

```#include "quadrado.h"``` // como já vimos as extensões de biblioteca também pode ser .hpp, .hh, …

Exemplo:

// main.cpp

```#include <iostream>```

```#include "quadrado.h"```

```int main(){```

```std::cout << "O produto de 9 x 3 é: " << produto(9, 3) << '\n';```

```]```

```return 0;```

```}```

```// quadrado.h```

```int produto( int x, int y ){```

```return x * y;```

```}```

### Caminho das bibliotecas do sistema

As bibliotecas do sistema ficam no caminho: /usr/include/

Ou seja se quisermos encontrar o arquivo que possuem a biblioteca <iostream>, basta pesquisarmos nesse diretório informado, exemplo:

```find /usr/include/ -name “iostream.h”```

Como essa biblioteca é padrão do C++, geralmente ela também pode estar o caminho das bibliotecas já inclusas pelo compilador, rode o comando: no diretório do compilador. Para descobrir

```cpp -x c++ -v```

// Ou

```find /usr/lib/gcc/x86_64-pc-linux-gnu/10.2.0/ -name "iostream"```

Para saber se o arquivo conteém, por exemplo, a instrução cout que usamos, rode:

```find /usr/lib/gcc/x86_64-pc-linux-gnu/10.2.0/ -name "iostream" -exec grep 'cout' {} \;```

Os comandos: cpp e c++ são links simbólicos para o comando g++ que por sua vez também linka para outro arquivo, mas todos em resumo são o mesmo binário.

Você também pode descobrir quais bibliotecas o binário que você criou usa, exemplo de comando:

```ldd nome_do_binario```

Existem outras formas, mas falaremos mais sobre isso quando abordarmos: debug

### Compilando multiplos arquivos

Quando usamos protótipos, geralmente separamos o protótipo em um arquivo.h e a execução da função separamos em um arquivo.cpp de mesmo nome. Ou seja, o nosso código ficaria assim em resumo:

**main.cpp**

```#include <iostream>```

```#include "quadrado.h"```

```int main(){```

```std::cout << "O produto de 9 x 9 é: " << produto(9, 9) << '\n';```

```return 0;```

```}```

```quadrado.h```

```int produto( int , int );```

```quadrado.cpp```

```int produto( int x, int y ){```

```return x * y;```

```}```

```E compilamos somente os .cpp:```

```g++ main.cpp quadrado.cpp -o binario_final```

```./binario_final```

Em alguns casos precisamos evitar de duplicar a inclusão do .h quando necessário indicar em vários arquivos, e isso veremos quando falarmos sobre diretivas.

### Resumindo

* Cabeçalhos é onde fica os prototipos

* Vai ter um outro arquivo .cpp para colocar a função que já foi criada o prototipo no cabeçalho

* Main cpp é onde fica apenas a função main

* Para usar a função devemos no main.cpp incluir nossa biblioteca de prototipo e quando for compilar, compilar o main e o codigo que completa o prototipo. 



#--------------------------------------10º Aula--------------------------------------#

### Constantes em C++

Em C++ , além de variáveis, nós podemos usar também números ou caracteres cujos valores não mudam. Eles são chamados de CONSTANTES. Constantes não são associados a lugares na memória. Assim como variáveis, constantes também têm tipos.

Uma constante pode ser do tipo int, char , etc.

**Forma literal - Utilizando a palavra chave const**

```const hello = "Hello, literal constant!";```

**Como Macros**

Para declarar uma constante em C usa-se o identificador define com tralha # na frente dele, e é definido logo depois do cabeçalho fora das funções. Geralmente usa-se palavras em MAIÚSCULAS sem acento, sem c cedilha, sem traços, ...

**Exemplo de uso de constantes em C++:**

```#define HELLO "Hello, macro constant!"```

Essa prática de declarar constantes como Macros é uma prática utilizada na linguagem C. De acordo com o histórico de erros em programas, percebeu-se que a maioria estava associada à essas constantes como macro. Logo, evite de usar constante como macros.

**Vejamos um exemplo agora que engloba as duas formas:**

```#include <iostream>```

```#include <string>```

```#define HELLO "Hello, constant!"```

```using namespace std;```

```int main(){```

```const string hello = "Hello constant, again!";```

```cout << "Constant Macro HELLO: " << HELLO << endl;```

```cout << "Constant literal hello: " << hello << endl;```

```return 0;```

```}```

### Outros tipos de escape

Aproveitando que usamos um exemplo com newline , vamos conhecer outros códigos de
escape de caractere único . Existem diversos, vamos mostrar todos e uma breve
descrição do que cada um faz:

|Código de Escape | Descrição |
|-----------------|:---------:|
\n | nova linha |
\r | retorno de carro |
\t | tab |
\v | vertical tab |
\b | backspace |
\f | form feed (page feed) |
\a | alert (beep) | 
\\' | aspas simples (') |
\\" | aspas duplas (") |
\\? | interrogação (?) |
\\\ | barras invertidas (\\) |

### Resumindo

* Não da para mudar o valor de uma constante se a mesma já tiver sido definida e declarada

* Evitar usar o modo MACRO de definição de constantes

* Constantes não são associadas a lugares na memoria

* Declarar constantes melhora o desempenho do programa

* MACRO auto identifica o tipo da constante, a forma literal não.



#--------------------------------------11º Aula--------------------------------------#

### Conversão de tipos

É possível converter dados de um tipo em outro. Isso é conhecido como conversão de tipo. Existem
dois tipos de conversão de tipo em C++.

**I.** Conversão implícita

**II.** Conversão explícita (também conhecida como Type Casting)

### Conversão implícita

A conversão de tipo feita automaticamente pelo compilador é conhecida como conversão de tipo
implícita. Esse tipo de conversão também é conhecido como conversão automática. Exemplo de conversão implícita:

```double d = 3.96;```

```int i = d;```

```char a = 'a';```

```std::cout << "Valor de d: " << d << '\n';```

```std::cout << "Valor de i: " << i << '\n';```

```i = a + i;```

```std::cout << "Valor de a + i: " << i << '\n';```

Como vimos no exemplo acima, a conversão de um tipo de dados para outro está sujeita à perda de dados. Isso acontece quando dados de um tipo maior são convertidos em dados de um tipo menor.

### Conversão explícita de C ++

Quando o usuário altera manualmente os dados de um tipo para outro, isso é conhecido como conversão
explícita . Existem 2 formas principais de usar a conversão explícita em C++. São elas:

Fundição do tipo C. Como o nome sugere, este tipo de fundição é herdada da linguagem C . Exemplos:
int i, j;

```double d = 9.87;```

```i = (int)d; // notação “cast”```

```j = int(d); // notação funcional```

### Operadores de conversão de tipo

Além desses dois tipos de notação, há também quatro operadores para conversão de tipo. Eles são conhecidos como operadores de conversão de tipo. Eles são:

* static_cast → usa-se quando deseja converter tipos de dados numéricos.
* dynamic_cast → geralmente usado para conversões com ponteiros de classe.
* const_cast → use-se quando é necessário converter tipos entre constantes e variáveis.
* reinterpret_cast – similar ao static_cast, mas não recomendado, pois nem todos os compiladores o
reconhecem.

A sintaxe de uso dele consiste em: nome_cast< novo_tipo > ( expressão )

Exemplo de static_cast:

```double d = 3.14;```

```int i = static_cast<int>(d);```

```d = static_cast<double>(i);```

Exemplo de const_cast:

```double d = 3.14;```

```const int pi = const_cast<double&>(d); // Atenção para essa linha.```

Para os exemplos de uso de dynamic_cast e reinterpret_cast precisaríamos abordar sobre classes e ponteiros, que veremos mais à frente.

Nem todos os tipos podem ser convertidos, string para double, por exemplo, haverá erro ao compilar. Para saber o tipo de uma variável usa-se typeid().



#--------------------------------------12º Aula--------------------------------------#

### Arrays em C++

O array é uma estrutura de dados indexada, que pode armazenar uma determinada quantidade de valores do mesmo tipo. Os dados armazenados em um array são chamados de itens do array.

Em outras palavras, um Array pode ser definido como: Um conjunto de variáveis.

```int exemplo[5] = {0, 1, 2, 3, 4}```

Ou seja, exemplo é o nome do Array e ele pode possui 5 variáveis dentro dele que será alocada pelo número da posição, iniciando da posição 0 (zero). Como código C++, isso seria representado por:

Poderia ser int, char, string,... Para esse exemplo vamos usar string

```// Esse array de nome 'foo' é do tipo 'string' e possui 5 posições```

```string foo[5];```

**Um exemplo básico de um array seria:**

```#include <iostream>```

```int main(){```

```std::string meuarray[3] = {"Elis", "Tim", "James"};```

```std::cout << meuarray[1 + 1] << '\n';```

```return 0;```

```}```

**Exemplo de Array bidimensional (Um tipo de Multidimensional):**

```int multiarray[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};```

```std::out << multiarray[1][2] << ‘\n’;```

**forma simplificada, mas mais difícil de notar**

```int x[3][4] = {0, 1 ,2 ,3 ,4 , 5 , 6 , 7 , 8 , 9 , 10 , 11}```

### Passando Arrays para função em C++

Um array por padrão é um ponteiro, que veremos mais à frente. Se imprimirmos um array sem informar o elemento, será informada a localização dele na memória:

```int arr[] = {1, 22, 33 , 44, 55, 66};```

```std::cout << "Imprimindo o array: " << arr << '\n';```

**Podemos alterar ou incluir o elemento à um array após declará-lo:**

```arr[2] = 99;```

```std::cout << "Imprimindo o array de posição 2: " << arr[2] << '\n';```

**Passando um array para uma função:**

```void recebe_array( int array_param[] ){```

```array_param[2] = 88;```

```}```

```int main(){```

```int arr[] = {1, 11, 22 , 33, 44, 55};```

```std::cout << "O elemento de posição 2 ANTES de chamar função é: " << arr[2] << '\n';```

```recebe_array( arr );```

```std::cout << "O elemento de posição 2 DEPOIS de chamar função é: " << arr[2] << '\n';```

```return 0;```

```}```

Para se medir o tamanho de um array utilizamos a função sizeof() e para imprimir todos elementos, veremos quando falarmos sobre loop. Também fique atento à semântica.



#--------------------------------------13º Aula--------------------------------------#

### Inputs 

Em determinadas ocasiões, deseja-se coletar dados , para isso usamos o std::cin redirecionando para uma variável:

```char letra {};```

```std::cout << "Informe uma letra: ";```

```std::cin >> letra;```

```std::cout << "A letra que você digitou foi: " << letra << "\n";```

No entanto, o operador >> sobrecarregado ignora tais caracteres. Para englobar essas situações, C++ oferece o uso da função-membro getline.

Esta função remove o delimitador do stream (isto é, lê o caractere e o descarta) e armazena o mesmo em uma variável definida pelo usuário.

Para captar uma palavra ou frase, precisamos utilizar a função getline definir nosso char como array, ou uma string com getline de 2 formas. Vamos ver exemplos na prática.



#--------------------------------------14º Aula--------------------------------------#

### Condições

Nesse tópico iremos ver conceitos de if, else, else if e case

Condições são expressões que avaliam um valor booleano - um valor verdadeiro ou falso (true e false são palavras-chave em C++, representando os dois valores possíveis de uma expressão ou variável booleana).

Condições simples envolvem dois operandos, cada um dos quais pode ser uma variável ou um valor literal, e um operador, normalmente um operador de comparação.

Os operadores de comparação são mostrados abaixo

| Operador | Descrição|
|----------|:---------|
| == | Verdadeiro se e somente se operando da esquerda for igual ao operando à direita |
| != | True se e somente se operando da esquerda não for igual ao operando à direita |
| > | True se e somente se o operando esquerdo for maior que o operando direito |
| < | True se e somente se operando a esquerda for menor que o operando direito|
| >= | True se e somente se o operando esquerdo for maior ou igual ao operando direito |
| <= | True se e somente se operando esquerdo for menor ou igual que operando direito |

### switch case break

A instrução switch fornece um mecanismo conveniente para executar um dos vários fragmentos possíveis de código, dependendo do valor de uma variável ou expressão integral.

Um exemplo típico que ilustra o uso da instrução switch é manipular uma seleção de menu. Em uma interface baseada em texto, um programa pode apresentar ao usuário um menu de opções e solicitar ao usuário que selecione uma opção.

O switch só deve ser usado para comparações exatas.

```
#include <iostream>
using namespace std;

main(){
	// o número máximo de 10 algarismos será: 2147483647
	int num;
	cout << "Digite um número: " << endl;
	cin >> num;
	// início das condições
	switch(num){
		case 0:
			cout << "O número é zero" << endl;
			break;
		case 1:
			cout << "O número é 1" << endl;
			break;
		default:
			cout << "REVELAÇÃO DO NÚMERO: " << num << endl;
			break;
 	}
}
```

### Operador Ternário

O operador ternário fornece uma maneira compacta e conveniente de escrever uma expressão que produz dois valores possíveis, dependendo de uma determinada condição. A sintaxe genérica deste operador é a seguinte: condition ? expression1 : expression2 , exemplo:

```
#include <iostream>
using namespace std;

int main(){
	int num = 10;

	// Usando operador ternário
	num > 10 ? cout << "sim" : cout << "não";
	cout << endl;

	// Ou
	cout << ( num > 10 ? "SIM" : "NÃO" ) << ‘\n’;

	return 0;
}
```

### Comparação

```
#include <iostream>

int main(){

 int num = 9;
 if( num > 9 ){
 std::cout << "IF: 'num' é maior que 9!" << '\n';
 }else{
 std::cout << "ELSE: 'num' é MENOR ou IGUAL que nove." << '\n';
 }
 switch( num ){
	 // Não usa-se parênteses aqui
	 case 1 ... 8:
		std::cout << "SWITCH: 'num' é MENOR que 9!" << '\n';
		// obrigatório em todos os cases, caso contrário imprimirá todos
		break;
	 // Essa range tem de começar com um número maior que oito
	 case 10 ... 1000:
	 	std::cout << "SWITCH: 'num' é MAIOR que nove." << '\n';
	 	break;
	 default:
		std::cout << "SWITCH: 'num' é IGUAL a nove." << '\n';
		break;
 }
 std::cout << ( num > 9 ? "TERNARY: É maior que 9!" : "TERNARY: É MENOR ou IGUAL que nove." ) << '\n';
 return 0;
}
```