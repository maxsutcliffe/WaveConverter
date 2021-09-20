#include <iostream>
#include "string.h"
#include "SoundSamples.h"
using namespace std;

SoundSample::SoundSample() : sampleRate(8000), numSamples(0), sequence(new float[1]) {}

//Destructor // deletes the pointer to the members float pointer first.
SoundSample::~SoundSample() {
    delete this -> sequence;
}

SoundSample::SoundSample(float * sequence, int numSamples, int sampleRate) {
    this -> numSamples = numSamples;
    this -> sampleRate = sampleRate;
    this -> sequence = new float;
    for (int i = 0; i < numSamples; i++) {
        this -> sequence[i] = sequence[i];
    }
}

SoundSample::SoundSample(int samples, int rate) : numSamples(samples), sampleRate(rate) {
    this -> sequence = new float;
}
//copy constructor
SoundSample::SoundSample(const SoundSample& orig) {
    this -> numSamples = orig.numSamples;
    this -> sampleRate = orig.sampleRate;
    this -> sequence = new float;
    for (int i = 0; i < orig.numSamples; i++) {
        this -> sequence[i] = orig.sequence[i];
    }
} 

//Getters for number of samples and sample rate
int SoundSample::GetNumSamples() const {
    return this -> numSamples;
}

int SoundSample::GetSampleRate() const {
    return this -> sampleRate;
}

SoundSample& SoundSample::operator= (const SoundSample& rhs) {
    if (this != &rhs) {
        delete this -> sequence;
        this -> sequence = new float;
        this -> sequence = rhs.sequence;
        this -> numSamples = rhs.numSamples;
        this -> sampleRate = rhs.sampleRate;
    }
    return *this;
}
// appends the parameters samples to the this's sample
SoundSample & SoundSample::operator+ (const SoundSample& rhs) {
    if (this != &rhs) {
        int counter = 0;
        for (int i = this -> numSamples; i < rhs.numSamples + this -> numSamples; i++) {
            this -> sequence[i] = rhs.sequence[counter];
            counter++;
        }
        this -> numSamples = this -> numSamples + rhs.numSamples;
    }
    return *this;
}
float & SoundSample:: operator[] (int index) {
    std::cout << "The address of the pointer at index is" << std::endl;
    

    return this -> sequence[index];
}


//Functions for testing 
void SoundSample::SetDataMembers(int samplerate, int numSamples, float * sequence) {
    this -> numSamples = numSamples;
    this -> sampleRate = samplerate;
    for (int i = 0; i < numSamples; i++) {
        this -> sequence[i] = sequence[i];
    }
}






