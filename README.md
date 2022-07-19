# Projeto Fonte

Como primeiro trabalho da disciplina Eletrônica Para Computação, desenvolvemos e montamos uma fonte de tensão ajustável, que tem a tomada como fonte de tensão fornecendo uma corrente alternada de 127 Volts, que será retificada e resultará em uma corrente contínua, fornecendo uma faixa de tensão idealmente entre 3 e 12 volts.

## Alunos
- #### Pedro Calciolari Jardim Nº USP: 11233668
- #### João Pedro de Matos Deus Nº USP: 12677492
- #### Henrique Souza Marques Nº USP: 11815722
- #### Marcos Patrício Nogueira Filho Nº USP: 11819063

## Lista de Componentes

| Componente        | Valor unidade (R$) | Quantidade |
|-------------------|:------------------:|:----------:|
| Transformador     |        42,30       |      1     |
| Potenciômetro 10k |         9,90       |      1     |
| Capacitor 1000 uF |         0,88       |      1     |
| LED               |         0,27       |      1     |
| Diodo Zener       |         0,22       |      1     |
| Transistor        |         0,45       |      5     |
| Resistor(1K e 2K) |         0,14       |      10    |
| Diodo             |         0,16       |      8     |
| Total:            |        58,50       |            |

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
        
-  #### Transistor NPN:
    Este componente foi utilizado apenas para: (i) levar a tensão de saída do potenciômetro (máximo de 13V, igual a tensão do zener) ao aparelho eletrônico que queremos carregar; (ii) finalizar a regulação da tensão de saída. Neste sentindo, como conectamos a saída do zener à base do transistor e o aparelho ao emissor, temos uma queda de tensão de aproximadamente 0.7V no transistor (entre a base e o emissor, temos uma pequena resistência interna, a qual é capaz de consumir esta tensão) e, portanto, temos no máximo 12.3V oferecidos. 

## Cálculos e Valores Escolhidos


![calculo_ripple](https://user-images.githubusercontent.com/102276547/179756590-b95e3de2-a0bb-438e-adfc-7f13184774d8.jpg)


## Circuito no Falstad

![circuito_falstad](https://user-images.githubusercontent.com/102276547/179159795-e557efe3-d589-4059-b245-5d0f787a3511.png)

[Link para o circuito no Falstad](https://tinyurl.com/24lqdhxd)

Observação: Temos 2 resistores de 2K em série pois eram os que tinhámos disponíveis na hora da montagem, podendo ser substituído por um de 4K.

## Esquemático PCB

![esquematico](https://user-images.githubusercontent.com/102276547/178897100-271a314d-80fd-48f8-80b7-221d812a848e.png)

## PCB no EAGLE

![PCB](https://user-images.githubusercontent.com/102276547/178897141-8f8c4519-6c07-4e2f-bd0f-da899dc72a5a.png)

## Vídeo com Explicação da Fonte na Protoboard 

[Link do Drive com o vídeo explicativo](https://drive.google.com/file/d/1tWaukdcJ94E8UQUbEo9vfpB_710ZdAUS/view?usp=sharing)

## Agradecimentos

Agradecemos ao Prof. Eduardo do Valle Simões pela oportunidade do desenvolvimento do trabalho e pelos conhecimentos compartilhados ao longo do semestre.
