/*********************************************************************
 **                                                                 **       
 **                          TÏTOL: Number Communication            ** 
 **                                                                 **
 **                                                                 ** 
 **  Nom: Salva Ramírez                          Data: 23/04/2017   **
 ********************************************************************/
//************************ INCLUDE ***********************************


//*********************** VARIABLES **********************************

const int ledPin = 13;
long numEntrat, num;
int numXifres;

//************************* SETUP ************************************

void setup() {      // configura el final de sortida
  
  // initialize serial:
  Serial.begin(9600);
  Serial.println("Entra un numero?");
}


//************************** LOOP ************************************

void loop() {                    // inicia el bucle del programa
  
while (Serial.available() > 0) {

    // look for the next valid integer in the incoming serial stream:
    numEntrat = Serial.parseInt(); 
    num = numEntrat;
    numXifres = 0;
    
    // look for the newline. That's the end of your sentence:
    if (Serial.read() == '\n') { 
      do{
        num = num / 10;
        numXifres++;
      }while (num != 0);
      Serial.print("El el numero ");
      Serial.print(numEntrat);
      Serial.print(" te ");
      Serial.print(numXifres);
      Serial.println(" xifres.");
      Serial.println("");
      Serial.println("Entra un numero? ");
    }
  }
}





//************************ FUNCIONS **********************************
