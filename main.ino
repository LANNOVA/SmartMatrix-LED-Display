//sravstudios

#include <SmartMatrix.h>
#include "gimpbitmap.h"

#define potPin A0 
#include "a.c"
#include "b.c"
#include "c.c"
#include "d.c"
#include "e.c"
#include "f.c"
#include "g.c"
#include "h.c"
#include "i.c"
#include "j.c"
#include "k.c"
#include "l.c"
#include "m.c"
#include "n.c"
#include "o.c"
#include "p.c"
#include "q.c"
#include "r.c"
#include "s.c"
#include "t.c"
#include "u.c"
#include "v.c"
#include "w.c"
#include "z.c"
#include <MatrixHardware_Teensy4_ShieldV5.h>  
#include "colorwheel.c"
#include "back.c"
int wait = 1;
int currentBitmapIndex = 0; 
int led = -1; 
#include "colorwheel.c"
#include "back.c"
#define COLOR_DEPTH 24                  // Choose the color depth used for storing pixels in the layers: 24 or 48 (24 is good for most sketches - If the sketch uses type `rgb24` directly, COLOR_DEPTH must be 24)
const uint16_t kMatrixWidth = 64;       // Set to the width of your display, must be a multiple of 8
const uint16_t kMatrixHeight = 64;      // Set to the height of your display
const uint8_t kRefreshDepth = 36;       // Tradeoff of color quality vs refresh rate, max brightness, and RAM usage.  36 is typically good, drop down to 24 if you need to.  On Teensy, multiples of 3, up to 48: 3, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33, 36, 39, 42, 45, 48.  On ESP32: 24, 36, 48
const uint8_t kDmaBufferRows = 4;       // known working: 2-4, use 2 to save RAM, more to keep from dropping frames and automatically lowering refresh rate.  (This isn't used on ESP32, leave as default)
const uint8_t kPanelType = SM_PANELTYPE_HUB75_64ROW_MOD32SCAN;   // Choose the configuration that matches your panels.  See more details in MatrixCommonHub75.h and the docs: https://github.com/pixelmatix/SmartMatrix/wiki
const uint32_t kMatrixOptions = (SM_HUB75_OPTIONS_NONE);        // see docs for options: https://github.com/pixelmatix/SmartMatrix/wiki
const uint8_t kBackgroundLayerOptions = (SM_BACKGROUND_OPTIONS_NONE);

SMARTMATRIX_ALLOCATE_BUFFERS(matrix, kMatrixWidth, kMatrixHeight, kRefreshDepth, kDmaBufferRows, kPanelType, kMatrixOptions);
SMARTMATRIX_ALLOCATE_BACKGROUND_LAYER(backgroundLayer, kMatrixWidth, kMatrixHeight, COLOR_DEPTH, kBackgroundLayerOptions);

