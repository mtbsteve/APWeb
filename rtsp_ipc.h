// #pragma once
#ifndef RTSP_IPC_H
#define RTSP_IPC_H

typedef enum RTSP_MESSAGE_TYPE  {GET_DEVICE_PROPS, 
                                TMP,
                                ERR,
                                RTSP_MESSAGE_TYPE_COUNT} 
                                RTSP_MESSAGE_TYPE;

void get_server_response(RTSP_MESSAGE_TYPE type, char* reply, char* args);
void process_server_response(char* reply, char* result);
RTSP_MESSAGE_TYPE get_message_type(char* header);

#endif