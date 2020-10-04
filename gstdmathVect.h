// garrett standard template library header file

// struct templates for mathmatical vetors (2d and 3d)
#pragma once

#include "gstdint.h"

namespace gstd
{
    template <typename T = int16> // 16 bit integer is defualt / it is expected that you handle out of range exeptions yourself and allocat more memory to the struct if required
    struct vect2d
    {
        //static_assert(!std::is_same<T, float>::value, "You can't use floats here");
    private:
        // base variables
        T x;
        T y;

        // logging variables
        bool logging;

    public:
        // constructors
        vect2d(const bool logging = false)
        {
            this->x = NULL;
            this->y = NULL;

            this->logging = logging;
            return;
        }
        vect2d(const T newX, const T newY, const bool logging = false)
        {
            this->x = newX;
            this->y = newY;

            this->logging = logging;
            return;
        }
        vect2d(const vect2d& assignmentvect2d)
        {
            this->x = assignmentvect2d.x;
            this->y = assignmentvect2d.y;

            this->logging = assignmentvect2d.logging;
            return;
        }
        vect2d(const vect2d& assignmentvect2d, const bool logging)
        {
            this->x = assignmentvect2d.x;
            this->y = assignmentvect2d.y;

            this->logging = logging;
            return;
        }

        // setters and getters
        void setX(const T newX)
        {
            this->x = newX;
            return;
        }
        void setY(const T newY)
        {
            this->y = newY;
            return;
        }

        T getX() const
        {
            return this->x;
        }
        T getY() const
        {
            return this->y;
        }

        // operator overloads
        // arithmetical and compound assignment operators

        vect2d operator+ (vect2d& otherVect2d) const
        {
            vect2d returnVect2d;
            returnVect2d.x = this->x + otherVect2d.x;
            returnVect2d.y = this->y + otherVect2d.y;
            return returnVect2d;
        }
        void operator+= (vect2d& otherVect2d)
        {
            this->x += otherVect2d.x;
            this->y += otherVect2d.y;
            return;
        }

        vect2d operator- (vect2d& otherVect2d) const
        {
            vect2d returnVect2d;
            returnVect2d.x = this->x - otherVect2d.x;
            returnVect2d.y = this->y - otherVect2d.y;
            return returnVect2d;
        }
        void operator-= (vect2d& otherVect2d)
        {
            this->x -= otherVect2d.x;
            this->y -= otherVect2d.y;
            return;
        }

        vect2d operator* (vect2d& otherVect2d) const
        {
            vect2d returnVect2d;
            returnVect2d.x = this->x * otherVect2d.x;
            returnVect2d.y = this->y * otherVect2d.y;
            return returnVect2d;
        }
        void operator*= (vect2d& otherVect2d)
        {
            this->x *= otherVect2d.x;
            this->y *= otherVect2d.y;
            return;
        }

        vect2d operator/ (vect2d& otherVect2d) const
        {
            vect2d returnVect2d;
            returnVect2d.x = this->x / otherVect2d.x;
            returnVect2d.y = this->y / otherVect2d.y;
            return returnVect2d;
        }
        void operator/= (vect2d& otherVect2d)
        {
            this->x /= otherVect2d.x;
            this->y /= otherVect2d.y;
            return;
        }

        vect2d operator% (vect2d& otherVect2d) const
        {
            vect2d returnVect2d;
            returnVect2d.x = this->x % otherVect2d.x;
            returnVect2d.y = this->y % otherVect2d.y;
            return returnVect2d;
        }
        void operator%= (vect2d& otherVect2d)
        {
            this->x %= otherVect2d.x;
            this->y %= otherVect2d.y;
            return;
        }

        // Relational and comparison operators

        bool operator== (vect2d& compairVect2d) const
        {
            if (this->x == compairVect2d.x && this->y == compairVect2d.y)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        bool operator!= (vect2d& compairVect2d) const
        {
            if (this->x == compairVect2d.x && this->y == compairVect2d.y)
            {
                return false;
            }
            else
            {
                return true;
            }
        }

        // assignment operator

        void operator= (vect2d& assignmentvect2d)
        {
            this->x = assignmentvect2d.x;
            this->y = assignmentvect2d.y;
            return;
        }
        void operator= (vect2d assignmentvect2d)
        {
            this->x = assignmentvect2d.x;
            this->y = assignmentvect2d.y;
            return;
        }
    };

