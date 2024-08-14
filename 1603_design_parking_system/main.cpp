class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small):
        big_(big),
        medium_(medium),
        small_(small)
    {}
    bool addCar(int carType) {
      if (carType == 1)
      {
        if (big_ == 0)
        {
            return false;
        }
        --big_; 
      }
      else if (carType == 2)
      {
        if (medium_ == 0)
        {
            return false;
        }
        --medium_;
      }
      else
      {
        if (small_ == 0)
        {
            return false;
        }
        --small_;
      }
      return true;  
    }
private:
    int big_;
    int medium_;
    int small_;
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
