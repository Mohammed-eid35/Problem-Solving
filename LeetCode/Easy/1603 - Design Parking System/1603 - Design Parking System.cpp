class ParkingSystem {
private:
    int parkingLot[3];
public:
    ParkingSystem(int big, int medium, int small) {
        parkingLot[0] = big;
        parkingLot[1] = medium;
        parkingLot[2] = small;
    }
    
    bool addCar(int carType) {
        return parkingLot[carType - 1]-- > 0;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */