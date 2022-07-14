# Projeto Fonte

Como primeiro trabalho da disciplina Eletrônica Para Computação, desenvolvemos e montamos uma fonte de tensão ajustável, que tem a tomada como fonte de tensão fornecendo uma corrente alternada de 127 Volts, que será retificada e resultará em uma corrente contínua, fornecendo uma faixa de tensão idealmente entre 3 e 12 volts.

## Alunos
- #### Pedro Calciolari Jardim Nº USP: 11233668
- #### João Pedro de Matos Deus Nº USP:
- #### Henrique Souza Marques Nº USP: 11815722
- #### Marcos Nº USP: 

## Lista de Componentes

| Componente       | Valor (R$) | Quantidade |
|------------------|:----------:|:----------:|
| Transformador    |    42,30   |      1     |
| Potenciômetro 10k|     9,90   |      1     |
| Capacitor 470 uF |    0,45    |      1     |
| LED              |     0,27   |      1     |
| Diodo Zener      |     0,22   |      1     |
| Transistor       |     2,25   |      5     |
| Resistor(1K e 5K)|    0,93    |      11    |
| Diodo            |     1,28   |      8     |
| Total:           |      57,60 |            |

## Explicação dos  Componentes do Circuito

-  #### Transformador:
    Esse componente eletrônico é responsável por reduzir a tensão alternada da tomada, que servirá como alimentação do nosso circuito, redução que pode ser controlada através da relação entre a quantidade de bobinas (enrolamento dos fios) que recebem a tensão e que fornecem a tensão transformada. Por exemplo, um transformador que recebe 180V por meio de 100 bobinas, entrega 1.8V por bobina destinada ao fornecimento de tensão ao circuito, ou seja, 10 bobinas fornecem 18V de tensão alternada.

-  #### Ponte de Diodos:
    Apesar de reduzida pelo transformador, a tensão de entrada do nosso circuito ainda é alternada, ou seja, possui valores positivos e negativos. Dessa maneira, é trivial imaginarmos que seja necessário alterar esse cenário, visto que queremos um circuito que funcione consistentemente, de maneira a entregar uma corrente continua, como é exigido por grande parte dos aparelhos eletrônicos atualmente. Para isso, precisamos retificar a onda que resulta do transformador, ou seja, fazer com que esta tensão seja a todo momento positiva, apesar de ainda existir em "pulsos" (entendimento importante na discussão do próximo tópico). Nesse sentido, a ponte de diodos é um arranjo especial de 4 diodos capaz de retificar a onda e, então, entregar uma tensão sempre positiva para o restante do circuito. 
 
-  #### Capacitor em Paralelo (Ripple):
    Neste momento, o objetivo da nossa fonte é tornar a tensão (já positiva por conta do funcionamento da ponte de diodos) um pouco mais constante (pelo menos acima de 13V, valor escolhido para nosso diodo zener e que será melhor abordado no próximo tópico). Para isso, utilizamos um capacitor, componente eletrônico capaz de armazenar carga elétrica quando descarregado e fornecer carga elétrica quando carregado. Nesse sentido, quando a tensão de entrada está aumentando, o capacitor é abastecido com carga elétrica (ele "segura" a tensão em suas placas), evitando aumentos súbitos de tensão no restante do circuito. Por outro lado, quando a tensão de entrada está diminuindo, o capacitor descarrega e abastece o circuito (ele "fornece" a tensão vinda de suas placas), evitando quedas súbitas de tensão. Dessa forma, a capacidade de tornar a tensão constante é descrita pelo "Ripple", o qual basicamente indica a variação da tensão na fonte. Por exemplo, um circuito que varia sua tensão entre 11V - 9V, tendo valor médio 10V, tem ripple de 10% ([10V - 10%, 10V + 10%]).
        
-  #### Diodo Zener:
    Este componente tem objetivo bastante claro e funcionamento bem simples: quando o circuito atinge o que chamamos de "tensão zener", o componente passa a permitir a passagem de corrente, mantendo constante a tensão = "tensão zener" em seus terminais. No nosso circuito, escolhemos um zener que tem "tensão zener" igual à 13V, valor abaixo do limite inferior do Ripple e que, dessa forma, conduz corrente sempre, mantendo, a partir de então, a tensão igual à 13V sempre.
        
-  #### Potenciômetro:
    O potenciômetro é a peça do circuito que permite mudanças na tensão (queremos uma fonte de tensão variável). Seu funcionamento é bem simples: basicamente, potenciômetros são resistores com resistência alterável e que, consequentemente, consomem tensão de forma também alterável. Sendo assim, quando se aumenta a resistência fornecida pelo potenciômetro, há aumento no consumo de tensão e, então, diminui-se a tensão de saída. No outro sentido, quando se diminui a resistência fornecida pelo potenciômetro, há diminuição no consumo de tensão e, então, aumenta-se a tensão de saída.
        
-  #### Transistor:

## Componentes e Valores Escolhidos

-   #### Transformador:
    Precisamos transformar a tensão de 127 volts que vem da tomada para os 12 volts que teremos na saída, sabemos que a razão de saída de um transformador é dada por:
    
    $ R = \frac{V_{out}}{V_{in}}$
    
    $ R = \frac{12}{127} = 0,1 $
    
    Por isso foi escolhido um transformador de XXXXXXXXXXXXX

- ### Capacitor:
    Queremos um ripple de 10%, para isso temos a fórmula:
    
    $ V_{ripple} = \frac{i}{2 f C} $
    
    Cálculo de i, a corrente total:
    
    $ i = i_{carga} + i_{RZener} + i_{pot} $

    Calculamos cada termo individualemente:
    - $ i_{carga} = \frac{V_{zener} - V_{be}}{R_{carga}} = XXX $
    - $ i_{RZener} = \frac{V_{medio} - V{zener}}{1000} = XXX $
    - $ i_{pot} = \frac{V_{zener}}{X} = XXX $
    
    Logo:
    - $ i = i_{carga} + i_{RZener} + i_{pot} = XXXX $
    
    Voltando à fórmula do ripple:
    $ C = \frac{i}{2 f V_{ripple}} = ETC $


## Circuito no Falstad

![image](https://user-images.githubusercontent.com/102276547/174796910-df1ef954-a1ed-43c9-93b9-1061216939ce.png)

## Esquemático PCB

## Imagem PCB no EAGLE/PROTEUS

## Circuito na Protoboard

## Vídeo com simulação e explicação




![image](https://user-images.githubusercontent.com/102276547/174797036-baeecbea-02c2-4191-859d-454221ea3726.png)

![image](https://user-images.githubusercontent.com/102276547/174797102-41c3a54f-6801-4991-ac2f-5616e5b8c88a.png)
