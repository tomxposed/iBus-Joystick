#include <Joystick.h>
#include "FlySkyIBus.h"

volatile int values[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

// Joystick setup object
Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID,JOYSTICK_TYPE_MULTI_AXIS, 32, 0,true, true, false, false, false, false, true, true, false, false, false);
//                ( HID report ID             Joystick Type,           btn hat  X     Y     Z      Rx     Ry     Rz   Rudd   Thro  Acc   Break  Steer)

void setup()
{
  Joystick.begin(true);
  Serial1.begin(115200);
  IBus.begin(Serial1);
  Joystick.setXAxisRange(0, 1023);
  Joystick.setYAxisRange(0, 1023);
  Joystick.setThrottleRange(0, 1023);
  Joystick.setRudderRange(0, 1023);
}

void loop()
{
  IBus.loop();
  // Read and set states from all channels
  for (int i = 0; i < 8; i++) {
    values[i] = IBus.readChannel(i);

  }

  // Get positions values
  values[0] = map(values[0], 1000, 2000, 0, 1023);
  values[1] = map(values[1], 1000, 2000, 0, 1023);
  values[2] = map(values[2], 1000, 2000, 0, 1023);
  values[3] = map(values[3], 1000, 2000, 0, 1023);
  values[4] = map(values[4], 1000, 2000, 0, 1);
  values[5] = map(values[5], 1000, 2000, 0, 1);
  values[6] = map(values[6], 1000, 1500, 0, 1);
  values[7] = map(values[7], 1000, 2000, 0, 1);

  // Map values to the Joystick object
  Joystick.setXAxis(values[0]);
  Joystick.setYAxis(values[1]);
  Joystick.setThrottle(values[2]);
  Joystick.setRudder(values[3]);
  Joystick.setButton(0, values[4]);
  Joystick.setButton(1, values[5]);
  Joystick.setButton(2, values[6]);
  Joystick.setButton(3, values[7]);

}
