#ifndef SOCIAL_H
#define SOCIAL_H

#include <iostream>

#include <vector>
#include <string>
#include <ctime>
using namespace std;
class User{
private:
    string username;
    string email;
    string password;
    vector<string> posts;
public:
    User(string username,string email,string password)
    {this->username=username;this->email=email;this->password=password;}

    void addPost(string content);
    void viewPosts() const;
    string getUsername() const;
    bool checkPassword(string pwd) const;
    string getEmail() const;
    void setUsername(string newUsername);
};
class Post {
private:
    string content;
    string author;
    time_t timestamp;

public:
    Post(string author, string content){this->author=author;this->content=content;};
    string getcontent();
    string getauthor();
    time_t gettimestamp();
    void display() const;
    
};

class SocialMediaApp
{
private:
    vector<User> users;
    User* currentUser = nullptr;

public:
    void registerUser();
    void loginUser();
    void createPost();
    void viewFeed();
    void mainMenu();
};




#endif 