#include <windows.h>
#include <winioctl.h>
#include <stdio.h>
#include <iostream>
//#define IOCTL_EXAMPLE_SAMPLE_DIRECT_IN_IO    CTL_CODE(FILE_DEVICE_UNKNOWN, 0x800, METHOD_IN_DIRECT, FILE_READ_DATA | FILE_WRITE_DATA) 
//#define IOCTL_EXAMPLE_SAMPLE_DIRECT_OUT_IO   CTL_CODE(FILE_DEVICE_UNKNOWN, 0x801, METHOD_OUT_DIRECT,FILE_READ_DATA | FILE_WRITE_DATA) 
#define IOCTL_EXAMPLE_SAMPLE_BUFFERED_IO     CTL_CODE(FILE_DEVICE_UNKNOWN, 0x802, METHOD_BUFFERED, FILE_READ_DATA | FILE_WRITE_DATA)
//#define IOCTL_EXAMPLE_SAMPLE_NEITHER_IO      CTL_CODE(FILE_DEVICE_UNKNOWN, 0x803, METHOD_NEITHER,FILE_READ_DATA | FILE_WRITE_DATA) 