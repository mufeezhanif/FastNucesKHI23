#include <iostream>
using namespace std;

class Movie
{
private:
    const string title;
    const string director;
    int duration;

public:
    Movie(const string &_title, const string &_director, int _duration) : title(_title), director(_director), duration(_duration) {}

    string getTitle() const
    {
        return title;
    }

    string getDirector() const
    {
        return director;
    }
    int getDuration() const
    {
        return duration;
    }
};
class Playlist
{
public:
    const string name;
    Movie *movies[10]; // max 10 movies can be added in the playlist
    int numMovies;

    Playlist(const string &_name) : name(_name) {}
    void addMovie(Movie *movie)
    {
        movies[numMovies++] = movie;
    }
    void removeMovie(Movie *movie)
    {
        for (int i = 0; i < numMovies; ++i)
        {
            if (movies[i] == movie)
            {
                for (int j = i; j < numMovies - 1; ++j)
                {
                    movies[j] = movies[j + 1];
                }
                --numMovies;
                break;
            }
        }
    }
    void displayInfo() const
    {
        cout << "Name: " << name << endl;
        for (int i = 0; i < numMovies; ++i)
        {
            cout << "Movie " << i + 1 << endl;
            cout << "Title: " << movies[i]->getTitle() << endl;
            cout << "Director: " << movies[i]->getDirector() << endl;
            cout << "Duration: " << movies[i]->getDuration() << endl;
        }
    }
};

class User
{
public:
    const string name;
    Playlist *playlist[5]; // user can have up to 5
    int numPlaylist;

public:
    User(const string &_name) : name(_name) {}
    void createPlaylist(const string &playlistName)
    {
        playlist[numPlaylist++] = new Playlist(playlistName);
    }
    void addMovieToPlaylist(Playlist *playlist1, Movie *movie)
    {
        for (int i = 0; i < numPlaylist; ++i)
        {
            if (playlist[i]->name == playlist1->name)
            {
                playlist[i]->addMovie(movie);
                break;
            }
        }
    }
    void removeMovieFromPlaylist(Playlist *playlist1, Movie *movie)
    {
        for (int i = 0; i < numPlaylist; ++i)
        {
            if (playlist[i]->name == playlist1->name)
            {
                playlist[i]->removeMovie(movie);
                break;
                for (int j = i; j < numPlaylist - 1; ++j)
                {
                    playlist[i] = playlist[i + 1];
                }
            }
        }
    }
    void displayUserPlaylists() const
    {
        cout<<"\nNum Playlist: "<<numPlaylist<<endl;
        for (int i = 0; i < numPlaylist; ++i)
        {
            cout << "Playlist " << i + 1 << endl;
            playlist[i]->displayInfo();
        }
    }
    ~User(){
        for(int i=0;i<numPlaylist;++i)
            delete playlist[i];
    }
};
int main()
{
    cout<<"Hello world";
    User mujeeb("Mujeeb Rehman");
    mujeeb.createPlaylist("Action Movies");
    mujeeb.createPlaylist("Comedy Movies");

    Movie movie1("The Dark Knight", "Christopher Nolan", 120);
    Movie movie2("Hangrover", "Todd Philips", 120);
    Movie movie3("Superbad", "Greg Mottola", 120);
    Playlist p1("Action Movies");
    Playlist p2("Comedy Movies");
    mujeeb.addMovieToPlaylist(&p1, &movie1);
    mujeeb.addMovieToPlaylist(&p2, &movie2);
    mujeeb.addMovieToPlaylist(&p2, &movie3);

     mujeeb.displayUserPlaylists();

    cout<<"\n\nAfter removing the movie";
    mujeeb.removeMovieFromPlaylist(&p1,&movie1);
    mujeeb.displayUserPlaylists();
    return 0;
}