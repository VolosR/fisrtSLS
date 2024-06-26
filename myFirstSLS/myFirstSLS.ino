#include <LilyGo_AMOLED.h>
#include <LV_Helper.h>
#include "ui.h"

int number=100;

LilyGo_Class amoled;

void setup() {
   bool rslt = false;
      rslt = amoled.begin();

    if (!rslt) {
        while (1) {
            Serial.println("The board model cannot be detected, please raise the Core Debug Level to an error");
            delay(1000);
        }
    }

    beginLvglHelper(amoled);
    ui_init();
}



void loop() {

 lv_task_handler();
    delay(5);

}