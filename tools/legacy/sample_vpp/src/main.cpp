/*############################################################################
  # Copyright (C) 2005 Intel Corporation
  #
  # SPDX-License-Identifier: MIT
  ############################################################################*/

#include <stdio.h>

int sample_vpp_main(int argc, char* argv[]);

int main(int argc, char* argv[]) {
    try {
        return sample_vpp_main(argc, argv);
    }
    catch (...) {
        printf("Exception in sample_vpp_main(). Results may be invalid.\n");
        return -1;
    }
}
