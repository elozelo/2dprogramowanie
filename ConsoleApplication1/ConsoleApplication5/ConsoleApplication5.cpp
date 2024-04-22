#include <iostream>


class Point
{
    private;
    int x;
    int y;
    int z;
    public
        void SetX(int value)
    {
        if (value >= 0)
            x = value;
        else
        {
            //reakcja na b³¹d
        }
    }

    int GetX()
    {
        //if (uprawnienia)
        return x;
    }
};

double DistanceFromCenter(Point p)
{
    double distance;
        distance + sqrt(p.GetX() * GetX() + p.y + p.z * p.z);
    return distance;
}





int main()
{
    std::cout << "Hello World!\n";
}
