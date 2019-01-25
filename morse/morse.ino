void setup() {
  pinMode(BUILTIN_LED, OUTPUT);  // initialize onboard LED as output
}

char message[] = "ciao ";
const int unit = 1000;
int len = strlen(message);
char letter;

void dot() {
  digitalWrite(BUILTIN_LED, LOW);  
  delay(unit);                      
  digitalWrite(BUILTIN_LED, HIGH);
  delay(unit);    
}

void dash() {
  digitalWrite(BUILTIN_LED, LOW);  
  delay(unit*3);                    
  digitalWrite(BUILTIN_LED, HIGH);
  delay(unit);   
}


void pauseTwoLetters(){
  digitalWrite(BUILTIN_LED, HIGH);
  delay(unit*3);
}

void pauseWord(){
  digitalWrite(BUILTIN_LED, HIGH);
  delay(unit*7);
}

void loop(){
  for (int i = 0; i < len; ++i){
    letter = message[i];
    if (letter == 'a'){
      dot();
      dash();
    }
    else if (letter == 'b'){
      dash();
      dot();
      dot();
      dot();
    }
    else if (letter == 'c'){
      dash();
      dot();
      dash();
      dot();
    }
    else if (letter == 'd'){
      dash();
      dot();
      dot();
    }
    else if (letter == 'e'){
      dot();
    }
    else if (letter == 'f'){
      dot();
      dot();
      dash();
      dot();
    }
    else if (letter == 'g'){
      dash();   
      dash();
      dot();
    }
    else if (letter == 'h'){
      dot();
      dot();
      dot();
      dot();
    }
    else if (letter == 'i'){
      dot();
      dot();
    }
    else if (letter == 'j'){
      dot();
      dash();
      dash();
      dash();
    }
    else if (letter == 'k'){
      dash();
      dot();
      dash();
    }
    else if (letter == 'l'){
      dot();
      dash();
      dot();
      dot();
    }
    else if (letter == 'm'){
      dash();
      dash();
    }
    else if (letter == 'n'){
      dash();
      dot();
    }
    else if (letter == 'o'){
      dash();
      dash();
      dash();
    }
    else if (letter == 'p'){
      dot();
      dash();
      dash();
      dot();
    }
    else if (letter == 'q'){
      dash();
      dash();
      dot();
      dash();
    }
    else if (letter == 'r'){
      dot();
      dash();
      dot();
    }
    else if (letter == 's'){
      dot();
      dot();
      dot();
    }
    else if (letter == 't'){
      dash();
    }
    else if (letter == 'u'){
      dot();
      dot();
      dash();
    }
    else if (letter == 'v'){
      dot();
      dot();
      dot();
      dash();
    }
    else if (letter == 'w'){
      dot();
      dash();
      dash();
    }
    else if (letter == 'x'){
      dash();
      dot();
      dot();
      dash();
    }
    else if (letter == 'y'){
      dash();
      dot();
      dash();
      dash();
    }
    else if (letter == 'z'){
      dash();
      dash();
      dot();
      dot();
    }
    else if (letter == ' '){
      pauseWord();
    }
    else if (letter == '0'){
      dash();
      dash();
      dash();
      dash();
      dash();
    }
    else if (letter == '1'){
      dot();
      dash();
      dash();
      dash();
      dash();
    }
    else if (letter == '2'){
      dot();
      dot();
      dash();
      dash();
      dash();
    }
    else if (letter == '3'){
      dot();
      dot();
      dot();
      dash();
      dash();
    }
    else if (letter == '4'){
      dot();
      dot();
      dot();
      dot();
      dash();
    }
    else if (letter == '5'){
      dot();
      dot();
      dot();
      dot();
    }
    else if (letter == '6'){
      dash();
      dot();
      dot();
      dot();
      dot();
    }
    else if (letter == '7'){
      dash();
      dash();
      dot();
      dot();
      dot();
    }
    else if (letter == '8'){
      dash();
      dash();
      dash();
      dot();
      dot();
    }
    else if (letter == '9'){
      dash();
      dash();
      dash();
      dash();
      dot();
    }
    pauseTwoLetters();
  }
}
