#include <IRremote.h>

const int RECV_PIN = 7;//Pin connected to sensor out
IRrecv irrecv(RECV_PIN);
decode_results results;
/*
 * IR values from remote control
 * replace it with your own
 */
const uint32_t  PP =     0xFF00FF,
                SNZ =    0xFF807F,
                ALM =    0xFF40BF,
                SET =    0xFF20DF,
                VOL_N =  0xFFA05F,
                VOL_P =  0xFF609F,
                MODE =   0xFF10EF,
                PREV =   0xFF906F,
                NEXT =   0xFF50AF,
                RADIO =  0xFF30CF;

void setup() {
  Serial.begin(115200); //init COM Port with 115200 Baud
  while(!Serial);       //wait for COM Port
  irrecv.enableIRIn(); 
}

void loop() {  
  if(irrecv.decode(&results)){
    Serial.print("HEX: ");
    Serial.print(results.value, HEX);
    Serial.print(" BIN: ");
    Serial.print(results.value, BIN);
    Serial.print(" DEC: ");
    Serial.println(results.value, DEC);
    checkresults(results.value);
    irrecv.resume();
  }
}

void checkresults(uint32_t result){
  switch(result){

    case PP:    Serial.println("Play/Pause pressed");
                break;
    case SNZ:   Serial.println("Snooze pressed");
                break;
    case ALM:   Serial.println("Alarm pressed");
                break;
    case SET:   Serial.println("Set pressed");
                break;
    case VOL_N: Serial.println("Volume - pressed");
                break;
    case VOL_P: Serial.println("Volume + pressed");
                break;
    case MODE:  Serial.println("Mode pressed");
                break;
    case PREV:  Serial.println("Previous pressed");
                break;
    case NEXT:  Serial.println("Next pressed");
                break;
    case RADIO: Serial.println("Radio pressed");
                break;    
            
    default:    break;
  }
}
