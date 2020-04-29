//
// Created by giuseppefn on 28/04/2020.
//
#include <iostream>
#include <pcap.h>

int main(int argc, char *argv[]){
    char *dev = argv[1];
    printf("Device: %s\n",dev);

    return 0;
}

// To compile g++ -o set_device set_device.cpp -lpcap
// To run ./set_device wlp2s0