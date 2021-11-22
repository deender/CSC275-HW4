//
// Created by deend on 11/22/2021.
//

#ifndef HOMEWORK4_SOCIALMEDIAACCOUNT_H
#define HOMEWORK4_SOCIALMEDIAACCOUNT_H
#include <iostream>

using namespace std;


const int maxFollowers = 1000;
const int maxFollowed = 1000;

template <typename T>
class SocialMediaAccount {
public:
    SocialMediaAccount(T handler){
        this ->handler = handler;
        this->followerCount = 0;
        this -> followedCount = 0;
        this ->privacy = true;
        followers = new T[maxFollowers];
        followed = new T[maxFollowed];
    }
    void setFollowerCount(int n){this->followerCount = n;}
    void setHandler(T user){this->handler = user;}
    T getHandler(){return this->handler;}
    void setfollowedCount(int n){this->followedCount =n;}
    int getfollowerCount(){return this->followerCount;}
    int getfollowedCount(){return this->followedCount;}
    void setPrivacy(bool privacy){this->privacy = privacy;}
    bool getPrivacy(){return this->privacy;}
    void addFollower(T user){
        if(this->followerCount<maxFollowers){
            followers[followerCount] = user;
            this -> followerCount++;
        }
    }
    void addFollowed(T user){
        if(this->followedCount < maxFollowed){
            followed[followedCount] = user;
            this->followedCount++;
        }
    }
    void displayFollowers(){
        if(!this->privacy){
            for(int i =0;i<this->followerCount; i++){
                cout << followers[i] << " ";
            }
            cout << endl;
        }
        else{
            cout << "This account is private." << endl;
        }
    }
    void displayFollowed(){
        if(!this->privacy){
            for(int i =0; i <this->followedCount; i++){
                cout << followed[i] << " ";
            }
            cout << endl;
        }
        else{
            cout << "This account is private." << endl;
        }
    }


private:
    T handler;
    T* followers;
    T* followed;
    int followerCount;
    int followedCount;
    bool privacy;
};


#endif //HOMEWORK4_SOCIALMEDIAACCOUNT_H
