#ifndef NATIVE_EXTENSION_GRAB_H
#define NATIVE_EXTENSION_GRAB_H

#include <nan.h>

// Example top-level functions. These functions demonstrate how to return various js types.
// Implementations are in functions.cc

NAN_METHOD(injectPID);
NAN_METHOD(isProcessRunning);
NAN_METHOD(isProcessRunningPID);
NAN_METHOD(getPIDByName);

#endif