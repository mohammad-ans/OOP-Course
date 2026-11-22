#include <iostream>
using namespace std;

class Media{
    public:
    string title;
    float duration;
    Media() {
        title = "NA";
        duration = 0;
    }
    
    Media(string t, float d) {
        title = t;
        duration = d;
    }
    void play() {
        cout << "Playing media: " << title << endl;
    }

};

class Audio: public Media{
    public:
    int bitrate;
    Audio() : Media() {
        bitrate = 0;
    }
    Audio(int bt, string t, float d) : Media(t, d) {
        bitrate = bt;
    }
    void play() {
        cout << "Playing audio file: "<< title << " at " << bitrate << "bytes per second.\n"; 
    }
};

class Video: public Media{
    public:
    string resolution;
    Video() : Media() {
        resolution = "NA";
    }
    Video(string res, string t, float d) : Media(t, d) {
        resolution = res;
    }
    void play() {
        cout << "Playing video file: " << title << " at " << resolution << " resolution.\n";
    }
};

int main() {
    Audio obj1;
    Audio obj2(100, "Love", 4.5);
    Video obj3;
    Video obj4("1920 X 1080", "Love", 5.5);
    obj1.play();
    obj2.play();
    obj3.play();
    obj4.play();
}