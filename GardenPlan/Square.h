/* 
 * File:   Square.h
 * Author: Lukas Elmer
 *
 * Created on 3. Mai 2010, 19:44
 */

#ifndef _SQUARE_H
#define	_SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle {
public:

    Square(double _width) : Rectangle(_width, _width) {
    }
    virtual ~Square();
private:
};

#endif	/* _SQUARE_H */

