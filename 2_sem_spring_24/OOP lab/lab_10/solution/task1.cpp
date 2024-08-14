#include <iostream>
#include <string>

using namespace std;

class MediaFile
{
private:
    string name;
    double size;
    string fileExt;

public:
    MediaFile(string n, double s, string ext) : name(n), size(s), fileExt(ext) {}
    friend class MediaConvertor;
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Size: " << size << endl;
        cout << "Format: " << fileExt << endl;
        cout << endl;
    }
};

class MediaConvertor
{
public:
    void convert(MediaFile &obj)
    {
        if (obj.fileExt == "jpeg")
        {
            cout << "Converting jpeg to png" << endl;
            obj.fileExt = "png";
        }
        else if (obj.fileExt == "png")
        {
            cout << "Converting png to jpeg" << endl;
            obj.fileExt = "jpeg";
        }
        else if (obj.fileExt == "mp4")
        {
            cout << "Converting mp4 to wav" << endl;
            obj.fileExt = "wav";
        }
        else if (obj.fileExt == "wav")
        {
            cout << "Converting wav to mp4" << endl;
            obj.fileExt = "mp4";
        }
        else if (obj.fileExt == "mp3")
        {
            cout << "Converting mp3 to vid" << endl;
            obj.fileExt = "vid";
        }
        else if (obj.fileExt == "vid")
        {
            cout << "Converting vid to mp3" << endl;
            obj.fileExt = "mp3";
        }
    }
};
main(void)
{
    MediaConvertor m;
    MediaFile audio("Titanic Song", 2.3, "mp4");
    MediaFile image("Habucus", 2.34, "png");
    MediaFile video("Let's c", 34.34, "vid");
    audio.display();
    video.display();
    image.display();
    m.convert(audio);
    m.convert(image);
    m.convert(video);
    image.display();
    video.display();
    audio.display();
    return 0;
}