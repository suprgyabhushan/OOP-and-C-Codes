//in call.h
#ifndef CALL_H
#define CALL_H
#include"phone.h"
class Network
{
    public:
        int w;
        void makeCall(long int arr[][5],long int,int,int);
        int receiveCall(long int arr[][5],long int,int);        
};            
#endif    
 
