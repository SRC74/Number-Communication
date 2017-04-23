/*********************************************************************
 **                                                                 **       
 **                          TÏTOL: Number Communication            ** 
 **                                                                 **
 **                                                                 ** 
 **  Nom: Salva Ramírez                          Data: 23/04/2017   **
 ********************************************************************/
//************************ INCLUDE ***********************************


//*********************** VARIABLES **********************************

int estat = 0;
int opcio = 0;
float r1, r2;
long num;

//************************* SETUP ************************************

void setup() {      // configura el final de sortida
  
  
  Serial.begin(9600);
  imprimirMenu();
}


//************************** LOOP ************************************

void loop() {                    // inicia el bucle del programa
  nums = 0;
  num = 1;
  do{
    
  
while (Serial.available() > 0) {

 
   switch (estat)
    {
      case 0:
        opcio = Serial.parseInt(); 
        switch (estat)
        {
          case 1:
            Serial.println("*** Calcular resistencia serie i paral.lel ***");
            Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
            estat = 1;
            break;
          case 2:
            Serial.println("*** Calcular si el numero es parell o senar ***");
            Serial.println("Entrar un numero?");
            estat = 2;
            break;
          case 3:
            Serial.println("*** Calcular xifres d’un nombre ***");
            Serial.print("Calcul no disponible! El pots implementar?");
            estat = 0;
            break;
          case 4:
            Serial.println("*** Calcular salari net setmanal ***");
            Serial.println("Calcul no disponible! El pots implementar?");
            estat = 0;
            break;
          case 5:
            Serial.println("*** Calcular mida cargol ***");
            Serial.println("Calcul no disponible! El pots implementar?");
            estat = 0;
            break;
          case 6:
            Serial.println("*** Calcular suma i mitja ***");
            Serial.println("Calcul no disponible! El pots implementar?");
            estat = 0;
            break;
          default:    
            Serial.println("Has entrat una opcio incorrecta!!!");
            imprimirMenu();
            break;
        }
        break;
      case 1:
        r1 = Serial.parseInt(); 
        Serial.print("r1 = ");
        Serial.print(r1);
        Serial.print(" ohms\t");
        // do it again:
        r2 = Serial.parseInt(); 
        Serial.print("r2 = ");
        Serial.print(r2);
        Serial.println(" ohms");
    
        if (Serial.read() == '\n') 
        {
          serieparallel(r1, r2);
          estat = 0;
          imprimirMenu();
          
        }    
        break;
      case 2:
        num = Serial.parseInt(); 
        Serial.print("El ");
        Serial.print(num);
        
        if (Serial.read() == '\n')
        { 
          senpar(num);
          estat = 0;
          imprimirMenu();          
        }   
        break; 
      case 3:
        break; 
      case 4:
        break; 
      case 5:
        break; 
      case 6:
        break; 
      case 7:
        break; 
      case 8:
        break;      
      default:
        break;
    }
  }
}


//************************ FUNCIONS **********************************

void imprimirMenu()
{  
  

  Serial.println();
  Serial.println("Escull el numero del programa que es vol executar?");
  Serial.println("  1. Resistencia serie i paral.lel");
  Serial.println("  2. Numero parell o senar");
  Serial.println("  3. Xifres d’un nombre");
  Serial.println("  4. Salari net setmanal");
  Serial.println("  5. Mida cargol");
  Serial.println("  6. Suma i mitja");
  Serial.println();
}

void serieparallel(float r1f , float r2f)
{
  // variables for the results
  float rSerie, rParalel;

  rSerie = r1f + r2f;
  rParalel = (r1f * r2f) / (r1f + r2f);
  
  Serial.print("rSerie = ");
  Serial.print(rSerie);
  Serial.print(" ohms\t");
  Serial.print("rParal.lel = ");
  Serial.print(rParalel);
  Serial.println(" ohms");
}

void senpar (long numf)
{
  if ( numf % 2 == 0)
  {
    Serial.println(" es parell.");
  }
  else
  {
    Serial.println(" es imparell.");
  } 
} 




