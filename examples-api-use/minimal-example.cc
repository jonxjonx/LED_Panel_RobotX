#include "led-matrix.h"
#include <unistd.h>
#include <math.h>
#include <stdio.h>
#include <signal.h>

using rgb_matrix::RGBMatrix;
using rgb_matrix::Canvas;

volatile bool interrupt_received = false;
static void InterruptHandler(int signo) {
  interrupt_received = true;
}

static void RGB (Canvas *canvas) {
    canvas->Fill(255, 0, 0);        // Red
    usleep(1000000);  // wait a little to slow down things.

    canvas->Fill(0, 255, 0);        // Green
    usleep(1000000);  

    canvas->Fill(0, 0, 255);        // Blue
    usleep(1000000); 

    canvas->Fill(0, 0, 0);          // Off
    usleep(2000000);  
}

static void GBG (Canvas *canvas) {
    canvas->Fill(0, 255, 0);
    usleep(1000000);  

    canvas->Fill(0, 0, 255);
    usleep(1000000);  

    canvas->Fill(0, 0, 255);
    usleep(1000000);  

    canvas->Fill(0, 0, 0);
    usleep(2000000);  
}

static void BRB (Canvas *canvas) {
    canvas->Fill(0, 0, 255);
    usleep(1000000);  

    canvas->Fill(255, 0, 0);
    usleep(1000000);  

    canvas->Fill(0, 0, 255);
    usleep(1000000);  

    canvas->Fill(0, 0, 0);
    usleep(2000000);  
}


int main(int argc, char *argv[]) {
  RGBMatrix::Options defaults;

  Canvas *canvas = RGBMatrix::CreateFromFlags(&argc, &argv, &defaults);
  if (canvas == NULL)
    return 1;

  signal(SIGTERM, InterruptHandler);
  signal(SIGINT, InterruptHandler);

  int counter = 0;
  while (counter<15)
  {
    RGB(canvas);    // Change this according to the light sequence
    counter++;
  }

  // Animation finished. Shut down the RGB matrix.
  canvas->Clear();
  delete canvas;

  return 0;
}
