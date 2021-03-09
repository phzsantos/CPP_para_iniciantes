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

  