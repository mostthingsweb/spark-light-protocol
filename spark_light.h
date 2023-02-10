#ifndef SPARK_LIGHT_REMOTE_SPARK_LIGHT_H
#define SPARK_LIGHT_REMOTE_SPARK_LIGHT_H

typedef struct {
    uint8_t state;                        //Indicate that if has received broadcast ESPNOW data or not.
    uint16_t seq_num;                     //Sequence number of ESPNOW data.
    uint16_t crc;                         //CRC16 value of ESPNOW data.
    uint32_t magic;                       //Magic number which is used to determine which device to send unicast ESPNOW data.
    uint8_t payload[0];                   //Real payload of ESPNOW data.
} __attribute__((packed)) example_espnow_data_t;

#endif //SPARK_LIGHT_REMOTE_SPARK_LIGHT_H
