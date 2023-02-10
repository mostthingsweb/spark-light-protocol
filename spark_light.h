#ifndef SPARK_LIGHT_REMOTE_SPARK_LIGHT_H
#define SPARK_LIGHT_REMOTE_SPARK_LIGHT_H

typedef union {

} __attribute__ ((__packed__)) spark_light_command_data_t;

typedef enum {
    BUTTON_PRESS,
    BUTTON_RELEASE,
} __attribute__ ((__packed__)) spark_light_command_type_t;

typedef struct {
    uint8_t len;                          /// Data length of payload
    uint16_t crc;                         /// CRC16 value of payload
    spark_light_command_type_t cmd;       /// Command
    spark_light_command_data_t cmd_data;  /// Command-specific data
} __attribute__((packed)) spark_light_espnow_packet_t;

#endif //SPARK_LIGHT_REMOTE_SPARK_LIGHT_H
