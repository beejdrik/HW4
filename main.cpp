#include <iostream>
#include "SocialMediaAccount.h"
using namespace std;

struct Profile {
    int userID;
    std::string username;
};
int main() {
    Twitter<string> TS;
    Twitter<Profile> TP;
    Instagram<string> IS;
    Instagram<Profile> IP;

   string username1 = "Itar Maloo";
    string username2 = "Ikea_3008";
    string username3 = "Garrison Tucker";

    Profile teejchef;
    Profile ThatGoldenGuy;

    TS.setfollowerCount(0);
    TP.setfollowerCount(0);
    IS.setfollowerCount(0);
    IP.setfollowerCount(0);

    TS.setfollowedCount(0);
    TP.setfollowedCount(0);
    IS.setfollowedCount(0);
    IP.setfollowedCount(0);

    TS.setretweetCount(0);
    TP.setretweetCount(0);
    IS.Like();
    IP.Like();

    TS.addFollower(username1);
    TS.addFollowed(username1);
    TS.addFollower(username1);
    TS.addFollower(username1);
    TS.addFollower(username2);
    TS.addFollowed(username3);

    IS.addFollower(username1);
    IP.addFollowed(ThatGoldenGuy);

    TS.displayFollowed();
    TP.displayFollowers();
    IS.displayFollowers();
    IP.displayFollowers();

    return 0;
}
