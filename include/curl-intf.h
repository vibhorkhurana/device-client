#ifndef _CURL_COMMUNICATION_H_
#define _CURL_COMMUNICATION_H_

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

#include <onion-debug.h>

#include <device-client-types.h>

#include "json-c/json.h"


// lazar: debug
#include <time.h>


int 			curlInit		();
int 			curlCleanup		();


int 			curlListen 		(char* host, char* request, int debugLevel);
int  			curlPost		(char* url, char* postData);

#endif // _CURL_COMMUNICATION_H_ 

