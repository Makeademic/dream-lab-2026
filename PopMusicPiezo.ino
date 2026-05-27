/*
  Pop Music
*/
#include "pitches.h"
int BuzzerPin = 5;

// notes in the melody (Hedwig's Theme):
int melody[] = {
  NOTE_B4, NOTE_E4, NOTE_G4, NOTE_FS4, NOTE_E4, NOTE_B4, NOTE_A4, NOTE_FS4,
  NOTE_E4, NOTE_G4, NOTE_FS4, NOTE_DS4, NOTE_F4, NOTE_B3};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 3, 12, 4, 2, 4, 2, 2,
  4, 12, 4, 2, 4, 2 };
  


void setup() {
  pinMode(BuzzerPin, OUTPUT);
}

void loop() {
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 14; thisNote++) {
    // to calculate the note duration, take one second 
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1200/noteDurations[thisNote];
    tone(BuzzerPin, melody[thisNote],noteDuration);
    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(BuzzerPin);
    } 
}


/*


  //Hedwig's Theme 14

// notes in the melody (Hedwig's Theme):
int melody[] = {
  NOTE_B4, NOTE_E4, NOTE_G4, NOTE_FS4, NOTE_E4, NOTE_B4, NOTE_A4, NOTE_FS4,
  NOTE_E4, NOTE_G4, NOTE_FS4, NOTE_DS4, NOTE_F4, NOTE_B3};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 3, 12, 4, 2, 4, 2, 2,
  4, 12, 4, 2, 4, 2 };

//Mario Main Theme 78

//Mario main theme melody
int melody[] = {
  NOTE_E7, NOTE_E7,0, NOTE_E7, 
  0, NOTE_C7, NOTE_E7,0,
  NOTE_G7,0,0,0,
  NOTE_G6,0,0,0, 

  NOTE_C7,0,0, NOTE_G6, 
  0,0, NOTE_E6,0, 
  0, NOTE_A6, 0, NOTE_B6, 
  0, NOTE_AS6, NOTE_A6, 0, 

  NOTE_G6, NOTE_E7, NOTE_G7, 
  NOTE_A7, 0, NOTE_F7, NOTE_G7, 
  0, NOTE_E7, 0,NOTE_C7, 
  NOTE_D7, NOTE_B6, 0, 0,

  NOTE_C7, 0, 0, NOTE_G6, 
  0, 0, NOTE_E6, 0, 
  0, NOTE_A6, 0, NOTE_B6, 
  0, NOTE_AS6, NOTE_A6, 0, 

  NOTE_G6, NOTE_E7, NOTE_G7, 
  NOTE_A7, 0, NOTE_F7, NOTE_G7, 
  0, NOTE_E7, 0,NOTE_C7, 
  NOTE_D7, NOTE_B6, 0, 0};
  
//Mario main theme tempo
int noteDurations[] = {
  12, 12, 12, 12, 
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12, 

  12, 12, 12, 12,
  12, 12, 12, 12, 
  12, 12, 12, 12, 
  12, 12, 12, 12, 

  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
};

//Mario Underworld 56

int melody[] = {
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4, 
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4, 
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0, NOTE_DS4, NOTE_CS4, NOTE_D4,
  NOTE_CS4, NOTE_DS4, 
  NOTE_DS4, NOTE_GS3,
  NOTE_G3, NOTE_CS4,
  NOTE_C4, NOTE_FS4, NOTE_F4, NOTE_E3, NOTE_AS4, NOTE_A4,
  NOTE_GS4, NOTE_DS4, NOTE_B3,
  NOTE_AS3, NOTE_A3, NOTE_GS3,
  0, 0, 0
};

//Underworld tempo
int noteDurations[] = {
  12, 12, 12, 12, 
  12, 12, 6,
  3,
  12, 12, 12, 12, 
  12, 12, 6,
  3,
  12, 12, 12, 12, 
  12, 12, 6,
  3,
  12, 12, 12, 12, 
  12, 12, 6,
  6, 18, 18, 18,
  6, 6,
  6, 6,
  6, 6,
  18, 18, 18, 18, 18, 18,
  10, 10, 10,
  10, 10, 10,
  3, 3, 3
};

//Pokemon 34

//Pokemon melody
int melody[] = {
 0,NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4,
 NOTE_F4, NOTE_D4, NOTE_AS3, NOTE_C4,
 NOTE_G4, NOTE_G4, NOTE_F4, NOTE_DS4,
 NOTE_F4, 0,
 
 NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_GS4,
 NOTE_G4, NOTE_F4, NOTE_DS4, NOTE_F4,
 NOTE_G4, NOTE_G4, NOTE_F4, NOTE_DS4,
 NOTE_G4, 0, NOTE_G4, NOTE_AS4, NOTE_C5
 };
  
//Pokemon tempo
int noteDurations[] = {
  8,8,8,8,3,8,
  4,8,2,8,
  4,4,8,8,
  1,4,
  
  8,8,8,3,8,
  4,8,2,8,
  4,8,4,8,
  2,8,8,8,8
};

//Star Wars 19

int melody[] =
{
  NOTE_F4, NOTE_F4,NOTE_F4,
  NOTE_AS4,
  NOTE_F5, NOTE_DS5, NOTE_D5, NOTE_C5,
  NOTE_AS5,
  NOTE_F5, NOTE_DS5,NOTE_D5,NOTE_C5,
  NOTE_AS5,
  NOTE_F5,NOTE_DS5,NOTE_D5,NOTE_DS5,
  NOTE_C5
};

int noteDurations[] = {
 6, 6, 6,
 1,
 2, 6, 6, 6,
 1,
 2, 6, 6, 6,
 1,
 2, 6, 6, 6,
 1};
 
 
 
 
 //Gravity Falls theme melody 71
int melody[] = {
 NOTE_D5, NOTE_E5, 
 NOTE_F5, 
 NOTE_A5, NOTE_G5, NOTE_A5,
 NOTE_C5,
 NOTE_D5, NOTE_E5, 
 NOTE_F5, NOTE_E5,
 NOTE_G5, NOTE_A5,
 NOTE_G5, NOTE_F5,
 0, NOTE_F5, NOTE_F5, NOTE_F5, 
 NOTE_A5, NOTE_A5, NOTE_G5, NOTE_F5,
 0, NOTE_A5, NOTE_A5, NOTE_A5,
 NOTE_G5, NOTE_A5, NOTE_G5, NOTE_F5,
 
 0, NOTE_F5, NOTE_F5, NOTE_F5, 
 NOTE_A5, NOTE_A5, NOTE_G5, NOTE_F5,
 0, NOTE_A5, NOTE_A5, NOTE_A5,
 0, NOTE_CS6, NOTE_C6, NOTE_C6,
 
  0, NOTE_F5, NOTE_F5, NOTE_F5, 
 NOTE_A5, NOTE_A5, NOTE_G5, NOTE_A5,
 0, NOTE_A5, NOTE_A5, NOTE_A5,
 NOTE_G5, NOTE_C6,
 NOTE_A5, NOTE_CS6,
 
 NOTE_D4, NOTE_A4, NOTE_F4, NOTE_D5, 
 NOTE_A4, NOTE_F5, NOTE_D5, NOTE_A5, NOTE_D6
 };
  
//Gravity Falls tempo
int noteDurations[] = {
  2,4,
  1,
  3,3,4,
  1,
  
  2,4,
  2,2,
  2,2,
  2,2,
  
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  2,2,2,2,
  
  8,8,8,8,
  8,8,8,8
};

  //All Star

// notes in the melody (All Star Smash Mouth):
int melody[] = {
NOTE_AS4, NOTE_FS4, 0, 
NOTE_FS4, NOTE_DS4, NOTE_FS4, NOTE_FS4, 0,
NOTE_FS4, NOTE_DS4, NOTE_FS4, NOTE_FS4, 0,
NOTE_FS4, NOTE_AS4, NOTE_AS4, 0,

NOTE_AS4, NOTE_FS4, 0, 
NOTE_FS4, NOTE_DS4, NOTE_FS4, NOTE_FS4, 0,
NOTE_FS4, NOTE_DS4, NOTE_FS4, NOTE_FS4, 0,
NOTE_FS4, NOTE_AS4, NOTE_AS4,

NOTE_FS4, NOTE_AS4, NOTE_CS5, NOTE_B4, NOTE_AS4, NOTE_GS4, NOTE_GS4, NOTE_FS4, 0,

NOTE_FS4, NOTE_FS4, NOTE_GS4, NOTE_FS4, NOTE_AS4, NOTE_GS4, 
NOTE_GS4, NOTE_FS4, NOTE_FS4, NOTE_GS4, NOTE_GS4, NOTE_AS4, NOTE_DS4, 0};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
8, 8, 8,
16, 16, 8, 8, 8,
16, 16, 8, 8, 8,
4, 8, 8, 8,

8, 8, 8,
16, 16, 8, 8, 8,
16, 16, 8, 8, 8,
4, 8, 8, 

8, 4, 4, 8, 8, 8, 8, 3, 8,

8, 8, 8, 8, 8, 3,
8, 8, 8, 8, 16, 16, 4, 2 };

*/