//
// Created by Owner on 4/9/2025.
//

#ifndef SOCIALMEDIAACCOUNT_H
#define SOCIALMEDIAACCOUNT_H
#include <iostream>
using namespace std;


const int maxFollowers = 1000;
const int maxFollowed = 1000;

template <typename T>
class SocialMediaAccount {
private:
  T handler;
  T followers[maxFollowers];
  T followed[maxFollowed];
  int followerCount;
  int followedCount;
  bool privacy{ true };

  public:
    SocialMediaAccount(){
      followerCount = 0;
      followedCount = 0;
      privacy = true;
      handler = T();
    }

  int getFollowerCount() const {return followerCount;}
    int getFollowedCount() const {return followedCount;}
    bool getPrivacy() const {return privacy;}
    void setfollowerCount(int followers){followerCount = followers;}
    void setfollowedCount(int followed){followedCount = followed;}

    void addFollower(T user){
      followers[followerCount] = user;
      followerCount++;
    }
    void addFollowed(T user){
      followed[followedCount] = user;
      followedCount++;
    }
    void displayFollowers(){
      if(privacy != false){
        std::cout << "We're sorry, but this account is set to private, and this information is inacessable"
                  << std::endl;
      }
      else
        std::cout << "Followers: " << followerCount << endl;
      }
      void displayFollowed(){
        if(privacy != false){
          std::cout << "We're sorry, but this account is set to private, and this information is inacessable"
          << std::endl;
        }
        else
          std::cout << "Followed: " << followedCount << endl;
      }
    };

template <typename T>
class Twitter : public SocialMediaAccount<T> {
private:
  int retweetCount;
public:
  Twitter(){}
  int getretweetCount() const {return retweetCount;}
  void setretweetCount(int retweetCount) {this->retweetCount = retweetCount;}
  void RT() {retweetCount++;}
};

template <typename T>
class Instagram : public SocialMediaAccount<T> {
private:
  int likeCount;
public:
  int getlikeCount() const {return likeCount;}
  void setlikeCount(int likeCount) {this->likeCount = likeCount;}
  void Like() {this->likeCount++;}
};



#endif //SOCIALMEDIAACCOUNT_H
