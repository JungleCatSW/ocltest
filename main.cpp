//
// Created by jungle on 15/02/19.
//


#include <CL/cl_ext.h>
#include <iostream>
#include <vector>

int main(){
    cl_int status = 0;
    cl_uint platformIdCount = 0;
    clGetPlatformIDs(0, nullptr, &platformIdCount);

    std::vector<cl_platform_id> platformIds(platformIdCount);
    clGetPlatformIDs(platformIdCount, platformIds.data(), nullptr);

    std::cout << "Found " << platformIdCount << " OCL platforms" << std::endl;

    if(platformIdCount < 1)
        return 0;

    for(unsigned p = 0; p < platformIdCount; p++) {
        char buffer[100];
        if (CL_SUCCESS == clGetPlatformInfo(platformIds.at(p), CL_PLATFORM_NAME, sizeof(buffer), buffer, NULL)) {
            std::cout << buffer << std::endl;
        }
    }

}

