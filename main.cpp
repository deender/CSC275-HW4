//Was going to include some declarations in .cpp file, but kept getting errors so I just kept it to a .h file
#include <iostream>
#include "SocialMediaAccount.h"

int main() {
    SocialMediaAccount<int>a(4);
    a.addFollower(1);
    a.addFollower(1);
    a.addFollower(1);
    a.addFollower(10);
    a.addFollower(1);
    a.displayFollowed();
    a.setPrivacy(false);
    a.displayFollowers();

    a.setPrivacy(true);
    a.displayFollowers();
    return 0;
}
