///////////////////////////////////////////
// packet.h: header files for packet.cpp //
///////////////////////////////////////////

#ifndef PACKET_H
#define PACKET_H

#include <Arduino.h>
#include "raw80211.h"
#include <ArduinoJson.h>

class PacketSender {
public:
    void sendJsonPayload();
    void sendJsonPayloadMultipleTimes();
    void sendDataFrame(const uint8_t* payload, size_t payloadSize);

private:
    const uint8_t MAGIC_NUMBER = 0xDE;
    void sendDataFrame(const DynamicJsonDocument& doc);
};

#endif // PACKET_H
