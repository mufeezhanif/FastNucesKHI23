#include <iostream>
#include <vector>
using namespace std;
class User;
class Post
{
public:
    static int postIdGlobal;

private:
    string content;
    string comments[100];
    int commented;
    int likes;
    bool isPromoted;
    int views;
    int postId;

public:
    Post(string _content) : content(_content), likes(0), views(0), isPromoted(false), commented(0) { postId = ++postIdGlobal; }

    void setPromoted(bool _promted) { isPromoted = _promted; }
    bool getPromoted() { return isPromoted; }

    void editContent()
    { // extra method
        cout << "Previous Content: " << endl;
        cout << content << endl;
        cout << "Enter new content: ";
        getline(cin, content);
        cin.ignore();
    }
    void addComment()
    {
        cout << "Enter comment: ";
        string comment;
        getline(cin, comment);
        cin.ignore();
        comments[commented++] = comment;
    }
    void addlike()
    {
        if (isPromoted)
        {
            likes += 2;
        }
        else
        {
            likes++;
        }
    }
    void addView()
    {
        if (isPromoted)
        {
            views += 2;
        }
        else
        {
            views++;
        }
    }
    void displayPost() const
    {
        cout << "Post ID: " << postId << endl;
        cout << "Content: " << content << endl;
        cout << "Likes: " << likes << endl;
        cout << "Views: " << views << endl;
        cout << "Comments: " << endl;
        for (int i = 0; i < commented; i++)
        {
            cout << comments[i] << endl;
        }
    }
};
int Post::postIdGlobal = 3434;
class User
{
private:
    string email;
    string username;
    string password;
    int userId;

public:
    static int userIdGlobal;

public:
    User(string _email, string _username, string _password) : email(_email), username(_username)
    {
        userId = ++userIdGlobal;
        passwordEncryption(_password);
    }

    void passwordEncryption(string _password)
    {
        string key = "secret";

        for (int i = 0; i < _password.length(); i++)
        { // XOREncryptDecrypt
            _password[i] = _password[i] ^ key[i % key.length()];
        }
        password = _password;
    }
    void likePost(Post &post)
    {
        post.addlike();
    }
    void commentPost(Post &post)
    {
        post.addComment();
    }
};
int User::userIdGlobal = 234;
class RegularUser : public User
{
private:
    int postLimit;
    static const int MAX_FEED_SIZE;
    Post *feed[10];
    int posted;

public:
    RegularUser(string _email, string _username, string _password) : User(_email, _username, _password), postLimit(5), posted(0) {}
    void addToFeed(Post &post)
    {
        if (posted < MAX_FEED_SIZE)
        {
            feed[posted++] = &post;
        }
        else
        {
            cout << "Feed is full. Cannot add post." << endl;
        }
    }

    void viewFeed()
    {
        for (int i = 0; i < posted; i++)
        {
            feed[i]->displayPost();
            feed[i]->addView();
        }
    }
};
const int RegularUser::MAX_FEED_SIZE = 10;
class BusinessUserClass : public User
{
private:
    const int limitPromoted;
    int promotedPosts;

public:
    BusinessUserClass(string _email, string _username, string _password) : User(_email, _username, _password), limitPromoted(10), promotedPosts(0) {}
    void promotePost(Post &p)
    {
        if (promotedPosts < limitPromoted && !(p.getPromoted()))
        {
            p.setPromoted(true);
            promotedPosts++;
            cout << "Congratulations, post has been promoted successfully" << endl;
        }
        else if (p.getPromoted())
        {
            cout << "Post is already promoted" << endl;
        }
        else
        {
            cout << "You can't promote more posts, you have reached the max ammount to promote post" << endl;
        }
    }
    void demotePost(Post &p)
    {
        if (p.getPromoted())
        {
            p.setPromoted(false);
            promotedPosts--;
            cout << "Post has been demoted successfully" << endl;
        }
        else
        {
            cout << "Post is already demoted" << endl;
        }
    }
};
int main()

{
    cout << "Muhammad mufeez 23k0800" << endl;
    RegularUser u1("u1@u1.com", "u1", "hdgiysdgsd");
    BusinessUserClass b1("sdsddf@ds", "b1", "b1");
    Post p1("This is my first post");
    Post p2("This is my second post");
    u1.addToFeed(p1);
    u1.likePost(p1);
    u1.commentPost(p1);
    u1.viewFeed();
    u1.addToFeed(p2);
    u1.viewFeed();
    b1.promotePost(p1);
    b1.demotePost(p2);
    b1.likePost(p1);
    return 0;
}