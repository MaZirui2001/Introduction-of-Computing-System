/*
 * @Author       : Chivier Humber
 * @Date         : 2021-09-15 21:15:24
 * @LastEditors  : Chivier Humber
 * @LastEditTime : 2021-11-23 16:08:51
 * @Description  : file content
 */
#include "common.h"
#include "memory.h"

namespace virtual_machine_nsp {
    void memory_tp::ReadMemoryFromFile(std::string filename, int beginning_address) {
        // Read from the file
        int address = beginning_address;
        std::ifstream fin(filename);
        if(!fin.is_open()) exit(0);
        std::string data;
        while(getline(fin, data)){
            for(auto p = data.begin(); p != data.end(); p++){
                if(*p == '0' || *p == '1') memory[address] = (memory[address] << 1) | (*p - '0');
            }
            address++;
        }
        fin.close();
    }

    int16_t memory_tp::GetContent(int address) const {
        // get the content
        return memory[address];
    }

    int16_t& memory_tp::operator[](int address) {
        // get the content
        return memory[address];
    }    
}; // virtual machine namespace
