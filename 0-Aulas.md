**Documentação do Curso:** C++ Moderno para iniciantes

**Start:** 07/03/2021

**Name:** Paulo Henrique

**Country:** Brazil


#--------------------------------------Primeira Aula--------------------------------------#

### O que irei ver no curso:

Conceitos gerais, compiladores, sintaxe, diretivas, vectores, ponteiros, strucs e exercicios.

### pré-requisistos:

Um computador de 32 ou 64 bits com Linux

### O que irei aprender:

Irei criar os meus primeiros programas, games e outros em C++ via terminal.

### Preciso saber programação para iniciar esse curso?

Não! é perfeito começar com C++. Depois de passar por C++, vai ficar tudo mais facil.



#--------------------------------------Segunda Aula--------------------------------------#

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



#--------------------------------------Terceira Aula--------------------------------------#

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



#--------------------------------------Quarta Aula--------------------------------------#

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



#--------------------------------------Quinta Aula--------------------------------------#

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



#--------------------------------------Sexta Aula--------------------------------------#

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



#--------------------------------------Setima Aula--------------------------------------#  

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



#--------------------------------------Oitava Aula--------------------------------------# 

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



#--------------------------------------Nona Aula--------------------------------------# 

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



#--------------------------------------Decima Aula--------------------------------------#

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



