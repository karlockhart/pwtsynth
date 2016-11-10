#include <SPI.h>
#include <MCP48x2.h>
#include "synth.h"

// Setup ADC
#define MAX_VALUE  255
#define CS_PIN  10

byte channelA = CHANNEL_A | GAIN_2 | MODE_ACTIVE;
MCP48x2 dac(MCP4802, CS_PIN);

typedef struct {
  char wavePosition;
  int fequency;
} voice;

voice voices[4];

void setup() {
  SPI.begin();
  dac.send(CHANNEL_B | MODE_SHUTDOWN, 0);
  dac.send(channelA, 0);
}

void loop() {

}


