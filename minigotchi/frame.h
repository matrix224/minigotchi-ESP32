/**
 * frame.h: header files for frame.cpp
*/

#ifndef FRAME_H
#define FRAME_H

#include "raw80211.h"
#include "config.h"

class Frame {
public:
    static void send();
    static void advertise();
    static void start();
    static void stop();
    static const uint8_t FRAME_CONTROL;
    static const uint8_t CAPABILITIES_INFO;
    static const uint8_t IDWhisperPayload;
    static const uint8_t IDWhisperCompression;
    
private:
    static bool running;
    static bool framePrinted;
    static uint8_t beaconFrame;  
};

#endif // FRAME_H
