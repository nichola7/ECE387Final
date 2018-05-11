int incomingByte = 0; // int value to read incoming int from Serial
int firstLight = 0;   // int value to determine which light is first in Simon Says game
int secondLight = 0;  // int value to determine which light is second in Simon Says game
int thirdLight = 0;   // int value to determine which light is third in Simon Says game
int greenLED = 13;    // Green LED power set to PIN 13
int redLED = 12;      // RED LED power set to PIN 12
int yellowLED = 11;   // yellow LED power set to PIN 11
int blueLED = 10;     // blue LED power set to PIN 10
int orange1LED = 9;   // RGB leftmost power set to PIN 9
int orange2LED = 8;   // RGB middle power set to PIN 8
int orange3LED = 7;   // RGB rightmost power set to PIN 7
// Called Orange, because the RGB LED will be orange
int wantToPlay = 0;   // Variable to wait to start the game, waits until "y" or "Y" is entered to start game.
void setup() {
  //digitalPins need to be in pinMode for power to be supplied
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  //Bluetooth Module requires 38400 Serial communication.
  Serial.begin(38400);
}

void loop() {
  //Want a delay so the Serial Monitor does not keep printing start message
  Serial.println("Do you want to play Simon Says? Enter 'y' or 'Y' ");
  delay(3000);
  wantToPlay = Serial.read();
  //If "y" or "Y" is entered the game starts
  if (wantToPlay == 121 || wantToPlay == 89) {
    Serial.println("Welcome to Simon Says, look at the LEDs and pick the right one");
    delay(3000);

    //49-53 refers to ascii values for 1,2,3,4,5 the numbers of the corresponding LEDs, Serial.read()
    // reads these ascii values to determine if correct or not.
    firstLight = random(49,53);
     secondLight = 50;
      thirdLight = 53;

  

    //If first light green
    if (firstLight == 49) {

      //The correct light in the simon says game will be turned on for 2 seconds, then input read
      // to see if the player has the right LED.

      digitalWrite(greenLED, HIGH);
      delay(2000);
      digitalWrite(greenLED, LOW);
      delay(3000);

      incomingByte = Serial.read();
      if (incomingByte == 49) {
        Serial.println("Good job! Simon says remember the pattern and find the next LED");
        delay(1000);
      }
      //If first light green, second green
      if (secondLight == 49) {
        digitalWrite(greenLED, HIGH);
        delay(2000);
        digitalWrite(greenLED, LOW);
        delay(2000);
        digitalWrite(greenLED, HIGH);
        delay(2000);
        digitalWrite(greenLED, LOW);
        delay(3000);

        incomingByte = Serial.read();
        if (incomingByte == 49) {
          Serial.println("Good, now the second LED ");
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 49) {
            Serial.println("Simon says remember the pattern and find the next LED");
            delay(1000);
          }
          //If Lights go G,G,G
          if (thirdLight == 49) {
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(2000);
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(2000);
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(3000);

            incomingByte = Serial.read();
            if (incomingByte == 49) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 49) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  
                }

              } else {
                
                
              }
            } else {
              
             
            }
          }
          //If Lights go G,G,R
          else if (thirdLight == 50) {
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(2000);
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(2000);
            digitalWrite(redLED, HIGH);
            delay(2000);
            digitalWrite(redLED, LOW);
            delay(3000);

            incomingByte = Serial.read();
            if (incomingByte == 49) {
              Serial.println("Good, now the second LED ");
              delay(3000);

              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the third LED ");
                delay(3000);

                incomingByte = Serial.read();
                if (incomingByte == 50) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                 
                }

              } else {
                
               
              }
            } else {
              
              
            }

          }
          //If Lights go G,G,Y
          else if (thirdLight == 51) {
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(2000);
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(2000);
            digitalWrite(yellowLED, HIGH);
            delay(2000);
            digitalWrite(yellowLED, LOW);
            delay(3000);

            incomingByte = Serial.read();
            if (incomingByte == 49) {
              Serial.println("Good, now the second LED ");
              delay(3000);

              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the third LED ");
                delay(3000);

                incomingByte = Serial.read();
                if (incomingByte == 51) {
                  Serial.println("Congrats you won!!");
                 
                }
                else {
                  
                 
                }

              } else {
                
               
              }
            } else {
              
             
            }
          }
          //If Lights go G,G,B
          else if (thirdLight == 52) {
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(2000);
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(2000);
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(3000);

            incomingByte = Serial.read();
            if (incomingByte == 49) {
              Serial.println("Good, now the second LED ");
              delay(3000);

              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the third LED ");
                delay(3000);

                incomingByte = Serial.read();
                if (incomingByte == 52) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
          //IF lights go G,G,O
          else {
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(2000);
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(2000);
            setRGBColor(255, 0, 255);
            delay(2000);
            analogWrite(orange1LED, 0);
            analogWrite(orange2LED, 0);
            analogWrite(orange3LED, 0);
            delay(3000);

            incomingByte = Serial.read();
            if (incomingByte == 49) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 53) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }
              }
              else {
                
                delay(1000);
              }
            }
            else {
              
              delay(1000);
            }
          }
        }
        else {
          
          delay(1000);
        }
      }
      //If second light red, first green
      else if (secondLight == 50) {
        digitalWrite(greenLED, HIGH);
        delay(2000);
        digitalWrite(greenLED, LOW);
        delay(2000);
        digitalWrite(redLED, HIGH);
        delay(2000);
        digitalWrite(redLED, LOW);
        delay(3000);

        incomingByte = Serial.read();
        if (incomingByte == 49) {
          Serial.println("Good, now the second LED ");
          delay(3000);

          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Simon says remember the pattern and find the next LED");
            delay(1000);

            //If Lights go G,R,G
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(2000);
            digitalWrite(redLED, HIGH);
            delay(2000);
            digitalWrite(redLED, LOW);
            delay(2000);
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(3000);

            if (thirdLight == 49) {
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the second LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 50) {
                  Serial.println("Good, now the third LED ");
                  delay(3000);
                  incomingByte = Serial.read();
                  if (incomingByte == 49) {
                    Serial.println("Congrats you won!!");
                    delay(1000);
                  }
                  else {
                    
                    delay(1000);
                  }

                } else {
                  
                  delay(1000);
                }
              } else {
                
                delay(1000);
              }
            }
            //If Lights go G,R,R
            else if (thirdLight == 50) {
              digitalWrite(greenLED, HIGH);
              delay(2000);
              digitalWrite(greenLED, LOW);
              delay(2000);
              digitalWrite(redLED, HIGH);
              delay(2000);
              digitalWrite(redLED, LOW);
              delay(2000);
              digitalWrite(redLED, HIGH);
              delay(2000);
              digitalWrite(redLED, LOW);
              delay(3000);

              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the second LED ");
                delay(3000);

                incomingByte = Serial.read();
                if (incomingByte == 50) {
                  Serial.println("Good, now the third LED ");
                  delay(3000);

                  incomingByte = Serial.read();
                  if (incomingByte == 50) {
                    Serial.println("Congrats you won!!");
                    delay(1000);
                  }
                  else {
                    
                    delay(1000);
                  }

                } else {
                  
                  delay(1000);
                }
              } else {
                
                delay(1000);
              }

            }
            //If Lights go G,R,Y
            else if (thirdLight == 51) {
              digitalWrite(greenLED, HIGH);
              delay(2000);
              digitalWrite(greenLED, LOW);
              delay(2000);
              digitalWrite(redLED, HIGH);
              delay(2000);
              digitalWrite(redLED, LOW);
              delay(2000);
              digitalWrite(yellowLED, HIGH);
              delay(2000);
              digitalWrite(yellowLED, LOW);
              delay(3000);

              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the second LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 50) {
                  Serial.println("Good, now the third LED ");
                  delay(3000);
                  incomingByte = Serial.read();
                  if (incomingByte == 51) {
                    Serial.println("Congrats you won!!");
                    delay(1000);
                  }
                  else {
                    
                    delay(1000);
                  }

                } else {
                  
                  delay(1000);
                }
              } else {
                
                delay(1000);
              }
            }
            //If Lights go G,R,B
            else if (thirdLight == 52) {
              digitalWrite(greenLED, HIGH);
              delay(2000);
              digitalWrite(greenLED, LOW);
              delay(2000);
              digitalWrite(redLED, HIGH);
              delay(2000);
              digitalWrite(redLED, LOW);
              delay(2000);
              digitalWrite(blueLED, HIGH);
              delay(2000);
              digitalWrite(blueLED, LOW);
              delay(3000);

              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the second LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 50) {
                  Serial.println("Good, now the third LED ");
                  delay(3000);
                  incomingByte = Serial.read();
                  if (incomingByte == 52) {
                    Serial.println("Congrats you won!!");
                    delay(1000);
                  }
                  else {
                    
                    delay(1000);
                  }

                } else {
                  
                  delay(1000);
                }
              } else {
                
                delay(1000);
              }
            }
            //IF lights go G,R,O
            else {
              digitalWrite(greenLED, HIGH);
              delay(2000);
              digitalWrite(greenLED, LOW);
              delay(2000);
              digitalWrite(redLED, HIGH);
              delay(2000);
              digitalWrite(redLED, LOW);
              delay(2000);
              setRGBColor(255, 0, 255);
              delay(3000);

              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the second LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 50) {
                  Serial.println("Good, now the third LED ");
                  delay(3000);
                  incomingByte = Serial.read();
                  if (incomingByte == 53) {
                    Serial.println("Congrats you won!!");
                    delay(1000);
                  }
                  else {
                    
                    delay(1000);
                  }

                } else {
                  
                  delay(1000);
                }
              } else {
                
                delay(1000);
              }
            }
          }
          else {
            
            delay(1000);
          }
        } else {
          
          delay(1000);
        }
      }

      //If second light yellow, first Green
      else if (secondLight == 51) {
        digitalWrite(greenLED, HIGH);
        delay(2000);
        digitalWrite(greenLED, LOW);
        delay(2000);
        digitalWrite(yellowLED, HIGH);
        delay(2000);
        digitalWrite(yellowLED, LOW);
        delay(3000);
        incomingByte = Serial.read();
        if (incomingByte == 49) {
          Serial.println("Good job! Now what is the second LED?");
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good job!");
            Serial.println("Simon says remember the pattern and find the next LED");
            delay(1000);
          }
        }

        if (incomingByte == 49) {
          Serial.println("Good, now the second LED ");
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good job!");
            Serial.println("Simon says remember the pattern and find the next LED");
            delay(1000);

            //If Lights go G,Y,G
            if (thirdLight == 49) {
              digitalWrite(greenLED, HIGH);
              delay(2000);
              digitalWrite(greenLED, LOW);
              delay(2000);
              digitalWrite(yellowLED, HIGH);
              delay(2000);
              digitalWrite(yellowLED, LOW);
              delay(2000);
              digitalWrite(greenLED, HIGH);
              delay(2000);
              digitalWrite(greenLED, LOW);
              delay(3000);

              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the second LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 51) {
                  Serial.println("Good, now the third LED ");
                  delay(3000);
                  incomingByte = Serial.read();
                  if (incomingByte == 49) {
                    Serial.println("Congrats you won!!");
                    delay(1000);
                  }
                  else {
                    
                    delay(1000);
                  }

                } else {
                  
                  delay(1000);
                }
              } else {
                
                delay(1000);
              }
            }
            //If Lights go G,Y,R
            else if (thirdLight == 50) {
              digitalWrite(greenLED, HIGH);
              delay(2000);
              digitalWrite(greenLED, LOW);
              delay(2000);
              digitalWrite(yellowLED, HIGH);
              delay(2000);
              digitalWrite(yellowLED, LOW);
              delay(2000);
              digitalWrite(redLED, HIGH);
              delay(2000);
              digitalWrite(redLED, LOW);
              delay(3000);

              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the second LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 51) {
                  Serial.println("Good, now the third LED ");
                  delay(3000);
                  incomingByte = Serial.read();
                  if (incomingByte == 50) {
                    Serial.println("Congrats you won!!");
                    delay(1000);
                  }
                  else {
                    
                    delay(1000);
                  }

                } else {
                  
                  delay(1000);
                }
              } else {
                
                delay(1000);
              }

            }
            //If Lights go G,Y,Y
            else if (thirdLight == 51) {
              digitalWrite(greenLED, HIGH);
              delay(2000);
              digitalWrite(greenLED, LOW);
              delay(2000);
              digitalWrite(yellowLED, HIGH);
              delay(2000);
              digitalWrite(yellowLED, LOW);
              delay(2000);
              digitalWrite(yellowLED, HIGH);
              delay(2000);
              digitalWrite(yellowLED, LOW);
              delay(3000);

              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the second LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 51) {
                  Serial.println("Good, now the third LED ");
                  delay(3000);
                  incomingByte = Serial.read();
                  if (incomingByte == 51) {
                    Serial.println("Congrats you won!!");
                    delay(1000);
                  }
                  else {
                    
                    delay(1000);
                  }

                } else {
                  
                  delay(1000);
                }
              } else {
                
                delay(1000);
              }
            }
            //If Lights go G,Y,B
            else if (thirdLight == 52) {
              digitalWrite(greenLED, HIGH);
              delay(2000);
              digitalWrite(greenLED, LOW);
              delay(2000);
              digitalWrite(yellowLED, HIGH);
              delay(2000);
              digitalWrite(yellowLED, LOW);
              delay(2000);
              digitalWrite(blueLED, HIGH);
              delay(2000);
              digitalWrite(blueLED, LOW);
              delay(3000);

              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the second LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 51) {
                  Serial.println("Good, now the third LED ");
                  delay(3000);
                  incomingByte = Serial.read();
                  if (incomingByte == 52) {
                    Serial.println("Congrats you won!!");
                    delay(1000);
                  }
                  else {
                    
                    delay(1000);
                  }

                } else {
                  
                  delay(1000);
                }
              } else {
                
                delay(1000);
              }
            }
            //IF lights go G,Y,O
            else {
              digitalWrite(greenLED, HIGH);
              delay(2000);
              digitalWrite(greenLED, LOW);
              delay(2000);
              digitalWrite(yellowLED, HIGH);
              delay(2000);
              digitalWrite(yellowLED, LOW);
              delay(2000);
              setRGBColor(255, 0, 255);
              delay(2000);
              analogWrite(orange1LED, 0);
              analogWrite(orange2LED, 0);
              analogWrite(orange3LED, 0);
              delay(3000);

              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the second LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 51) {
                  Serial.println("Good, now the third LED ");
                  delay(3000);
                  incomingByte = Serial.read();
                  if (incomingByte == 53) {
                    Serial.println("Congrats you won!!");
                    delay(1000);
                  }
                  else {
                    
                    delay(1000);
                  }

                } else {
                  
                  delay(1000);
                }
              } else {
                
                delay(1000);
              }
            }
          }
          //If second light blue, first Green
          else if (secondLight == 52) {
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(2000);
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(3000);
            incomingByte = Serial.read();


            //If Lights go G,B,G
            if (thirdLight == 49) {
              digitalWrite(greenLED, HIGH);
              delay(2000);
              digitalWrite(greenLED, LOW);
              delay(2000);
              digitalWrite(blueLED, HIGH);
              delay(2000);
              digitalWrite(blueLED, LOW);
              delay(2000);
              digitalWrite(greenLED, HIGH);
              delay(2000);
              digitalWrite(greenLED, LOW);
              delay(3000);

              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the second LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 52) {
                  Serial.println("Good, now the third LED ");
                  delay(3000);
                  incomingByte = Serial.read();
                  if (incomingByte == 49) {
                    Serial.println("Congrats you won!!");
                    delay(1000);
                  }
                  else {
                    
                    delay(1000);
                  }

                } else {
                  
                  delay(1000);
                }
              } else {
                
                delay(1000);
              }
            }


            //If Lights go G,B,R
            else if (thirdLight == 50) {
              digitalWrite(greenLED, HIGH);
              delay(2000);
              digitalWrite(greenLED, LOW);
              delay(2000);
              digitalWrite(blueLED, HIGH);
              delay(2000);
              digitalWrite(blueLED, LOW);
              delay(2000);
              digitalWrite(redLED, HIGH);
              delay(2000);
              digitalWrite(redLED, LOW);
              delay(3000);

              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the second LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 52) {
                  Serial.println("Good, now the third LED ");
                  delay(3000);
                  incomingByte = Serial.read();
                  if (incomingByte == 50) {
                    Serial.println("Congrats you won!!");
                    delay(1000);
                  }
                  else {
                    
                    delay(1000);
                  }
                } else {
                  
                  delay(1000);
                }
              } else {
                
                delay(1000);
              }
            }
            //If Lights go G,B,Y
            else if (thirdLight == 51) {
              digitalWrite(greenLED, HIGH);
              delay(2000);
              digitalWrite(greenLED, LOW);
              delay(2000);
              digitalWrite(blueLED, HIGH);
              delay(2000);
              digitalWrite(blueLED, LOW);
              delay(2000);
              digitalWrite(yellowLED, HIGH);
              delay(2000);
              digitalWrite(yellowLED, LOW);
              delay(3000);

              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the second LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 52) {
                  Serial.println("Good, now the third LED ");
                  delay(3000);
                  incomingByte = Serial.read();
                  if (incomingByte == 51) {
                    Serial.println("Congrats you won!!");
                    delay(1000);
                  }
                  else {
                    
                    delay(1000);
                  }
                } else {
                  
                  delay(1000);
                }
              } else {
                
                delay(1000);
              }
            }
            //If Lights go G,B,B
            else if (thirdLight == 52) {
              digitalWrite(greenLED, HIGH);
              delay(2000);
              digitalWrite(greenLED, LOW);
              delay(2000);
              digitalWrite(blueLED, HIGH);
              delay(2000);
              digitalWrite(blueLED, LOW);
              delay(2000);
              digitalWrite(blueLED, HIGH);
              delay(2000);
              digitalWrite(blueLED, LOW);
              delay(3000);

              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the second LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 52) {
                  Serial.println("Good, now the third LED ");
                  delay(3000);
                  incomingByte = Serial.read();
                  if (incomingByte == 52) {
                    Serial.println("Congrats you won!!");
                    delay(1000);
                  }
                  else {
                    
                    delay(1000);
                  }
                } else {
                  
                  delay(1000);
                }
              } else {
                
                delay(1000);
              }
            }
            //IF lights go G,B,O
            else {
              digitalWrite(greenLED, HIGH);
              delay(2000);
              digitalWrite(greenLED, LOW);
              delay(2000);
              digitalWrite(blueLED, HIGH);
              delay(2000);
              digitalWrite(blueLED, LOW);
              delay(2000);
              setRGBColor(255, 0, 255);
              delay(2000);
              analogWrite(orange1LED, 0);
              analogWrite(orange2LED, 0);
              analogWrite(orange3LED, 0);
              delay(3000);

              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the second LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 52) {
                  Serial.println("Good, now the third LED ");
                  delay(3000);
                  incomingByte = Serial.read();
                  if (incomingByte == 53) {
                    Serial.println("Congrats you won!!");
                    delay(1000);
                  }
                  else {
                    
                    delay(1000);
                  }
                } else {
                  
                  delay(1000);
                }
              } else {
                
                delay(1000);
              }
            }
          }
          //If second light orange, first Green
          else {
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(2000);
            setRGBColor(255, 0, 255);
            delay(2000);
            analogWrite(orange1LED, 0);
            analogWrite(orange2LED, 0);
            analogWrite(orange3LED, 0);
            delay(3000);
            incomingByte = Serial.read();

            //If Lights go G,O,G
            if (thirdLight == 49) {
              digitalWrite(greenLED, HIGH);
              delay(2000);
              digitalWrite(greenLED, LOW);
              delay(2000);
              setRGBColor(255, 0, 255);
              delay(2000);
              analogWrite(orange1LED, 0);
              analogWrite(orange2LED, 0);
              analogWrite(orange3LED, 0);
              digitalWrite(greenLED, HIGH);
              delay(2000);
              digitalWrite(greenLED, LOW);
              delay(3000);

              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the second LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 53) {
                  Serial.println("Good, now the third LED ");
                  delay(3000);
                  incomingByte = Serial.read();
                  if (incomingByte == 49) {
                    Serial.println("Congrats you won!!");
                    delay(1000);
                  }
                  else {
                    
                    delay(1000);
                  }
                } else {
                  
                  delay(1000);
                }
              } else {
                
                delay(1000);
              }
            }
            //If Lights go G,O,R
            else if (thirdLight == 50) {
              digitalWrite(greenLED, HIGH);
              delay(2000);
              digitalWrite(greenLED, LOW);
              delay(2000);
              setRGBColor(255, 0, 255);
              delay(2000);
              analogWrite(orange1LED, 0);
              analogWrite(orange2LED, 0);
              analogWrite(orange3LED, 0);
              digitalWrite(redLED, HIGH);
              delay(2000);
              digitalWrite(redLED, LOW);
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the second LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 53) {
                  Serial.println("Good, now the third LED ");
                  delay(3000);
                  incomingByte = Serial.read();
                  if (incomingByte == 50) {
                    Serial.println("Congrats you won!!");
                    delay(1000);
                  }
                  else {
                    
                    delay(1000);
                  }
                } else {
                  
                  delay(1000);
                }
              } else {
                
                delay(1000);
              }
            }
            //If Lights go G,O,Y
            else if (thirdLight == 51) {
              digitalWrite(greenLED, HIGH);
              delay(2000);
              digitalWrite(greenLED, LOW);
              delay(2000);
              setRGBColor(255, 0, 255);
              delay(2000);
              analogWrite(orange1LED, 0);
              analogWrite(orange2LED, 0);
              analogWrite(orange3LED, 0);
              digitalWrite(yellowLED, HIGH);
              delay(2000);
              digitalWrite(yellowLED, LOW);
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the second LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 53) {
                  Serial.println("Good, now the third LED ");
                  delay(3000);
                  incomingByte = Serial.read();
                  if (incomingByte == 51) {
                    Serial.println("Congrats you won!!");
                    delay(1000);
                  }
                  else {
                    
                    delay(1000);
                  }
                } else {
                  
                  delay(1000);
                }
              } else {
                
                delay(1000);
              }
            }
            //If Lights go G,O,B
            else if (thirdLight == 52) {
              digitalWrite(greenLED, HIGH);
              delay(2000);
              digitalWrite(greenLED, LOW);
              delay(2000);
              setRGBColor(255, 0, 255);
              delay(2000);
              analogWrite(orange1LED, 0);
              analogWrite(orange2LED, 0);
              analogWrite(orange3LED, 0);
              digitalWrite(blueLED, HIGH);
              delay(2000);
              digitalWrite(blueLED, LOW);
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the second LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 53) {
                  Serial.println("Good, now the third LED ");
                  delay(3000);
                  incomingByte = Serial.read();
                  if (incomingByte == 52) {
                    Serial.println("Congrats you won!!");
                    delay(1000);
                  }
                  else {
                    
                    delay(1000);
                  }
                } else {
                  
                  delay(1000);
                }
              } else {
                
                delay(1000);
              }
            }
            //IF lights go G,O,O
            else {
              digitalWrite(greenLED, HIGH);
              delay(2000);
              digitalWrite(greenLED, LOW);
              delay(2000);
              setRGBColor(255, 0, 255);
              delay(2000);
              analogWrite(orange1LED, 0);
              analogWrite(orange2LED, 0);
              analogWrite(orange3LED, 0);
              delay(2000);
              setRGBColor(255, 0, 255);
              analogWrite(orange1LED, 0);
              analogWrite(orange2LED, 0);
              analogWrite(orange3LED, 0);
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the second LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 53) {
                  Serial.println("Good, now the third LED ");
                  delay(3000);
                  incomingByte = Serial.read();
                  if (incomingByte == 53) {
                    Serial.println("Congrats you won!!");
                    delay(1000);
                  }
                  else {
                    
                    delay(1000);
                  }
                } else {
                  
                  delay(1000);
                }
              } else {
                
                delay(1000);
              }
            }
          }
        }
        else {
          
          delay(1000);
        }
      }
    }




    else if (firstLight == 50) {
      //If first light red
      //The correct light in the simon says game will be turned on for 2 seconds, then input read
      // to see if the player has the right LED.

      digitalWrite(redLED, HIGH);
      delay(2000);
      digitalWrite(redLED, LOW);
      delay(3000);
      incomingByte = Serial.read();
      if (incomingByte == 50) {
        Serial.println("Good job!");
        Serial.println("Simon says remember the pattern and find the next LED");
        delay(1000);
      }

      //If first light red, second green
      if (secondLight == 49) {
        digitalWrite(redLED, HIGH);
        delay(2000);
        digitalWrite(redLED, LOW);
        delay(2000);
        digitalWrite(greenLED, HIGH);
        delay(2000);
        digitalWrite(greenLED, LOW);
        delay(3000);

        incomingByte = Serial.read();
        if (incomingByte == 50) {
          Serial.println("Good job! Now what is the second LED?");
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 49) {
            Serial.println("Good job!");
            Serial.println("Simon says remember the pattern and find the next LED");
            delay(1000);
          }
        }

        //If Lights go R,G,G
        if (thirdLight == 49) {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 49) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go R,G,R
        else if (thirdLight == 50) {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 49) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 50) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }

        }
        //If Lights go R,G,Y
        else if (thirdLight == 51) {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 49) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 51) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }

        }
        //If Lights go R,G,B
        else if (thirdLight == 52) {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 49) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 52) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }

        }
        //IF lights go R,G,O
        else {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 49) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 53) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
      }
      //If second light red, first red
      else if (secondLight == 50) {
        digitalWrite(redLED, HIGH);
        delay(2000);
        digitalWrite(redLED, LOW);
        delay(2000);
        digitalWrite(redLED, HIGH);
        delay(2000);
        digitalWrite(redLED, LOW);
        delay(3000);

        incomingByte = Serial.read();
        if (incomingByte == 50) {
          Serial.println("Good job! Now what is the second LED?");
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good job!");
            Serial.println("Simon says remember the pattern and find the next LED");
            delay(1000);
          }
        }


        //If Lights go R,R,G
        if (thirdLight == 49) {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 50) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }


        }
        //If Lights go R,R,R
        else if (thirdLight == 50) {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 50) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 50) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go R,R,Y
        else if (thirdLight == 51) {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 50) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 51) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go R,R,B
        else if (thirdLight == 52) {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 50) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 52) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //IF lights go R,R,O
        else {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 50) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 53) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
      }
      //If second light yellow, first red
      else if (secondLight == 51) {

        digitalWrite(redLED, HIGH);
        delay(2000);
        digitalWrite(redLED, LOW);
        delay(2000);
        digitalWrite(yellowLED, HIGH);
        delay(2000);
        digitalWrite(yellowLED, LOW);
        delay(3000);

        incomingByte = Serial.read();
        if (incomingByte == 50) {
          Serial.println("Good job! Now what is the second LED?");
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good job!");
            Serial.println("Simon says remember the pattern and find the next LED");
            delay(1000);
          }
        }

        //If Lights go R,Y,G
        if (thirdLight == 49) {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 51) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go R,Y,R
        else if (thirdLight == 50) {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 51) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 50) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go R,Y,Y
        else if (thirdLight == 51) {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 51) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 51) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go R,Y,B
        else if (thirdLight == 52) {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 51) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 52) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //IF lights go R,Y,O
        else {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 51) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 53) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
      }
      //If second light blue, first Red
      else if (secondLight == 52) {
        digitalWrite(redLED, HIGH);
        delay(2000);
        digitalWrite(redLED, LOW);
        delay(2000);
        digitalWrite(blueLED, HIGH);
        delay(2000);
        digitalWrite(blueLED, LOW);
        delay(3000);

        incomingByte = Serial.read();
        if (incomingByte == 50) {
          Serial.println("Good job! Now what is the second LED?");
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 52) {
            Serial.println("Good job!");
            Serial.println("Simon says remember the pattern and find the next LED");
            delay(1000);
          }
        }


        //If Lights go R,B,G
        if (thirdLight == 49) {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go R,B,R
        else if (thirdLight == 50) {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 50) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go R,B,Y
        else if (thirdLight == 51) {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 51) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go R,B,B
        else if (thirdLight == 52) {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 52) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //IF lights go R,B,O
        else {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 53) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
      }
      //If second light orange, first Red
      else {
        digitalWrite(redLED, HIGH);
        delay(2000);
        digitalWrite(redLED, LOW);
        delay(2000);
        setRGBColor(255, 0, 255);
        delay(2000);
        analogWrite(orange1LED, 0);
        analogWrite(orange2LED, 0);
        analogWrite(orange3LED, 0);
        delay(3000);

        incomingByte = Serial.read();
        if (incomingByte == 50) {
          Serial.println("Good job! Now what is the second LED?");
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good job!");
            Serial.println("Simon says remember the pattern and find the next LED");
            delay(1000);
          }
        }


        //If Lights go R,O,G
        if (thirdLight == 49) {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 49) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 53) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go R,O,R
        else if (thirdLight == 50) {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 53) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 50) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go R,O,Y
        else if (thirdLight == 51) {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 53) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 51) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go R,O,B
        else if (thirdLight == 52) {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 53) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 52) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //IF lights go R,O,O
        else {
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 53) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 53) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
      }
    }

    //If first light yellow
    else if (firstLight == 51) {
      //The correct light in the simon says game will be turned on for 2 seconds, then input read
      // to see if the player has the right LED.

      digitalWrite(yellowLED, HIGH);
      delay(2000);
      digitalWrite(yellowLED, LOW);
      delay(3000);
      incomingByte = Serial.read();
      if (incomingByte == 51) {
        Serial.println("Good job!");
        Serial.println("Simon says remember the pattern and find the next LED");
        delay(1000);
      }

      //If first light yellow, second green
      if (secondLight == 49) {
        digitalWrite(yellowLED, HIGH);
        delay(2000);
        digitalWrite(yellowLED, LOW);
        delay(2000);
        digitalWrite(greenLED, HIGH);
        delay(2000);
        digitalWrite(greenLED, LOW);
        delay(3000);

        incomingByte = Serial.read();
        if (incomingByte == 51) {
          Serial.println("Good job! Now what is the second LED?");
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 49) {
            Serial.println("Good job!");
            Serial.println("Simon says remember the pattern and find the next LED");
            delay(1000);
          }
        }



        //If Lights go Y,G,G
        if (thirdLight == 49) {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 49) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go Y,G,R
        else if (thirdLight == 50) {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 49) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 50) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go Y,G,Y
        else if (thirdLight == 51) {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 49) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 51) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go Y,G,B
        else if (thirdLight == 52) {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 49) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 52) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //IF lights go Y,G,O
        else {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(2000);
          setRGBColor(255, 0 , 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 49) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 53) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
      }
      //If second light red, first yellow
      else if (secondLight == 50) {
        digitalWrite(yellowLED, HIGH);
        delay(2000);
        digitalWrite(yellowLED, LOW);
        delay(2000);
        digitalWrite(redLED, HIGH);
        delay(2000);
        digitalWrite(redLED, LOW);
        delay(3000);

        incomingByte = Serial.read();
        if (incomingByte == 51) {
          Serial.println("Good job! Now what is the second LED?");
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good job!");
            Serial.println("Simon says remember the pattern and find the next LED");
            delay(1000);
          }
        }


        //If Lights go Y,R,G
        if (thirdLight == 49) {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 50) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go Y,R,R
        else if (thirdLight == 50) {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 50) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 50) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go Y,R,Y
        else if (thirdLight == 51) {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 50) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 51) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go Y,R,B
        else if (thirdLight == 52) {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 50) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 52) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //IF lights go Y,R,O
        else {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 50) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 53) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
      }
      //If second light yellow, first yellow
      else if (secondLight == 51) {
        digitalWrite(yellowLED, HIGH);
        delay(2000);
        digitalWrite(yellowLED, LOW);
        delay(2000);
        digitalWrite(yellowLED, HIGH);
        delay(2000);
        digitalWrite(yellowLED, LOW);
        delay(3000);

        incomingByte = Serial.read();
        if (incomingByte == 51) {
          Serial.println("Good job! Now what is the second LED?");
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good job!");
            Serial.println("Simon says remember the pattern and find the next LED");
            delay(1000);
          }
        }


        //If Lights go Y,Y,G
        if (thirdLight == 49) {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 51) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go Y,Y,R
        else if (thirdLight == 50) {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 51) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 50) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go Y,Y,Y
        else if (thirdLight == 51) {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 51) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 51) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go Y,Y,B
        else if (thirdLight == 52) {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 51) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 52) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }

        //IF lights go Y,Y,O
        else {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 51) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 53) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
      }


      //If second light blue, first yellow
      else if (secondLight == 52) {
        digitalWrite(yellowLED, HIGH);
        delay(2000);
        digitalWrite(yellowLED, LOW);
        delay(2000);
        digitalWrite(blueLED, HIGH);
        delay(2000);
        digitalWrite(blueLED, LOW);
        delay(3000);

        incomingByte = Serial.read();
        if (incomingByte == 51) {
          Serial.println("Good job! Now what is the second LED?");
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 52) {
            Serial.println("Good job!");
            Serial.println("Simon says remember the pattern and find the next LED");
            delay(1000);
          }
        }

        //If Lights go Y,B,G
        if (thirdLight == 49) {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go Y,B,R
        else if (thirdLight == 50) {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 50) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go Y,B,Y
        else if (thirdLight == 51) {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 51) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go Y,B,B
        else if (thirdLight == 52) {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 52) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //IF lights go Y,B,O
        else {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 53) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
      }
      //If second light orange, first yellow
      else {
        digitalWrite(yellowLED, HIGH);
        delay(2000);
        digitalWrite(yellowLED, LOW);
        delay(2000);
        setRGBColor(255, 0, 255);
        delay(2000);
        analogWrite(orange1LED, 0);
        analogWrite(orange2LED, 0);
        analogWrite(orange3LED, 0);
        delay(3000);

        incomingByte = Serial.read();
        if (incomingByte == 51) {
          Serial.println("Good job! Now what is the second LED?");
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good job!");
            Serial.println("Simon says remember the pattern and find the next LED");
            delay(1000);
          }
        }

        //If Lights go Y,O,G
        if (thirdLight == 49) {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 53) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go Y,O,R
        else if (thirdLight == 50) {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 53) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 50) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go Y,O,Y
        else if (thirdLight == 51) {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 53) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 51) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go Y,O,B
        else if (thirdLight == 52) {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 53) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 52) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //IF lights go Y,O,O
        else {
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 49) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 53) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 53) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
      }
    }




    //If first light blue
    else if (firstLight == 52) {
      //The correct light in the simon says game will be turned on for 2 seconds, then input read
      // to see if the player has the right LED.

      digitalWrite(blueLED, HIGH);
      delay(2000);
      digitalWrite(blueLED, LOW);
      delay(3000);
      incomingByte = Serial.read();
      if (incomingByte == 52) {
        Serial.println("Good job! Pay attention so you can get the next one in the patter.");


        //If first light blue, second green
        if (secondLight == 49) {

          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(3000);

          incomingByte = Serial.read();
          if (incomingByte == 52) {
            Serial.println("Good job! Now what is the second LED?");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 49) {
              Serial.println("Good job!");
              Serial.println("Simon says remember the pattern and find the next LED");
              delay(1000);
            }
          }


          //If Lights go B,G,G
          if (thirdLight == 49) {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(2000);
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(3000);

            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 49) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
          //If Lights go B,G,R
          else if (thirdLight == 50) {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(2000);
            digitalWrite(redLED, HIGH);
            delay(2000);
            digitalWrite(redLED, LOW);
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 50) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
          //If Lights go B,G,Y
          else if (thirdLight == 51) {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(2000);
            digitalWrite(yellowLED, HIGH);
            delay(2000);
            digitalWrite(yellowLED, LOW);
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 51) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
          //If Lights go B,G,B
          else if (thirdLight == 52) {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(2000);
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 52) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
          //IF lights go B,G,O
          else {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(2000);
            setRGBColor(255, 0, 255);
            delay(2000);
            analogWrite(orange1LED, 0);
            analogWrite(orange2LED, 0);
            analogWrite(orange3LED, 0);
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 53) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
        }
        //If second light red, first blue
        else if (secondLight == 50) {

          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(3000);
          incomingByte = Serial.read();

          if (incomingByte == 52) {
            Serial.println("Good job! Now what is the second LED?");
            delay(3000);

            incomingByte = Serial.read();

            if (incomingByte == 50) {
              Serial.println("Good job!");
              Serial.println("Simon says remember the pattern and find the next LED");
              delay(1000);
            }
          }
          //If Lights go B,R,G
          if (thirdLight == 49) {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(redLED, HIGH);
            delay(2000);
            digitalWrite(redLED, LOW);
            delay(2000);
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 50) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 49) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
          //If Lights go B,R,R
          else if (thirdLight == 50) {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(redLED, HIGH);
            delay(2000);
            digitalWrite(redLED, LOW);
            delay(2000);
            digitalWrite(redLED, HIGH);
            delay(2000);
            digitalWrite(redLED, LOW);
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 50) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 50) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
          //If Lights go B,R,Y
          else if (thirdLight == 51) {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(redLED, HIGH);
            delay(2000);
            digitalWrite(redLED, LOW);
            delay(2000);
            digitalWrite(yellowLED, HIGH);
            delay(2000);
            digitalWrite(yellowLED, LOW);
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 50) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 51) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
          //If Lights go B,R,B
          else if (thirdLight == 52) {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(redLED, HIGH);
            delay(2000);
            digitalWrite(redLED, LOW);
            delay(2000);
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 50) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 52) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
          //IF lights go B,R,O
          else {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(redLED, HIGH);
            delay(2000);
            digitalWrite(redLED, LOW);
            delay(2000);
            setRGBColor(255, 0, 255);
            delay(2000);
            analogWrite(orange1LED, 0);
            analogWrite(orange2LED, 0);
            analogWrite(orange3LED, 0);
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 50) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 53) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
        }
        //If second light yellow, first blue
        else if (secondLight == 51) {
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(3000);

          incomingByte = Serial.read();
          if (incomingByte == 52) {
            Serial.println("Good job! Now what is the second LED?");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 51) {
              Serial.println("Good job!");
              Serial.println("Simon says remember the pattern and find the next LED");
              delay(1000);
            }
          }

          //If Lights go B,Y,G
          if (thirdLight == 49) {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(yellowLED, HIGH);
            delay(2000);
            digitalWrite(yellowLED, LOW);
            delay(2000);
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 51) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 49) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
          //If Lights go B,Y,R
          else if (thirdLight == 50) {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(yellowLED, HIGH);
            delay(2000);
            digitalWrite(yellowLED, LOW);
            delay(2000);
            digitalWrite(redLED, HIGH);
            delay(2000);
            digitalWrite(redLED, LOW);
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 51) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 50) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
          //If Lights go B,Y,Y
          else if (thirdLight == 51) {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(yellowLED, HIGH);
            delay(2000);
            digitalWrite(yellowLED, LOW);
            delay(2000);
            digitalWrite(yellowLED, HIGH);
            delay(2000);
            digitalWrite(yellowLED, LOW);
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 51) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 51) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
          //If Lights go B,Y,B
          else if (thirdLight == 52) {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(yellowLED, HIGH);
            delay(2000);
            digitalWrite(yellowLED, LOW);
            delay(2000);
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 51) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 52) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
          //IF lights go B,Y,O
          else {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(yellowLED, HIGH);
            delay(2000);
            digitalWrite(yellowLED, LOW);
            delay(2000);
            setRGBColor(255, 0, 255);
            delay(2000);
            analogWrite(orange1LED, 0);
            analogWrite(orange2LED, 0);
            analogWrite(orange3LED, 0);
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 51) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 53) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
        }
        //If second light blue, first blue
        else if (secondLight == 52) {
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(3000);

          incomingByte = Serial.read();
          if (incomingByte == 52) {
            Serial.println("Good job! Now what is the second LED?");
            delay(3000);

            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good job!");
              Serial.println("Simon says remember the pattern and find the next LED");
              delay(3000);
            }
          }

          //If Lights go B,B,G
          if (thirdLight == 49) {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 52) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 49) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
          //If Lights go B,B,R
          else if (thirdLight == 50) {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(redLED, HIGH);
            delay(2000);
            digitalWrite(redLED, LOW);
            delay(3000);

            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);

              incomingByte = Serial.read();

              if (incomingByte == 52) {
                Serial.println("Good, now the third LED ");
                delay(3000);

                incomingByte = Serial.read();
                if (incomingByte == 50) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }
              }
              else {
                
                delay(1000);
              }
            }
            else {
              
              delay(1000);
            }
          }
          //If Lights go B,B,Y
          else if (thirdLight == 51) {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(yellowLED, HIGH);
            delay(2000);
            digitalWrite(yellowLED, LOW);
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 52) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 51) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
          //If Lights go B,B,B
          else if (thirdLight == 52) {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(3000);

            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 52) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 52) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
          //IF lights go B,B,O
          else {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            setRGBColor(255, 0, 255);
            delay(2000);
            analogWrite(orange1LED, 0);
            analogWrite(orange2LED, 0);
            analogWrite(orange3LED, 0);
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 52) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 53) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }

          }
        }
        //If second light orange, first blue
        else {

          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(3000);

          incomingByte = Serial.read();
          if (incomingByte == 52) {
            Serial.println("Good job! Now what is the second LED?");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 53) {
              Serial.println("Good job!");
              Serial.println("Simon says remember the pattern and find the next LED");
              delay(1000);
            }
          }



          //If Lights go B,O,G
          if (thirdLight == 49) {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            setRGBColor(255, 0, 255);
            delay(2000);
            analogWrite(orange1LED, 0);
            analogWrite(orange2LED, 0);
            analogWrite(orange3LED, 0);
            delay(2000);
            digitalWrite(greenLED, HIGH);
            delay(2000);
            digitalWrite(greenLED, LOW);
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 53) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 49) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
          //If Lights go B,O,R
          else if (thirdLight == 50) {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            setRGBColor(255, 0, 255);
            delay(2000);
            analogWrite(orange1LED, 0);
            analogWrite(orange2LED, 0);
            analogWrite(orange3LED, 0);
            delay(2000);
            digitalWrite(redLED, HIGH);
            delay(2000);
            digitalWrite(redLED, LOW);
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 53) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 50) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
          //If Lights go B,O,Y
          else if (thirdLight == 51) {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            setRGBColor(255, 0, 255);
            delay(2000);
            analogWrite(orange1LED, 0);
            analogWrite(orange2LED, 0);
            analogWrite(orange3LED, 0);
            delay(2000);
            digitalWrite(yellowLED, HIGH);
            delay(2000);
            digitalWrite(yellowLED, LOW);
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 53) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 51) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
          //If Lights go B,O,B
          else if (thirdLight == 52) {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            setRGBColor(255, 0, 255);
            delay(2000);
            analogWrite(orange1LED, 0);
            analogWrite(orange2LED, 0);
            analogWrite(orange3LED, 0);
            delay(2000);
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 53) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 52) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
          //IF lights go B,O,O
          else {
            digitalWrite(blueLED, HIGH);
            delay(2000);
            digitalWrite(blueLED, LOW);
            delay(2000);
            setRGBColor(255, 0, 255);
            delay(2000);
            analogWrite(orange1LED, 0);
            analogWrite(orange2LED, 0);
            analogWrite(orange3LED, 0);
            delay(2000);
            setRGBColor(255, 0, 255);
            delay(2000);
            analogWrite(orange1LED, 0);
            analogWrite(orange2LED, 0);
            analogWrite(orange3LED, 0);
            delay(2000);
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the second LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 53) {
                Serial.println("Good, now the third LED ");
                delay(3000);
                incomingByte = Serial.read();
                if (incomingByte == 53) {
                  Serial.println("Congrats you won!!");
                  delay(1000);
                }
                else {
                  
                  delay(1000);
                }

              } else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
        }
      }
    }


    //If first light orange

    else {
      setRGBColor(255, 0, 255);
      delay(2000);
      analogWrite(orange1LED, 0);
      analogWrite(orange2LED, 0);
      analogWrite(orange3LED, 0);
      delay(3000);
      incomingByte = Serial.read();
      if (incomingByte == 53) {
        Serial.println("Good job! Get the next LED .");
        delay(1000);
      }
      //If first light orange, second green
      if (secondLight == 49) {
        setRGBColor(255, 0, 255);
        delay(2000);
        analogWrite(orange1LED, 0);
        analogWrite(orange2LED, 0);
        analogWrite(orange3LED, 0);
        digitalWrite(greenLED, HIGH);
        delay(2000);
        digitalWrite(greenLED, LOW);
        delay(3000);

        incomingByte = Serial.read();
        if (incomingByte == 53) {
          Serial.println("Good job! Now what is the second LED?");
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 49) {
            Serial.println("Good job!");
            Serial.println("Simon says remember the pattern and find the next LED");
            delay(1000);
          }
        }


        //If Lights go O,G,G
        if (thirdLight == 49) {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 49) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go O,G,R
        else if (thirdLight == 50) {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 49) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 50) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go O,G,Y
        else if (thirdLight == 51) {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 49) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 51) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go O,G,B
        else if (thirdLight == 52) {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 49) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 52) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //IF lights go O,G,O
        else {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 49) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 53) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
      }
      //If second light red, first orange
      else if (secondLight == 50) {
        setRGBColor(255, 0, 255);
        delay(2000);
        analogWrite(orange1LED, 0);
        analogWrite(orange2LED, 0);
        analogWrite(orange3LED, 0);
        digitalWrite(redLED, HIGH);
        delay(2000);
        digitalWrite(redLED, LOW);
        delay(3000);

        incomingByte = Serial.read();
        if (incomingByte == 53) {
          Serial.println("Good job! Now what is the second LED?");
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 50) {
            Serial.println("Good job!");
            Serial.println("Simon says remember the pattern and find the next LED");
            delay(1000);
          }
        }

        //If Lights go O,R,G
        if (thirdLight == 49) {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 50) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            } else {
              
              delay(1000);
            }
          } else {
            
            delay(1000);
          }
        }
        //If Lights go O,R,R
        else if (thirdLight == 50) {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 50) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 50) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }
            }
            else {
              
              delay(1000);
            }
          }
          else {
            
            delay(1000);
          }
        }
        //If Lights go O,R,Y
        else if (thirdLight == 51) {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 50) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 51) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            }
            else {
              
              delay(1000);
            }
          }
          else {
            
            delay(1000);
          }
        }
        //If Lights go O,R,B
        else if (thirdLight == 52) {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 50) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 52) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }
            }
            else {
              
              delay(1000);
            }
          }
          else {
            
            delay(1000);
          }
        }
        //IF lights go O,R,O
        else {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 50) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 53) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            }
            else {
              
              delay(1000);
            }
          }
          else {
            
            delay(1000);
          }
        }
      }
      //If second light yellow, first orange
      else if (secondLight == 51) {
        setRGBColor(255, 0, 255);
        delay(2000);
        analogWrite(orange1LED, 0);
        analogWrite(orange2LED, 0);
        analogWrite(orange3LED, 0);
        digitalWrite(yellowLED, HIGH);
        delay(2000);
        digitalWrite(yellowLED, LOW);
        delay(3000);

        incomingByte = Serial.read();
        if (incomingByte == 53) {
          Serial.println("Good job! Now what is the second LED?");
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 51) {
            Serial.println("Good job!");
            Serial.println("Simon says remember the pattern and find the next LED");
            delay(1000);
          }
        }

        //If Lights go O,Y,G
        if (thirdLight == 49) {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 51) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }

            }
            else {
              
              delay(1000);
            }
          }
          else {
            
            delay(1000);
          }
        }
        //If Lights go O,Y,R
        else if (thirdLight == 50) {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 51) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 50) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }
            }
            else {
              
              delay(1000);
            }
          }
          else {
            
            delay(1000);
          }
        }
        //If Lights go O,Y,Y
        else if (thirdLight == 51) {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 50) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }
            }
            else {
              
              delay(1000);
            }
          }
          else {
            
            delay(1000);
          }
        }
        //If Lights go O,Y,B
        else if (thirdLight == 52) {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 50) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 52) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }
            }
            else {
              
              delay(1000);
            }
          }
          else {
            
            delay(1000);
          }
        }
        //IF lights go O,Y,O
        else {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 50) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 53) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }
            } else {
              
              delay(1000);
            }
          }
          else {
            
            delay(1000);
          }
        }
      }
      //If second light blue, first orange
      else if (secondLight == 52) {
        setRGBColor(255, 0, 255);
        delay(2000);
        analogWrite(orange1LED, 0);
        analogWrite(orange2LED, 0);
        analogWrite(orange3LED, 0);
        digitalWrite(blueLED, HIGH);
        delay(2000);
        digitalWrite(blueLED, LOW);
        delay(3000);

        incomingByte = Serial.read();
        if (incomingByte == 53) {
          Serial.println("Good job! Now what is the second LED?");
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 52) {
            Serial.println("Good job!");
            Serial.println("Simon says remember the pattern and find the next LED");
            delay(1000);
          }
        }

        //If Lights go O,B,G
        if (thirdLight == 49) {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }
            }
            else {
              
              delay(1000);
            }
          }
          else {
            
            delay(1000);
          }
        }
        //If Lights go O,B,R
        else if (thirdLight == 53) {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 49) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 50) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }
            }
            else {
              
              delay(1000);
            }
          }
          else {
            
            delay(1000);
          }
        }
        //If Lights go O,B,Y
        else if (thirdLight == 51) {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 51) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }
            }
            else {
              
              delay(1000);
            }
          }
          else {
            
            delay(1000);
          }
        }
        //If Lights go O,B,B
        else if (thirdLight == 52) {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 52) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }
            }
            else {
              
              delay(1000);
            }
          }
          else {
            
            delay(1000);
          }
        }
        //IF lights go O,B,O
        else {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 52) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 53) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }
            }
            else {
              
              delay(1000);
            }
          }
          else {
            
            delay(1000);
          }
        }
      }
      //If second light orange, first orange
      else {
        setRGBColor(255, 0, 255);
        delay(2000);
        analogWrite(orange1LED, 0);
        analogWrite(orange2LED, 0);
        analogWrite(orange3LED, 0);
        delay(2000);
        setRGBColor(255, 0, 255);
        delay(2000);
        analogWrite(orange1LED, 0);
        analogWrite(orange2LED, 0);
        analogWrite(orange3LED, 0);
        delay(3000);

        incomingByte = Serial.read();
        if (incomingByte == 53) {
          Serial.println("Good job! Now what is the second LED?");
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good job!");
            Serial.println("Simon says remember the pattern and find the next LED");
            delay(1000);
          }
        }

        //If Lights go O,O,G
        if (thirdLight == 49) {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(greenLED, HIGH);
          delay(2000);
          digitalWrite(greenLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 53) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 49) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }
            }
            else {
              
              delay(1000);
            }
          }
          else {
            
            delay(1000);
          }
        }
        //If Lights go O,O,R
        else if (thirdLight == 50) {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(redLED, HIGH);
          delay(2000);
          digitalWrite(redLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 53) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 50) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }
            }
            else {
              
              delay(1000);
            }
          }
          else {
            
            delay(1000);
          }
        }
        //If Lights go O,O,Y
        else if (thirdLight == 51) {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(yellowLED, HIGH);
          delay(2000);
          digitalWrite(yellowLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 53) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 51) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }
            }
            else {
              
              delay(1000);
            }
          }
          else {
            
            delay(1000);
          }
        }
        //If Lights go O,O,B
        else if (thirdLight == 52) {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          digitalWrite(blueLED, HIGH);
          delay(2000);
          digitalWrite(blueLED, LOW);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 53) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 52) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
                delay(1000);
              }
            }
            else {
              
              delay(1000);
            }
          }
          else {
            
            delay(1000);
          }
        }
        //IF lights go O,O,O
        else {
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          setRGBColor(255, 0, 255);
          delay(2000);
          analogWrite(orange1LED, 0);
          analogWrite(orange2LED, 0);
          analogWrite(orange3LED, 0);
          delay(2000);
          delay(3000);
          incomingByte = Serial.read();
          if (incomingByte == 53) {
            Serial.println("Good, now the second LED ");
            delay(3000);
            incomingByte = Serial.read();
            if (incomingByte == 53) {
              Serial.println("Good, now the third LED ");
              delay(3000);
              incomingByte = Serial.read();
              if (incomingByte == 53) {
                Serial.println("Congrats you won!!");
                delay(1000);
              }
              else {
                
              }
            }
            else {
            }
          }
          else {
            
          }
        }
      }
    }
  }
  
}


void setRGBColor(int redValue, int greenValue, int blueValue) {
  analogWrite(orange1LED, redValue);
  analogWrite(orange2LED, greenValue);
  analogWrite(orange3LED, blueValue);
}

