#ifndef SPARK_LIGHT_REMOTE_SPARK_LIGHT_H
#define SPARK_LIGHT_REMOTE_SPARK_LIGHT_H

#include "iot_button.h"

typedef struct {
    button_event_t iot_event;
    uint8_t button_id;
} spark_light_button_event;

typedef union {
    spark_light_button_event button_event_data;
    uint8_t rotary_encoder_position;
} __attribute__ ((__packed__)) spark_light_command_data_t;

typedef enum {
    BUTTON_EVENT,
    ROTARY_ENCODER_EVENT,
} __attribute__ ((__packed__)) spark_light_command_type_t;

typedef struct {
    uint8_t len;                          /// Data length of payload
    uint16_t crc;                         /// CRC16 value of payload
    spark_light_command_type_t cmd;       /// Command
    spark_light_command_data_t cmd_data;  /// Command-specific data
    int64_t ticks;                        /// System uptime
} __attribute__((packed)) spark_light_espnow_packet_t;

#endif //SPARK_LIGHT_REMOTE_SPARK_LIGHT_H
