#ifndef SOUNDSAMPLE_H
#define SOUNDSAMPLE_H
using namespace std;

class SoundSample{
    public:
        //Constructors
        SoundSample();
        ~SoundSample();
        SoundSample(float * sequence, int numSamples, int sampleRate);
        SoundSample(int numSamples, int sampleRate);
        SoundSample(const SoundSample& orig);
        //Getters //data memebers won't be changed
        int GetSampleRate() const; 
        int GetNumSamples() const;
        //Overloaded operators
        SoundSample& operator=(const SoundSample& tocopy);
        SoundSample& operator+(const SoundSample& toadd);
        float & operator[](int index);

        //function for testing
        void SetDataMembers(int samplerate, int numSamples, float * sequence);
        float * sequence;


    private:
        int sampleRate;
        int numSamples;

};


#endif