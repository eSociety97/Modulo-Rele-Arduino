/*************************************************Capitulo 8 - Modulo de Rele******************************************************
*                                                                                                                                 *
*     En este octavo capitulo aprenderemos a utilizar el Modulo de Rele. El rele es un componente electronico que funciona con    *                                                                      *
*  un electroiman interno que es el encargado de hacer el cambio entre abrir o cerrar el circuito. El cual podria ser un circuito *
*  que dicipe mayor potencia.                                                                                                     *
*                                                                                                                                 *
*  Para lograr esto necesitaremos:                                                                                                *
*                                                                                                                                 *
*  -Placa arduino Uno                                                                                                             *
*  -1 Modulo de Rele.                                                                                                             *
*  -Protoboard                                                                                                                    *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                              Facebook: ESociety *
*                                                                                                              GitHub: eSociety97 *
*                                                                                                                                 *
*                                                         #NuncaDejenDeCrear                                                      *
***********************************************************************************************************************************/ 

int relay = 2; // Declaramos nuestra variable que usaremos para el modulo de relay

void setup(){
  pinMode(relay,OUTPUT); //Declaramos como pin de salida la variable led
  }
void loop(){
  digitalWrite(relay,HIGH); //Escribimos un valor alto en la salida digital del modulo de relay   
  delay(2000);
  digitalWrite(relay,LOW); //Escribimos un valor bajo en la salida digital del modulo de relay
  delay(2000);
}  
