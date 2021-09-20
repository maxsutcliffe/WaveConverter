#include <iostream>
#include "SoundSamples.h"
#include "string.h"
#include "wave.h"
using namespace std;

int main () {

    
    Wave * h = new SineWave("SineWave");
    Wave * i = new TriangleWave("TriangleWave");
    Wave * k = new SquareWave("SquareWave");
    Wave * g = new SawtoothWave("SawWave");
    cout << "Got to here" << endl;
    SoundSample * sin = h->generateSamples(3, 2, 5);
    SoundSample * tri = i -> generateSamples(3,2,5);
    SoundSample * sqa = k -> generateSamples(3,2,5);
    SoundSample * Saw = g -> generateSamples(3,2,5);
    for (int i = 0; i < 10; i++) {
        cout << sin -> sequence[i] << endl;
    }
    

   /*
    float foo[5] = {1.5, 5.0, 3.0, 8.0, 9.0};
    float * topass;
    topass = foo;
    SoundSample * s = new SoundSample(topass, 5, 8000);
    SoundSample classObj;
    SoundSample classObj2;
    SoundSample classObj3;
    classObj.SetDataMembers(8000, 5, topass);
    classObj2.SetDataMembers(8000, 5, topass);
    // brackets operator test
    std::cout << "brackest operator test" << endl;
    //the * SoundSample using the brackets
    (*s)[3] = 0.5;
    //local object using the brackets.
    classObj[3] = 0.5;
    for (int i =  0; i < s -> GetNumSamples(); i++) {
        std::cout << classObj.sequence[i] << std::endl;
    }
    // + operator test
    std::cout << " + operator test" << endl;
    classObj3 = classObj + classObj2;
    

    //s[3]=0.5;
    for (int i =  0; i < classObj3.GetNumSamples(); i++) {
        std::cout << classObj3.sequence[i] << std::endl;
    }

    // SoundSample * t = new SoundSample(topass, 5, 8000);
    // SoundSample * u = new SoundSample();
    // u = s + t;
    // for (int i =  0; i < 5; i++) {
    //     std::cout << topass[i] << std::endl;
    // }
    */

    




    return 0;
}