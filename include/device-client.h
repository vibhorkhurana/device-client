#ifndef _DEVICE_CLIENT_H_
#define _DEVICE_CLIENT_H_

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

#include <pthread.h>

#include <onion-debug.h>

#include <device-client-types.h>
#include <device-client-utils.h>

#include "json-c/json.h"


// Function declarations
int 	dcGetIdentity 					(char* devId, char* key, char* devName);
int 	dcSetIdentity 					(char* devId, char* key);

int 	dcSetup							(char* devId, char* key, char* devName, char* host);
int 	dcRun 							(int debugLevel);

int 	dcProcessRecvCommand 			(char* receivedData);

int 	dcGenerateResponseUrl			(json_object *jobj, char* respUrl, char* id);
int 	dcProcessUbusCommand 			(json_object *jobj, char* respUrl);






#endif // _DEVICE_CLIENT_H_ 
