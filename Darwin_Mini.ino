
/* Serial device defines for dxl bus */
#define DXL_BUS_SERIAL1 1  //Dynamixel on Serial1(USART1)  <-OpenCM9.04
#define DXL_BUS_SERIAL2 2  //Dynamixel on Serial2(USART2)  <-LN101,BT210
#define DXL_BUS_SERIAL3 3  //Dynamixel on Serial3(USART3)  <-OpenCM 485EXP
/* Dynamixel ID defines */
#define ID_NUM 5
/* Control table defines */
#define GOAL_POSITION 30

Dynamixel Dxl(DXL_BUS_SERIAL1);

void setup() {
  
  // Dynamixel 2.0 Baudrate -> 0: 9600, 1: 57600, 2: 115200, 3: 1Mbps 
  Dxl.begin(3);
  Dxl.jointMode(1); //jointMode() is to use position mode
  Dxl.jointMode(2); //jointMode() is to use position mode
  Dxl.jointMode(3); //jointMode() is to use position mode
  Dxl.jointMode(4); //jointMode() is to use position mode
  Dxl.jointMode(5); //jointMode() is to use position mode
  Dxl.jointMode(6); //jointMode() is to use position mode
  Dxl.jointMode(7); //jointMode() is to use position mode
  Dxl.jointMode(8); //jointMode() is to use position mode
  Dxl.jointMode(9); //jointMode() is to use position mode
  Dxl.jointMode(10); //jointMode() is to use position mode
  Dxl.jointMode(11); //jointMode() is to use position mode
  Dxl.jointMode(12); //jointMode() is to use position mode
  Dxl.jointMode(13); //jointMode() is to use position mode
  Dxl.jointMode(14); //jointMode() is to use position mode
  Dxl.jointMode(15); //jointMode() is to use position mode
  Dxl.jointMode(16); //jointMode() is to use position mode
  
}

char command = ' ';
 
