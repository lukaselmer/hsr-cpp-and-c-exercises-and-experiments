/* 
 * File:   SevenSegmentDigit.cpp
 * Author: Lukas Elmer
 * 
 * Created on 10. März 2010, 12:45
 */
#include "SevenSegmentDigit.h"

#include <boost/assign/std/vector.hpp> // for 'operator+=()'
#include <boost/assert.hpp>
#include <vector>
#include <string>
#include <iostream>

using namespace std;
using namespace boost::assign;

SevenSegmentDigit::SevenSegmentDigit(int digit) {
    if (digit > 9 || digit < 0) {
        throw "Illegal input. Digit must be [0-9]";
    }
    this->digit = digit;
}

/**
 * Source: http://upload.wikimedia.org/wikipedia/commons/0/02/7_segment_display_labeled.svg
 * Each Digit looks like this:
 *  A
 * F B         _
 *  G      =  |_|
 * E C        |_|
 *  D
 * Example: for nr. 8 is each letter (A,B,C,D,E,F,G) true
 **/
vector<string> SevenSegmentDigit::getStringVector(int scale) {
    if (scale <= 0) {
        throw "Scale must be >= 1!";
    }
    vector<bool> ii = getBoolVector();
    vector<string> v;
    int a = 0, b = 1, c = 2, d = 3, e = 4, f = 5, g = 6;
    // Top line
    addHorizontal(ii[a], scale, v);
    // First vertical
    addVertical(ii[f], ii[b], scale, v);
    // Middle Line
    addHorizontal(ii[g], scale, v);
    //Second vertical
    addVertical(ii[e], ii[c], scale, v);
    // Bottom Line
    addHorizontal(ii[d], scale, v);
    return v;
}

void SevenSegmentDigit::addHorizontal(bool draw_line, int scale, vector<string>& v) {
    //string s = (draw_line ? " - " : " ");
    string s = " ";
    s += string(scale, (draw_line ? '-' : ' '));
    s += " ";
    v += s;
    //s += " a", "b ";
    //for (int i = 0; i < scale; ++i) {
    //}
}

void SevenSegmentDigit::addVertical(bool left, bool right, int scale, vector<string>& v) {
    string s = getVertical(left, right, scale);
    for (int i = 0; i < scale; ++i) {
        v += s;
    }
}

string SevenSegmentDigit::getVertical(bool left, bool right, int scale) {
    string spaces = string(scale, ' ');
    string s;
    if (left && right) {
        s = "|";
        s += spaces;
        s += "|";
        return s;
    } else if (right) {
        s = " ";
        s += spaces;
        s += "|";
        return s;
    } else if (left) {
        s = "|";
        s += spaces;
        s += " ";
        return s;
    } else {
        throw "Illegal state";
    }
}

vector<bool> SevenSegmentDigit::getBoolVector() {
    vector<bool> ii; // this is an array of (A,B,C,D,E,F,G)
    switch (digit) {
        case 0:
            ii += true, true, true, true, true, true, false;
            break;
        case 1:
            ii += false, true, true, false, false, false, false;
            break;
        case 2:
            ii += true, true, false, true, true, false, true;
            break;
        case 3:
            ii += true, true, true, true, false, false, true;
            break;
        case 4:
            ii += false, true, true, false, false, true, true;
            break;
        case 5:
            ii += true, false, true, true, false, true, true;
            break;
        case 6:
            ii += true, false, true, true, true, true, true;
            break;
        case 7:
            ii += true, true, true, false, false, false, false;
            break;
        case 8:
            ii += true, true, true, true, true, true, true;
            break;
        case 9:
            ii += true, true, true, true, false, true, true;
            break;
    }
    return ii;
}
