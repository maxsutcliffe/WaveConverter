#ifndef WAVE_H
#define WAVE_H
#include <string>
#include "SoundSamples.h"
#include <math.h>

//Base class
class Wave {
    public:
        Wave(std::string name);
        SoundSample * generateSamples(float frequency, float samplerate, float duration);
        virtual float generateFunction(float time) const = 0;
    protected:
        std::string name;
        float frequency;
        float samplerate;
        float duration;
};
// derived classes from waves
class SineWave : public Wave {
    public:
        SineWave(std::string name) : Wave(name){} //call superclass constructor for Wave
        float generateFunction(float time) const {
            //return (float)sin(2 * M_PI * frequency * 1/samplerate * time);
            return 5;
        }

    private:
        
};
class SawtoothWave : public Wave {
    public:
        SawtoothWave(std::string name) : Wave(name){}
        float generateFunction(float time) const {
            //return (float)2 * ((time * (frequency / samplerate)) - floor(0.5 + time * (frequency / samplerate)));
            return 6;
        }

    private:


};
class TriangleWave : public Wave {
    public:
        TriangleWave(std::string name) : Wave(name){}
        float generateFunction(float time) const {
            //return (float)(fabs(2 * ((time * (frequency / samplerate)) - floor(0.5 + time * (frequency / samplerate)))) - 0.5) * 2;
            return 7;
        }

    private:


};

class SquareWave : public Wave {
    public: 
        SquareWave(std::string name) : Wave(name){}
        float generateFunction(float time) const {
            return 8;
            /*
            float period = sin(2 * M_PI * frequency * 1/samplerate * time);
   
            if (period > 0) {
                return 1;
            } else if (period < 0){
               return -1;
            } 
         
         */
        }
    private:


};


#endif