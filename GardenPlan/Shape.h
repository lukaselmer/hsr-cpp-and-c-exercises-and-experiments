/* 
 * File:   Shape.h
 * Author: Lukas Elmer
 *
 * Created on 3. Mai 2010, 19:48
 */

#ifndef _SHAPE_H
#define	_SHAPE_H

#include <string>

class Shape {
public:
    virtual ~Shape();
    virtual int pegs() = 0;
    virtual double surface() = 0;
    virtual double ropes() = 0;
    double seeds(/*double seedsPerSquareMeter = 0.1*/);
    std::string toString();
};

#endif	/* _SHAPE_H */
