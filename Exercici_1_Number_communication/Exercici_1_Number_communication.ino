/*********************************************************************
 **                                                                 **       
 **                          TÏTOL: Number Communication            ** 
 **                                                                 **
 **                                                                 ** 
 **  Nom: Salva Ramírez                          Data: 23/04/2017   **
 ********************************************************************/
//************************ INCLUDE ***********************************


//*********************** VARIABLES **********************************

long num;

//************************* SETUP ************************************

void setup() {      // configura el final de sortida
  
  // initialize serial:
  Serial.begin(9600);
  Serial.println("Entrar un numero?");
}


//************************** LOOP ************************************

void loop() {                    // inicia el bucle del programa
  
while (Serial.available() > 0) {

    // look for the next valid integer in the incoming serial stream:
    num = Serial.parseInt(); 
    Serial.print("El num = 4.00");
    Serial.print(num);
    
    // look for the newline. That's the end of your sentence:
    if (Serial.read() == '\n') { 
      
      if ( num % 2 == 0){
        Serial.println(" es parell.");
      }
      else{
        Serial.println(" es imparell.");
      }
      Serial.println("");
      Serial.println("Entrar un numero?");
    }
  }
}





//************************ FUNCIONS **********************************
