#include "social.h"
#include <iostream>

#include <vector>
#include <string>   
#include <ctime>
using namespace std;

    void User::addPost(string content)
    {
        posts.push_back(content);
    }
    void User::viewPosts() const
    {
        cout<<"Posts by "<<getUsername()<<":"<<endl;
        for (string post:posts)
        {
            cout<<post<<endl;
        }

    }
    string User::getUsername() const
    {
        return username;
    }

    bool User::checkPassword(string pwd) const
    {
        if(pwd==password )
        {
            return true;
        } 
        else
        {
            return false;
        }
    }
    string User::getEmail() const
    {
        return email;
    }
    void User::setUsername(string newUsername)
    {
        this->username=newUsername;
    }

     string Post:: getcontent(){return content ;}
    string Post:: getauthor(){return author;}
    time_t Post:: gettimestamp(){return timestamp;}
    void Post:: display() const
    {
        cout<<"Posted By:"<<getauthor<<endl;
        cout<<getcontent<<endl;
    }

    void SocialMediaApp:: registerUser()
    {
        string username, email, password;
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter email: ";
        cin >> email;
        cout << "Enter password: ";
        cin >> password;

      User newUser(username,email,password);


    }
    void SocialMediaApp:: loginUser()
    {

    }
    void SocialMediaApp:: createPost()
    {}
    void SocialMediaApp:: viewFeed()
    {}
    void SocialMediaApp:: mainMenu()
    {}
