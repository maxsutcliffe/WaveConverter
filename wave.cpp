#include "wave.h"
#include <iostream>
#include "SoundSamples.h"


Wave::Wave(std::string name) {
    this -> name = name;
}
SoundSample * Wave::generateSamples(float frequency, float samplerate, float duration){
        int length = (int)(samplerate * duration);
        this -> frequency = frequency;
        this -> samplerate = samplerate;
        SoundSample * temp = new SoundSample(length, samplerate);
        for (int i = 0; i < samplerate * duration; i++) {
            (*temp)[i] = generateFunction(i);
        }
        return temp;
}




