#ifndef RECTF_H
#define RECTF_H
#include "Vec2.h"



class RectF
{
public:
    RectF();  // constructor
    RectF( float left_in, float right_in, float top_in, float bottom_in );  // geparametrizeerde constructor 1a
    RectF( const Vec2& topLeft, const Vec2& bottomRight );                  // geparametrizeerde constructor 1b
    RectF( const Vec2& topLeft, float width, float height );                // geparametrizeerde constructor 1c
    bool isOverlappingWith( const RectF& other ) const ;                    // checkt wanneer er overlopping is ==> true == overlapping

    float left;
    float right;
    float top;
    float bottom;
};

#endif // RECTF_H
