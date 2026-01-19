// Serial Monitor LED Control
// Ask user for a number, then blink the LED that many times.

int j;
int myled = 12;
int dt = 500;
int blink_times; 

// FIX 1: 'String' refers to a class, so it must be Capitalized.
String msg = "Please enter your number of blinks:";
String msg2 = "Your number of blinks is: ";

void setup() {
  // CONFIGURATION
  // FIX 2: Check spelling of 'Serial'
  Serial.begin(9600);
  
  // FIX 3: 'pinMode' starts with a small 'p'
  pinMode(myled, OUTPUT);
}

void loop() {
  // 1. ASK
  // FIX 4: When printing a variable, just use its name. 
  // Don't write the type (String) inside the brackets.
  Serial.println(msg); 

  // 2. WAIT
  // This loop pauses the program until data arrives in the Serial buffer.
  while (Serial.available() == 0) {
    // Do nothing, just wait...
  }

  // 3. READ
  // FIX 5: Spelling 'Serial' and camelCase 'parseInt' (capital I)
  blink_times = Serial.parseInt(); 
  
  // 4. CONFIRM
  Serial.print(msg2);
  Serial.println(blink_times);

  // 5. ACT (Blink the LED)
  // Your loop logic here was perfect!
  for (j = 1; j <= blink_times; j = j + 1) {
    digitalWrite(myled, HIGH);
    delay(dt);
    digitalWrite(myled, LOW);
    delay(dt);
  }

  // PRO TIP: Clear the buffer
  // Sometimes the "Enter" key leaves a 'newline' character in the buffer.
  // This reads it and throws it away so the next loop starts clean.
  while(Serial.available() > 0) {
    Serial.read();
  }
}



/*
draft code 

// Reading data from the serial Monitor
/*
in this program we are getting user input from the serial monitor
this can be done by asking, waiting and reading
we shall use an Led and we shall tell it how many times we. want it to blink
in our serial monitor

Here i have put Led and it will blink the number of times i tell it to blink
*/


int j;
int myled=12;
int dt=500;
int blink_times; // how many times i want my led to blink
string msg=" enter your number of  blinks";
string msg2=" your number of blinks is";
void setup() {
  // put your setup code here, to run once:
Serail.begin(9600);
PinMode(myled,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

Serial.println(string msg); // we have completed the first step which is asking
while(Serial.available()==0){  // the while loop  will create a delay and wait for user to put in data
                               // the serial.available tell us that while there is no data the serial monitor does nothing

}
blink_times=Seriaal.parseint(); // getting user input similar to cin and scanf
Serial.print(msg2);
Serial.println(blink_times);

for(j=1;j<=blink_times;j=j+1){

digitalWrite(myled,HIGH);
delay(dt);
digitalWrite(myled,LOW);
delay(dt);
}

}
*/