    template <typename T = int16> // 16 bit integer is defualt / it is expected that you handle out of range exeptions yourself and allocat more memory to the struct if required
    struct vect3d
    {
    private:
        // base variables
        T x;
        T y;
        T z;

    public:
        // constructors
        vect3d()
        {
            this->x = 0;
            this->y = 0;
            this->z = 0;
            return;
        }
        vect3d(const T newX, const T newY, const T newZ)
        {
            this->x = newX;
            this->y = newY;
            this->z = newZ;
            return;
        }
        vect3d(const vect3d& assignmentvect3d)
        {
            this->x = assignmentvect3d.x;
            this->y = assignmentvect3d.y;
            this->z = assignmentvect3d.z;
            return;
        }

        // setters and getters
        void setX(const T newX)
        {
            this->x = newX;
            return;
        }
        void setY(const T newY)
        {
            this->y = newY;
            return;
        }
        void setZ(const T newZ)
        {
            this->z = newZ;
            return;
        }

        T getX() const
        {
            return this->x;
        }
        T getY() const
        {
            return this->y;
        }
        T getZ() const
        {
            return this->z;
        }

        // operator overloads
        // arithmetical and compound assignment operators

        vect3d operator+ (vect3d& othervect3d) const
        {
            vect3d returnvect3d;
            returnvect3d.x = this->x + othervect3d.x;
            returnvect3d.y = this->y + othervect3d.y;
            returnvect3d.z = this->z + othervect3d.z;
            return returnvect3d;
        }
        void operator+= (vect3d& othervect3d)
        {
            this->x += othervect3d.x;
            this->y += othervect3d.y;
            this->z += othervect3d.z;
            return;
        }

        vect3d operator- (vect3d& othervect3d) const
        {
            vect3d returnvect3d;
            returnvect3d.x = this->x - othervect3d.x;
            returnvect3d.y = this->y - othervect3d.y;
            returnvect3d.z = this->z - othervect3d.z;
            return returnvect3d;
        }
        void operator-= (vect3d& othervect3d)
        {
            this->x -= othervect3d.x;
            this->y -= othervect3d.y;
            this->z -= othervect3d.z;
            return;
        }

        vect3d operator* (vect3d& othervect3d) const
        {
            vect3d returnvect3d;
            returnvect3d.x = this->x * othervect3d.x;
            returnvect3d.y = this->y * othervect3d.y;
            returnvect3d.z = this->z * othervect3d.z;
            return returnvect3d;
        }
        void operator*= (vect3d& othervect3d)
        {
            this->x *= othervect3d.x;
            this->y *= othervect3d.y;
            this->z *= othervect3d.z;
            return;
        }

        vect3d operator/ (vect3d& othervect3d) const
        {
            vect3d returnvect3d;
            returnvect3d.x = this->x / othervect3d.x;
            returnvect3d.y = this->y / othervect3d.y;
            returnvect3d.z = this->z / othervect3d.z;
            return returnvect3d;
        }
        void operator/= (vect3d& othervect3d)
        {
            this->x /= othervect3d.x;
            this->y /= othervect3d.y;
            this->z /= othervect3d.z;
            return;
        }

        vect3d operator% (vect3d& othervect3d) const
        {
            vect3d returnvect3d;
            returnvect3d.x = this->x % othervect3d.x;
            returnvect3d.y = this->y % othervect3d.y;
            returnvect3d.z = this->z % othervect3d.z;
            return returnvect3d;
        }
        void operator%= (vect3d& othervect3d)
        {
            this->x %= othervect3d.x;
            this->y %= othervect3d.y;
            this->z %= othervect3d.z;
            return;
        }

        // Relational and comparison operators

        bool operator== (vect3d& compairvect3d) const
        {
            if (this->x == compairvect3d.x && this->y == compairvect3d.y && this->z == compairvect3d.z)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        bool operator!= (vect3d& compairvect3d) const
        {
            if (this->x == compairvect3d.x && this->y == compairvect3d.y && this->z == compairvect3d.z)
            {
                return false;
            }
            else
            {
                return true;
            }
        }

        // assignment operator

        void operator= (vect3d& assignmentvect3d)
        {
            this->x = assignmentvect3d.x;
            this->y = assignmentvect3d.y;
            this->z = assignmentvect3d.z;
            return;
        }
        void operator= (vect3d assignmentvect3d)
        {
            this->x = assignmentvect3d.x;
            this->y = assignmentvect3d.y;
            this->z = assignmentvect3d.z;
            return;
        }
    };
}