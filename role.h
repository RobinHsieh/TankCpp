/**
 * @file role.h
 * @author @1chooo
 * @brief 
 * @version 0.1
 * @date 2023-04-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef ROLE_H
#define ROLE_H

#include <string>

class Role {
public:
    Role(const char** body, int height, int width);
    void draw(int y, int x) const;
private:
    const char** myBody;
    int myHeight;
    int myWidth;
};

extern const char *tankBody[7];


#endif // ROLE_H