void loop() {
  
  if (SerialUSB.available()) { command = SerialUSB.read(); }
    		
    if (command == '1') { // initial position
      Dxl.writeWord(1, GOAL_POSITION, 512); 
      Dxl.writeWord(2, GOAL_POSITION, 512);
      Dxl.writeWord(3, GOAL_POSITION, 262); 
      Dxl.writeWord(4, GOAL_POSITION, 761); 
      Dxl.writeWord(5, GOAL_POSITION, 512); 
      Dxl.writeWord(6, GOAL_POSITION, 512); 
      Dxl.writeWord(7, GOAL_POSITION, 512); 
      Dxl.writeWord(8, GOAL_POSITION, 512); 
      Dxl.writeWord(9, GOAL_POSITION, 421); 
      Dxl.writeWord(10, GOAL_POSITION, 602); 
      Dxl.writeWord(11, GOAL_POSITION, 612); 
      Dxl.writeWord(12, GOAL_POSITION, 411); 
      Dxl.writeWord(13, GOAL_POSITION, 556); 
      Dxl.writeWord(14, GOAL_POSITION, 467); 
      Dxl.writeWord(15, GOAL_POSITION, 512); 
      Dxl.writeWord(16, GOAL_POSITION, 512); 
      
      delay(1000);
    }
  
     if (command == '2') { // straight walk
     
     //0
      Dxl.writeWord(1, GOAL_POSITION, 512); 
      Dxl.writeWord(2, GOAL_POSITION, 512);
      Dxl.writeWord(3, GOAL_POSITION, 262); 
      Dxl.writeWord(4, GOAL_POSITION, 761); 
      Dxl.writeWord(5, GOAL_POSITION, 512); 
      Dxl.writeWord(6, GOAL_POSITION, 512); 
      Dxl.writeWord(7, GOAL_POSITION, 512); 
      Dxl.writeWord(8, GOAL_POSITION, 512); 
      Dxl.writeWord(9, GOAL_POSITION, 421); 
      Dxl.writeWord(10, GOAL_POSITION, 602); 
      Dxl.writeWord(11, GOAL_POSITION, 612); 
      Dxl.writeWord(12, GOAL_POSITION, 411); 
      Dxl.writeWord(13, GOAL_POSITION, 556); 
      Dxl.writeWord(14, GOAL_POSITION, 467); 
      Dxl.writeWord(15, GOAL_POSITION, 512); 
      Dxl.writeWord(16, GOAL_POSITION, 512); 
      delay(70);
     
      //1
      Dxl.writeWord(1, GOAL_POSITION, 512); 
      Dxl.writeWord(2, GOAL_POSITION, 512);
      Dxl.writeWord(3, GOAL_POSITION, 262); 
      Dxl.writeWord(4, GOAL_POSITION, 761); 
      Dxl.writeWord(5, GOAL_POSITION, 512); 
      Dxl.writeWord(6, GOAL_POSITION, 512); 
      Dxl.writeWord(7, GOAL_POSITION, 512); 
      Dxl.writeWord(8, GOAL_POSITION, 512); 
      Dxl.writeWord(9, GOAL_POSITION, 401); 
      Dxl.writeWord(10, GOAL_POSITION, 582); 
      Dxl.writeWord(11, GOAL_POSITION, 612); 
      Dxl.writeWord(12, GOAL_POSITION, 411); 
      Dxl.writeWord(13, GOAL_POSITION, 546); 
      Dxl.writeWord(14, GOAL_POSITION, 437); 
      Dxl.writeWord(15, GOAL_POSITION, 522); 
      Dxl.writeWord(16, GOAL_POSITION, 552); 
      delay(7);
      
      //2
      Dxl.writeWord(1, GOAL_POSITION, 512); 
      Dxl.writeWord(2, GOAL_POSITION, 512);
      Dxl.writeWord(3, GOAL_POSITION, 262); 
      Dxl.writeWord(4, GOAL_POSITION, 761); 
      Dxl.writeWord(5, GOAL_POSITION, 512); 
      Dxl.writeWord(6, GOAL_POSITION, 512); 
      Dxl.writeWord(7, GOAL_POSITION, 512); 
      Dxl.writeWord(8, GOAL_POSITION, 512); 
      Dxl.writeWord(9, GOAL_POSITION, 401); 
      Dxl.writeWord(10, GOAL_POSITION, 582); 
      Dxl.writeWord(11, GOAL_POSITION, 612); 
      Dxl.writeWord(12, GOAL_POSITION, 411); 
      Dxl.writeWord(13, GOAL_POSITION, 546); 
      Dxl.writeWord(14, GOAL_POSITION, 437); 
      Dxl.writeWord(15, GOAL_POSITION, 522); 
      Dxl.writeWord(16, GOAL_POSITION, 552); 
      delay(70);
      
      //3
      Dxl.writeWord(1, GOAL_POSITION, 542); 
      Dxl.writeWord(2, GOAL_POSITION, 542);
      Dxl.writeWord(3, GOAL_POSITION, 262); 
      Dxl.writeWord(4, GOAL_POSITION, 761); 
      Dxl.writeWord(5, GOAL_POSITION, 512); 
      Dxl.writeWord(6, GOAL_POSITION, 512); 
      Dxl.writeWord(7, GOAL_POSITION, 501); 
      Dxl.writeWord(8, GOAL_POSITION, 522); 
      Dxl.writeWord(9, GOAL_POSITION, 421); 
      Dxl.writeWord(10, GOAL_POSITION, 652); 
      Dxl.writeWord(11, GOAL_POSITION, 612); 
      Dxl.writeWord(12, GOAL_POSITION, 312); 
      Dxl.writeWord(13, GOAL_POSITION, 566); 
      Dxl.writeWord(14, GOAL_POSITION, 407); 
      Dxl.writeWord(15, GOAL_POSITION, 522); 
      Dxl.writeWord(16, GOAL_POSITION, 542); 
      delay(70);
      
      //4
      Dxl.writeWord(1, GOAL_POSITION, 612); 
      Dxl.writeWord(2, GOAL_POSITION, 562);
      Dxl.writeWord(3, GOAL_POSITION, 262); 
      Dxl.writeWord(4, GOAL_POSITION, 761); 
      Dxl.writeWord(5, GOAL_POSITION, 512); 
      Dxl.writeWord(6, GOAL_POSITION, 512); 
      Dxl.writeWord(7, GOAL_POSITION, 512); 
      Dxl.writeWord(8, GOAL_POSITION, 512); 
      Dxl.writeWord(9, GOAL_POSITION, 441); 
      Dxl.writeWord(10, GOAL_POSITION, 622); 
      Dxl.writeWord(11, GOAL_POSITION, 612); 
      Dxl.writeWord(12, GOAL_POSITION, 411); 
      Dxl.writeWord(13, GOAL_POSITION, 586); 
      Dxl.writeWord(14, GOAL_POSITION, 477); 
      Dxl.writeWord(15, GOAL_POSITION, 512); 
      Dxl.writeWord(16, GOAL_POSITION, 512); 
      delay(70);
      
      //5
      Dxl.writeWord(1, GOAL_POSITION, 511); 
      Dxl.writeWord(2, GOAL_POSITION, 511);
      Dxl.writeWord(3, GOAL_POSITION, 260); 
      Dxl.writeWord(4, GOAL_POSITION, 761); 
      Dxl.writeWord(5, GOAL_POSITION, 511); 
      Dxl.writeWord(6, GOAL_POSITION, 511); 
      Dxl.writeWord(7, GOAL_POSITION, 511); 
      Dxl.writeWord(8, GOAL_POSITION, 511); 
      Dxl.writeWord(9, GOAL_POSITION, 441); 
      Dxl.writeWord(10, GOAL_POSITION, 620); 
      Dxl.writeWord(11, GOAL_POSITION, 610); 
      Dxl.writeWord(12, GOAL_POSITION, 410); 
      Dxl.writeWord(13, GOAL_POSITION, 586); 
      Dxl.writeWord(14, GOAL_POSITION, 475); 
      Dxl.writeWord(15, GOAL_POSITION, 471); 
      Dxl.writeWord(16, GOAL_POSITION, 501); 
      delay(7);
      
      //6
      Dxl.writeWord(1, GOAL_POSITION, 511); 
      Dxl.writeWord(2, GOAL_POSITION, 511);
      Dxl.writeWord(3, GOAL_POSITION, 260); 
      Dxl.writeWord(4, GOAL_POSITION, 761); 
      Dxl.writeWord(5, GOAL_POSITION, 511); 
      Dxl.writeWord(6, GOAL_POSITION, 511); 
      Dxl.writeWord(7, GOAL_POSITION, 511); 
      Dxl.writeWord(8, GOAL_POSITION, 511); 
      Dxl.writeWord(9, GOAL_POSITION, 441); 
      Dxl.writeWord(10, GOAL_POSITION, 620); 
      Dxl.writeWord(11, GOAL_POSITION, 610); 
      Dxl.writeWord(12, GOAL_POSITION, 410); 
      Dxl.writeWord(13, GOAL_POSITION, 586); 
      Dxl.writeWord(14, GOAL_POSITION, 475); 
      Dxl.writeWord(15, GOAL_POSITION, 471); 
      Dxl.writeWord(16, GOAL_POSITION, 501); 
      delay(70);
      
      //7
      Dxl.writeWord(1, GOAL_POSITION, 481); 
      Dxl.writeWord(2, GOAL_POSITION, 481);
      Dxl.writeWord(3, GOAL_POSITION, 260); 
      Dxl.writeWord(4, GOAL_POSITION, 761); 
      Dxl.writeWord(5, GOAL_POSITION, 511); 
      Dxl.writeWord(6, GOAL_POSITION, 511); 
      Dxl.writeWord(7, GOAL_POSITION, 501); 
      Dxl.writeWord(8, GOAL_POSITION, 521); 
      Dxl.writeWord(9, GOAL_POSITION, 370); 
      Dxl.writeWord(10, GOAL_POSITION, 600); 
      Dxl.writeWord(11, GOAL_POSITION, 710); 
      Dxl.writeWord(12, GOAL_POSITION, 410); 
      Dxl.writeWord(13, GOAL_POSITION, 616); 
      Dxl.writeWord(14, GOAL_POSITION, 455); 
      Dxl.writeWord(15, GOAL_POSITION, 481); 
      Dxl.writeWord(16, GOAL_POSITION, 501); 
      delay(70);
      
      //8
      Dxl.writeWord(1, GOAL_POSITION, 461); 
      Dxl.writeWord(2, GOAL_POSITION, 411);
      Dxl.writeWord(3, GOAL_POSITION, 262); 
      Dxl.writeWord(4, GOAL_POSITION, 761); 
      Dxl.writeWord(5, GOAL_POSITION, 512); 
      Dxl.writeWord(6, GOAL_POSITION, 512); 
      Dxl.writeWord(7, GOAL_POSITION, 512); 
      Dxl.writeWord(8, GOAL_POSITION, 512); 
      Dxl.writeWord(9, GOAL_POSITION, 401); 
      Dxl.writeWord(10, GOAL_POSITION, 582); 
      Dxl.writeWord(11, GOAL_POSITION, 612); 
      Dxl.writeWord(12, GOAL_POSITION, 411); 
      Dxl.writeWord(13, GOAL_POSITION, 546); 
      Dxl.writeWord(14, GOAL_POSITION, 437); 
      Dxl.writeWord(15, GOAL_POSITION, 512); 
      Dxl.writeWord(16, GOAL_POSITION, 512);
      
      delay(1000);
    }      
  
}

// Wait for 1 second (1000 milliseconds)

  



