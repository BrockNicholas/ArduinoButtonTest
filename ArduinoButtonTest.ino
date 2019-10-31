// Arduino pin numbers
const int A = 7; // digital pin connected to switch output
bool aReset = 1;


void setup() {
  pinMode(A, INPUT);
  digitalWrite(A, HIGH);
  Serial.begin(9600);
}

void loop() {
  getVals();
  
}

bool aValue(){
  bool val = digitalRead(A);
  if (val == 1){
    aReset = 1;
  }
  else if (val == 0 && aReset == 1){
    aReset = 0;
    return 1;
  }
  
  return 0;
}

void getVals(){
  if (aValue()){
    Serial.println("A");
  }
  
 
  
}
