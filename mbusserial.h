//------------------------------------------------------------------------------
// Copyright (C) 2011, Robert Johansson, Raditex AB
// All rights reserved.
//
// rSCADA 
// http://www.rSCADA.se
// info@rscada.se
//
//------------------------------------------------------------------------------

/**
 * @file   mbus-serial.h
 * 
 * @brief  Functions and data structures for sending M-Bus data via RS232.
 *
 */

#ifndef MBUS_SERIAL_H
#define MBUS_SERIAL_H

//#include <termios.h>
#include "mbusprotocol.h"
#include "SoftwareSerial.h"

//SoftwareSerial *mbus_serial_connect(char *device);
int                 mbus_serial_disconnect(SoftwareSerial *handle);
int                 mbus_serial_send_frame(SoftwareSerial *handle, mbus_frame *frame);
int                 mbus_serial_recv_frame(SoftwareSerial *handle, mbus_frame *frame);
int                 mbus_serial_set_baudrate(SoftwareSerial *handle, int baudrate);
#endif /* MBUS_SERIAL_H */



