int AnalogTensao = 0;
bool Modo = true;
int contagem = 0;

void todos(void);
void maisalto(void);

//O circuito usa funções While para definir quais leds serão
//ligados na intenção de demonstrar o volume do Input analógico
//A0. O circuito consiste em uma interpretação dos dados
//analógicos convertidos para informação digital, onde 0 é a
//tensão mínima captada por A0, e 1024 o valor máximo, repre-
//sentando 5 Volts.

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  AnalogTensao = (analogRead(A0) / 1);
  digitalWrite(0, HIGH); //Indicador de circuito ligado
  
  if (digitalRead(2) == HIGH) {
    Modo = true;
  }
  else {
    Modo = false;
  }
  
  if (Modo == false) {
    todos();
    }
  if (Modo == true) {
  	maisalto();
  }
}

void todos(void)
{
  //Utilizando o modo todos, o circuito ativa todos os LEDs
  //que tenham uma tensão menor que a aplicada no circuito em A0.
  
  Serial.println(AnalogTensao); //Debug
  
  //Ao selecionar esse modo de operação, o LED azul liga para
  //indicar o modo selecionado.
  digitalWrite(3, HIGH);
  
  //Volume baixo 1
  while (AnalogTensao >= 100) {
      digitalWrite(13, HIGH);
    	break;
  }
    while (AnalogTensao < 100) {
      digitalWrite(13, LOW);
    	break;
  }
  
  //Volume baixo 2
  while (AnalogTensao >= 200) {
      digitalWrite(12, HIGH);
    	break;
  }
    while (AnalogTensao < 200) {
      digitalWrite(12, LOW);
    	break;
  }
    
  //Volume baixo 3
  while (AnalogTensao >= 300) {
      digitalWrite(11, HIGH);
    	break;
  }
    while (AnalogTensao < 300) {
      digitalWrite(11, LOW);
    	break;
  }
    
  //Volume baixo 4
  while (AnalogTensao >= 400) {
      digitalWrite(10, HIGH);
    	break;
  }
    while (AnalogTensao < 400) {
      digitalWrite(10, LOW);
    	break;
  }
  
  //Volume médio 1
  while (AnalogTensao >= 500) {
      digitalWrite(9, HIGH);
    	break;
  }
    while (AnalogTensao < 500) {
      digitalWrite(9, LOW);
    	break;
  }
  
  //Volume médio 2
  while (AnalogTensao >= 600) {
      digitalWrite(8, HIGH);
    	break;
  }
    while (AnalogTensao < 600) {
      digitalWrite(8, LOW);
    	break;
  }
    
  //Volume médio 3
  while (AnalogTensao >= 700) {
      digitalWrite(7, HIGH);
    	break;
  }
    while (AnalogTensao < 700) {
      digitalWrite(7, LOW);
    	break;
  }
    
  //Volume alto 1
  while (AnalogTensao >= 800) {
      digitalWrite(6, HIGH);
    	break;
  }
    while (AnalogTensao < 800) {
      digitalWrite(6, LOW);
    	break;
  }
  
  //Volume alto 2
  while (AnalogTensao >= 900) {
      digitalWrite(5, HIGH);
    	break;
  }
    while (AnalogTensao < 900) {
      digitalWrite(5, LOW);
    	break;
  }
  
  //Volume alto 3
  while (AnalogTensao >= 1000) {
      digitalWrite(4, HIGH);
    	break;
  }
    while (AnalogTensao < 1000) {
      digitalWrite(4, LOW);
    	break;
  }
  
  delay(10); // Pequeno delay para melhor fluidez da simulação.
}

void maisalto()
{
  //Utilizando o modo maisalto, o circuito liga apenas o LED
  //correspondente ao maior intervalo de tensão.
  
  Serial.println(AnalogTensao); //Debug
  
  //Ao selecionar esse modo de operação, o LED azul pisca para
  //indicar o modo selecionado.
  for (contagem = 0; contagem < 10; contagem++){
    digitalWrite(3, HIGH);
    delay(10);
    digitalWrite(3, LOW);
  	}
  
  //Volume baixo 1
  while (AnalogTensao >= 100) {
    if (AnalogTensao <= 200) {
      digitalWrite(13, HIGH);
    break;
    }
    else {
      digitalWrite(13, LOW);
      break;
    }
  }
  while (AnalogTensao < 100) {
      digitalWrite(13, LOW);
    	break;
  }
  
  //Volume baixo 2
  while (AnalogTensao >= 200) {
    if (AnalogTensao <= 300) {
      digitalWrite(12, HIGH);
    break;
    }
    else {
      digitalWrite(12, LOW);
      break;
    }
  }
  while (AnalogTensao < 200) {
      digitalWrite(12, LOW);
    	break;
  }
  
  //Volume baixo 3
  while (AnalogTensao >= 300) {
    if (AnalogTensao <= 400) {
      digitalWrite(11, HIGH);
    break;
    }
    else {
      digitalWrite(11, LOW);
      break;
    }
  }
  while (AnalogTensao < 300) {
      digitalWrite(11, LOW);
    	break;
  }
    
  //Volume baixo 4
  while (AnalogTensao >= 400) {
    if (AnalogTensao <= 500) {
      digitalWrite(10, HIGH);
    break;
    }
    else {
      digitalWrite(10, LOW);
      break;
    }
  }
  while (AnalogTensao < 400) {
      digitalWrite(10, LOW);
    	break;
  }
  
  //Volume médio 1
  while (AnalogTensao >= 500) {
    if (AnalogTensao <= 600) {
      digitalWrite(9, HIGH);
    break;
    }
    else {
      digitalWrite(9, LOW);
      break;
    }
  }
  while (AnalogTensao < 500) {
      digitalWrite(9, LOW);
    	break;
  }
  
  //Volume médio 2
  while (AnalogTensao >= 600) {
    if (AnalogTensao <= 700) {
      digitalWrite(8, HIGH);
    break;
    }
    else {
      digitalWrite(8, LOW);
      break;
    }
  }
  while (AnalogTensao < 600) {
      digitalWrite(8, LOW);
    	break;
  }
    
  //Volume médio 3
  while (AnalogTensao >= 700) {
    if (AnalogTensao <= 800) {
      digitalWrite(7, HIGH);
    break;
    }
    else {
      digitalWrite(7, LOW);
      break;
    }
  }
  while (AnalogTensao < 700) {
      digitalWrite(7, LOW);
    	break;
  }
    
  //Volume alto 1
  while (AnalogTensao >= 800) {
    if (AnalogTensao <= 900) {
      digitalWrite(6, HIGH);
    break;
    }
    else {
      digitalWrite(6, LOW);
      break;
    }
  }
  while (AnalogTensao < 800) {
      digitalWrite(6, LOW);
    	break;
  }
  
  //Volume alto 2
  while (AnalogTensao >= 900) {
    if (AnalogTensao <= 1000) {
      digitalWrite(5, HIGH);
    break;
    }
    else {
      digitalWrite(5, LOW);
      break;
    }
  }
  while (AnalogTensao < 900) {
      digitalWrite(5, LOW);
    	break;
  }
  
  //Volume alto 3
  while (AnalogTensao >= 1000) {
    if (AnalogTensao <= 1020) {
      digitalWrite(4, HIGH);
    break;
    }
    else {
      digitalWrite(4, LOW);
      break;
    }
  }
  while (AnalogTensao < 1000) {
      digitalWrite(4, LOW);
    	break;
  }
  
  delay(10); // Pequeno delay para melhor fluidez da simulação.
}