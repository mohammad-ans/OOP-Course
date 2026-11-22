#include <iostream>
using namespace std;

class MediaItem{
    protected:
    string title;
    int durationSeconds;
    public:
    MediaItem() {
        title = "NA";
        durationSeconds = 0;
    }
    MediaItem(string t, int d) {
        title = t;
        durationSeconds = d;
    }
    void displayInfo() {
        cout << "Title: " << title << " with duration in seconds: " << durationSeconds<< endl;
    }
    int getDurationInMinutes() {
        return durationSeconds / 60;
    }
};
class Movie: public MediaItem{
    private:
    string director;
    string genre;
    public:
    Movie() : MediaItem(){
        director = "NA";
        genre = "NA";
    }
    Movie(string title_, int duration, string dr, string g) : MediaItem(title_, duration){
        director = dr;
        genre = g;
    }
    void displayInfo() {
        cout <<  "Title: " << title << " with duration in seconds: " << durationSeconds<< ". This media director is "<< director << " and its genre is " << genre << ".\n";
    }
};

int main() {
    Movie obj1;
    Movie obj2("Love", 200, "Man", "Action");
    obj2.displayInfo();
    obj1.displayInfo();
    cout << "The duration of obj2 media is " << obj2.getDurationInMinutes() << " minutes.\n";

}