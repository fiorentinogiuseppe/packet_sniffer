//
// Created by giuseppefn on 28/04/2020.
//
#include <iostream>
#include <pcap.h>

// Segundo o Tim Carstens a maioria dos comandos pcap nos permite passar uma string como argumento com o
// objetivo de caso o comando falhar preencher a sequência com uma descrição do erro no errbuf.
int main(int argc, char *argv[]){
    char errbuf[PCAP_ERRBUF_SIZE];
    pcap_if_t *interfaces;
    int inter = 0;

    if(pcap_findalldevs(&interfaces,errbuf) == -1){
        fprintf(stderr, "Couldn't find default device: %s\n", errbuf);
        return(2);
    }

    printf("\n The interfaces present on the system are: ");
    for(pcap_if_t *temp = interfaces; temp; temp = temp->next ){
        printf("\n%d  :  %s", inter++,temp->name);
    }
    return 0;
}

// To compile g++ -o set_device set_device.cpp -lpcap
// To run ./set_device wlp2s0