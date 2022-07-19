#include <Ultrasonic.h>
#include <PWM.h>

#define MOTORDIR1 10
#define MOTORDIR2 11
#define MOTORESQ1 9
#define MOTORESQ2 6

//Define os pinos para o trigger e echo
#define TRIGG_FRONT 5
#define ECHO_FRONT 4
#define TRIGG_DIR 3
#define ECHO_DIR 2
#define TRIGG_ESQ 7
#define ECHO_ESQ 8

#define EM_FRENTE 1
#define VIRAR_ESQUERDA 2
#define VIRAR_DIREITA 3
#define DAR_RE 4

#define POTDIR 255
#define POTESQ 230

int aux;
int led;
//int counter;
//int delayValue;

//Inicializa o sensor nos pinos definidos acima
Ultrasonic sensorFront(TRIGG_FRONT, ECHO_FRONT);//sensor frontal
Ultrasonic sensorDir(TRIGG_DIR, ECHO_DIR);//sensor da direita
Ultrasonic sensorEsq(TRIGG_ESQ, ECHO_ESQ);//sensor da esquerda

void setup() {
  pinMode(12, OUTPUT);
  pinMode(MOTORESQ1, OUTPUT);
  pinMode(MOTORESQ2, OUTPUT);
  pinMode(MOTORDIR1, OUTPUT);
  pinMode(MOTORDIR2, OUTPUT);
  //counter = 1;
  aux = 1;
}

int detecColli(){
  //retorna qual sensor detectou um obstáculo, em ordem de importância. Colisões frontais são consideradas mais importantes
  if(sensorFront.read() < 20){//caso haja um obstáculo frontal
    if(sensorDir.read() < 25 && sensorEsq.read() > 25){//se a direita estiver obstruída e a esquerda não, vire à esquerda
      aux = VIRAR_ESQUERDA;
      return 1;
    }
    if(sensorEsq.read() < 25 && sensorDir.read() > 25){//se a esquerda estiver obstruída e a direita não, vire à direita
      aux = VIRAR_DIREITA;
      return 1;
    }
    if(sensorDir.read() < 25 && sensorEsq.read() < 25){//se ambas estiverem obstruídas, dê ré
      aux = DAR_RE;
      return 1;
    }

    aux = random(2, 4);//se nenhuma estiver obstruída, escolha uma direção aleatoriamente
    return 1;
  }else{//se não houver obstáculo frontal
    if(sensorDir.read() < 25){//mas a direita estiver obstruída, vire à esquerda
      aux = VIRAR_ESQUERDA;
      return 2;
    }
    if(sensorEsq.read() < 25){//mas a esqueda estiver obstruída, vire à direita
      aux = VIRAR_DIREITA;
      return 3;
    }

    aux = EM_FRENTE;//se nenhuma estiver obstruída, siga em frente
    return 0;
  }


}

void praFrente(){
  analogWrite(MOTORESQ1, POTESQ);
  analogWrite(MOTORESQ2, 0);
  analogWrite(MOTORDIR1, POTDIR);
  analogWrite(MOTORDIR2, 0);
}

void freiar(){
  analogWrite(MOTORESQ1, 0);
  analogWrite(MOTORESQ2, 0);
  analogWrite(MOTORDIR1, 0);
  analogWrite(MOTORDIR2, 0);
}

void virarEsq(){//cod 2
  analogWrite(MOTORESQ1, POTESQ);
  analogWrite(MOTORESQ2, 0);
  analogWrite(MOTORDIR1, 0);
  analogWrite(MOTORDIR2, POTDIR);
}

void virarDir(){//cod 3
  analogWrite(MOTORESQ1, 0);
  analogWrite(MOTORESQ2, POTESQ);
  analogWrite(MOTORDIR1, POTDIR);
  analogWrite(MOTORDIR2, 0);
}

void marchaRe(){
  int desv = random(-1, 2);
  analogWrite(MOTORESQ1, 0);
  analogWrite(MOTORESQ2, POTESQ+40*desv);
  analogWrite(MOTORDIR1, 0);
  analogWrite(MOTORDIR2, POTDIR);
}

void loop() {
  //mudanças em aux para testar as funções existentes
/*  switch(counter){
    case 1:
      aux = 1;
      delayValue = 4000;
    break;
    case 2:
      aux = 2;
      delayValue = 400;
    break;
    case 3:
      aux = 3;
      delayValue = 700;
    break;
    case 4:
      aux = 4;
      delayValue = 2500;
    break;

    default:
      aux = 0; delayValue = 50;
  }*/

  switch(aux){
    case 0:
      freiar();
      break;
    case 1:
      praFrente();
      break;
    case 2:
      virarDir();
      break;
    case 3:
      virarEsq();
      break;
    case 4:
      marchaRe();
      break;
    default:
      aux = 0;
      break;
  }
  //digitalWrite(12, LOW);
  //if(sensorDir.read() < 15) digitalWrite(12, HIGH);
  digitalWrite(12, LOW);
  led = detecColli();
  if(led)digitalWrite(12, HIGH);
  
}
