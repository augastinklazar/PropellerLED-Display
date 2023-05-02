void setup() {
  // Initialize the display
  display.begin();
  display.setBrightness(255);

  // Initialize the position encoder
  pinMode(D6, INPUT);

  // Start the motor
  digitalWrite(D5, HIGH);
}

// The loop() function is called repeatedly, as long as the Arduino is running.
void loop() {
  // Read the position encoder
  position = digitalRead(D6);

  // Calculate the current character
  current_char = (position + 1) % 26;

  // Display the current character
  display.clear();
  display.setCursor(0, 0);
  display.print(current_char);
  display.show();
}
