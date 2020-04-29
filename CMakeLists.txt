cmake_minimum_required(VERSION 3.16)
project(packet_sniffer)

set(CMAKE_CXX_STANDARD 14)

include(FindPCAP.cmake)

set(SOURCE_FILES main.cpp)
add_executable(packet_sniffer ${SOURCE_FILES})
target_link_libraries(packet_sniffer ${PCAP_LIBRARY})