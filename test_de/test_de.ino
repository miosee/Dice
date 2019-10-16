int diagonale1, diagonale2, verticale, centre, interupteur;
int resultat;

void setup() {
  diagonale1 = 0;
  verticale = 1;
  diagonale2 = 2;
  centre = 3;
  interupteur = 4;
  pinMode(diagonale1, OUTPUT);
  pinMode(verticale, OUTPUT);
  pinMode(diagonale2, OUTPUT);
  pinMode(centre, OUTPUT);
  pinMode(interupteur, INPUT);
}

void loop() {
  if (digitalRead(interupteur) == HIGH) {
    for(resultat = 1; resultat <= 6; resultat = resultat + 1) {
      affichage(resultat);
      delay(500);
    }
  }
}

// Affiche le chiffre passé en paramètre sur les LED du dé
void affichage(int chiffre) {
  digitalWrite(diagonale1, LOW);
  digitalWrite(verticale, LOW);
  digitalWrite(diagonale2, LOW);
  digitalWrite(centre, LOW);
  if (chiffre == 1) {
    digitalWrite(centre, HIGH);
  }
  else if (chiffre == 2) {
    digitalWrite(diagonale1, HIGH);
  } 
  else if (chiffre == 3) {
    digitalWrite(diagonale1, HIGH);
    digitalWrite(centre, HIGH);
  }
  else if (chiffre == 4) {
    digitalWrite(diagonale1, HIGH);
    digitalWrite(diagonale2, HIGH);
  }
  else if (chiffre == 5) {
    digitalWrite(diagonale1, HIGH);
    digitalWrite(centre, HIGH);
    digitalWrite(diagonale2, HIGH);
  }
  else if (chiffre == 6) {
    digitalWrite(diagonale1, HIGH);
    digitalWrite(verticale, HIGH);
    digitalWrite(diagonale2, HIGH);
  }
}