void setup() {
  pinMode(potPin, INPUT); 
  matrix.addLayer(&backgroundLayer);
  matrix.begin();

  matrix.setBrightness(50);

  if (led >= 0)  pinMode(led, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);
  int mappedIndex = map(potValue, 0, 1023, 0, 25);
  if (mappedIndex != currentBitmapIndex) {
    currentBitmapIndex = mappedIndex;
    displaySelectedBitmap();
  }
void displaySelectedBitmap() {
  int x, y;

  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (a.width/2);
  y = (kMatrixHeight / 2) - (a.height/2);
  drawBitmap(x,y,(const gimp32x32bitmap*)&a);
  backgroundLayer.swapBuffers();
   if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait); 
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);

  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (b.width/2);
  y = (kMatrixHeight / 2) - (b.height/2);
  drawBitmap(x,y,(const gimp32x32bitmap*)&b);
  backgroundLayer.swapBuffers();
   if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait); 
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);

  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (c.width/2);
  y = (kMatrixHeight / 2) - (c.height/2);
  drawBitmap(x,y,(const gimp32x32bitmap*)&c);
  backgroundLayer.swapBuffers();
   if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait); 
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);

  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (d.width/2);
  y = (kMatrixHeight / 2) - (d.height/2);
  drawBitmap(x,y,(const gimp32x32bitmap*)&d);
  backgroundLayer.swapBuffers();
   if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait); 
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);

  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (e.width/2);
  y = (kMatrixHeight / 2) - (e.height/2);
  drawBitmap(x,y,(const gimp32x32bitmap*)&e);
  backgroundLayer.swapBuffers();
   if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait); 
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);

  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (f.width/2);
  y = (kMatrixHeight / 2) - (f.height/2);
  drawBitmap(x,y,(const gimp32x32bitmap*)&f);
  backgroundLayer.swapBuffers();
   if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait); 
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);

  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (g.width/2);
  y = (kMatrixHeight / 2) - (g.height/2);
  drawBitmap(x,y,(const gimp32x32bitmap*)&g);
  backgroundLayer.swapBuffers();
   if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait); 
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);

  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (h.width/2);
  y = (kMatrixHeight / 2) - (h.height/2);
  drawBitmap(x,y,(const gimp32x32bitmap*)&h);
  backgroundLayer.swapBuffers();
   if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait); 
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);

  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (i.width/2);
  y = (kMatrixHeight / 2) - (i.height/2);
  drawBitmap(x,y,(const gimp32x32bitmap*)&i);
  backgroundLayer.swapBuffers();
   if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait); 
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);

  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (j.width/2);
  y = (kMatrixHeight / 2) - (j.height/2);
  drawBitmap(x,y,(const gimp32x32bitmap*)&j);
  backgroundLayer.swapBuffers();
   if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait); 
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);

  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (k.width/2);
  y = (kMatrixHeight / 2) - (k.height/2);
  drawBitmap(x,y,(const gimp32x32bitmap*)&k);
  backgroundLayer.swapBuffers();
   if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait); 
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);


  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (l.width/2);
  y = (kMatrixHeight / 2) - (l.height/2);
  drawBitmap(x,y,(const gimp32x32bitmap*)&l);
  backgroundLayer.swapBuffers();
   if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait); 
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);


  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (m.width/2);
  y = (kMatrixHeight / 2) - (m.height/2);
  drawBitmap(x,y,(const gimp32x32bitmap*)&m);
  backgroundLayer.swapBuffers();
   if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait); 
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);


  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (n.width/2);
  y = (kMatrixHeight / 2) - (n.height/2);
  drawBitmap(x,y,(const gimp32x32bitmap*)&n);
  backgroundLayer.swapBuffers();
   if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait); 
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);


  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (o.width/2);
  y = (kMatrixHeight / 2) - (o.height/2);
  drawBitmap(x,y,(const gimp32x32bitmap*)&o);
  backgroundLayer.swapBuffers();
   if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait); 
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);


  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (p.width/2);
  y = (kMatrixHeight / 2) - (p.height/2);
  drawBitmap(x,y,(const gimp32x32bitmap*)&p);
  backgroundLayer.swapBuffers();
   if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait); 
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);


  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (q.width/2);
  y = (kMatrixHeight / 2) - (q.height/2);
  drawBitmap(x,y,(const gimp32x32bitmap*)&q);
  backgroundLayer.swapBuffers();
   if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait); 
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);


  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (r.width/2);
  y = (kMatrixHeight / 2) - (r.height/2);
  // to use drawBitmap, must cast the pointer to pixelmatixlogo as (const gimp32x32bitmap*)
  drawBitmap(x,y,(const gimp32x32bitmap*)&r);
  backgroundLayer.swapBuffers();
  if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait); 
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);


  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (s.width/2);
  y = (kMatrixHeight / 2) - (s.height/2);
  drawBitmap(x,y,(const gimp32x32bitmap*)&s);
  backgroundLayer.swapBuffers();
   if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait); 
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);


  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (t.width/2);
  y = (kMatrixHeight / 2) - (t.height/2);
  drawBitmap(x,y,(const gimp32x32bitmap*)&t);
  backgroundLayer.swapBuffers();
  if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait); 
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);


  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (u.width/2);
  y = (kMatrixHeight / 2) - (u.height/2);
  drawBitmap(x,y,(const gimp32x32bitmap*)&u);
  backgroundLayer.swapBuffers();
   if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait); 
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);


  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (v.width/2);
  y = (kMatrixHeight / 2) - (v.height/2);
  drawBitmap(x,y,(const gimp32x32bitmap*)&v);
  backgroundLayer.swapBuffers();
   if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait); 
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);

  
  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (w.width/2);
  y = (kMatrixHeight / 2) - (w.height/2);
  drawBitmap(x,y,(const gimp32x32bitmap*)&w);
  backgroundLayer.swapBuffers();
   if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait);
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);



  backgroundLayer.fillScreen({0,0,0});
  x = (kMatrixWidth / 2) - (z.width/2);
  y = (kMatrixHeight / 2) - (z.height/2);
  drawBitmap(x,y,(const gimp32x32bitmap*)&z);
  backgroundLayer.swapBuffers();
  if(led >= 0)  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait);
  if(led >= 0)  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(wait);
}
}
}

void drawBitmap(int16_t x, int16_t y, const gimp32x32bitmap* bitmap) {
  for (unsigned int i = 0; i < bitmap->height; i++) {
    for (unsigned int j = 0; j < bitmap->width; j++) {
      SM_RGB pixel = {
        bitmap->pixel_data[(i * bitmap->width + j) * 3 + 0],
        bitmap->pixel_data[(i * bitmap->width + j) * 3 + 1],
        bitmap->pixel_data[(i * bitmap->width + j) * 3 + 2]
      };
      if (COLOR_DEPTH == 48) {
        pixel.red = pixel.red << 8;
        pixel.green = pixel.green << 8;
        pixel.blue = pixel.blue << 8;
      }

      backgroundLayer.drawPixel(x + j, y + i, pixel);
    }
  }
}
