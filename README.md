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
