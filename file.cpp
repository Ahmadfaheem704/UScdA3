#include<iostream>
using namespace std;
class Door {
 	private:
		bool isopen;
		bool isLocked;
	public:
		Door(); // Initializes the door as closed and unlocked
		void openDoor();
		void closeDoor();
 		void lockDoor();
		void unlock();
 		bool isDoorOpen() const;
		bool isDoorlocked() const;
	};
 feature/DoorClose

void Door::closeDoor() {
    isopen = false;
    cout << "Door is now closed." << endl;

void Door::unlock() {
    isLocked = false;

}