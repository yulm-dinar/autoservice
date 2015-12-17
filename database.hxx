#ifndef DATABASE_HXX
#define DATABASE_HXX

#include <owner.hxx>
#include <car.hxx>
#include <service.hxx>
#include <list>
#include <types.hxx>

class DataBase
{
public:
  DataBase();

  void add_data();
  void remove_data();
  void show_data();

private:
  std::list<Car> _car;
  std::list<Owner> _owner;
  std::list<Service> _service;

  uint _car_id;
  uint _owner_id;
  uint _service_id;

  void add_data(Car& car);
  void add_data(Owner& owner);
  void add_data(Service& service);

  void remove_data(const Car&);
  void remove_data(const Owner&);
  void remove_data(const Service&);
};

#endif // DATABASE_HXX
