#include <iostream>
#include <math.h>

#define range 300
#define r_earth 6371000
#define pi 3.142

using namespace std;

int main()
{
    double user_lat;
    double user_lon;
    double target_lat;
    double target_lon;

    double dist;

    double dlat;
    double dlon;
    double a;
    double c;

    cout<< "This program take in 2 GPS coordinates in deg and the as-the-crow-flies distance will be calculated.\nIf the target is within range, (default range = 300m) \nAn alert will be triggered \n\n";
    cout << "Enter your Latitude:";
    cin >> user_lat;

    cout << "Enter your Longtitude:";
    cin >> user_lon;

    cout << "Enter Target Latitude:";
    cin >> target_lat;

    cout << "Enter Target Longtitude:";
    cin >> target_lon;

    cout << "\nYour GPS Coordinates: " << user_lat << "," << user_lon << "\n";
    cout << "Target Coordinate: " << target_lat << "," << target_lon << "\n \n";

    user_lat= (user_lat* pi)/180;
    user_lon= (user_lon* pi)/180;
    target_lat= (target_lat* pi)/180;
    target_lon= (target_lon* pi)/180;

    dlat = (target_lat - user_lat);
    dlon = (target_lon - user_lon);
    a= (sin(dlat/2))* (sin(dlat/2))+ cos (user_lat)* cos (target_lat)* sin(dlon/2)*sin(dlon/2);
    c= 2*atan2(sqrt(a),sqrt(1-a));
    dist = r_earth * c;
    cout << "Target is " << dist << " metres away from you. \n";
    if (dist <= range)
    {
     cout << "Look Out! Target is in range. \n";
    }


    return 0;
}
