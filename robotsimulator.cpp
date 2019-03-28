#include <iostream>
#include <string>


using namespace std;

class Robot 
{
    public:

    bool movement(char direction)
    {
        if (direction == 'R')
        {
            if(face_Direction == "North")
            {
                face_Direction = "East";
                return true;
            }

            else if(face_Direction == "South")
            {
                face_Direction = "West";
                return true;
            }

            else if(face_Direction == "West")
            {
                face_Direction = "North";
                return true;
            }

            else if(face_Direction == "East")
            {
                face_Direction = "South";
                return true;
            }
        }

        else if (direction == 'L')
        {
            if(face_Direction == "North")
            {
                face_Direction = "West";
                return true;
            }

            else if(face_Direction == "South")
            {
                face_Direction = "East";
                return true;
            }

            else if(face_Direction == "West")
            {
                face_Direction = "South";
                return true;
            }

            else if(face_Direction == "East")
            {
                face_Direction = "North";
                return true;
            }
        }

        else if (direction == 'A')
        {
            if(face_Direction == "North")
            {
                y++;
                return true;
            }

            else if(face_Direction == "South")
            {
                y--;
                return true;
            }

            else if(face_Direction == "West")
            {
                x--;
                return true;
            }

            else if(face_Direction == "East")
            {
               
               x++;
               
               return true;
            }
        }

        else
        {
            cout << "Not a correct Direction!" << endl;
            return false;
        } 

    }

    void get_Position()
    {
        cout << "Robot is currently facing " << face_Direction << " at {" << x << ", " << y << "} coordinates." << endl;
    }
    
    bool change_Position(long long int x_, long long int y_, string Direction)
    {
        if (Direction == "North" || "north" || "NORTH")
        {
            x = x_;
            y = y_;
            face_Direction = "North";
            return true;
        }

        else if (Direction == "South" || "south" || "SOUTH")
        {
            x = x_;
            y = y_;
            face_Direction = "South";
            return true;

        }

        else if (Direction == "West" || "west" || "WEST")
        {
            x = x_;
            y = y_;
            face_Direction = "West";
            return true;
        }

        else if (Direction == "East" || "east" || "EAST")
        {
            x = x_;
            y = y_;
            face_Direction = "East";
            return true;
        }
        else 
        {
            cout << "ERROR: TRY AGAIN!";
            return false; 
        }

    }

    private:
    long long int x = 0;
    long long int y = 0;
    string face_Direction = "North";


    


};



int main(){

    string input_Movement;
    Robot bob;
    cout << "Welcome to the robot simulator. Please use this program to verify the robots movemenents: " << endl;
    cin >> input_Movement;
    
    bob.change_Position(7,3, "North");
    bob.get_Position();
    for (int i = 0; i < input_Movement.length(); i++)
    {
        bob.movement(input_Movement[i]);
    }

    bob.get_Position();


    return 0;
}

