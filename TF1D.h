#ifndef TF1D_H
#define TF1D_H
//C++ libraries
#include <iostream>
#include <string>
#include <vector>

//C libraries
#include "ospray/ospray.h"

class TF1D {
public:
    TF1D();

    void loadFromFile(std::string filename);

    void writeToFile(std::string filename);

    OSPTransferFunction tf;

private:

    int num;
    std::vector<osp::vec3f> colors;
    std::vector<float> indexs;
    std::vector<float> opacities;
    osp::vec2f valueRange;

    void setup();
};

#endif