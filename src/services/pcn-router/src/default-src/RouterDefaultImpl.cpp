/**
* router API
* Router Service
*
* OpenAPI spec version: 2.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


// These methods have a default implementation. Your are free to keep it or add your own


#include "../Router.h"




std::string Router::getName(){
  // This method retrieves the name value.
  return Cube::get_name();
}


std::string Router::getUuid(){
  // This method retrieves the uuid value.
  return Cube::get_uuid().str();
}


CubeType Router::getType(){
  // This method retrieves the type value.
  return Cube::get_type();
}


RouterLoglevelEnum Router::getLoglevel(){
  // This method retrieves the loglevel value.
    switch(Cube::get_log_level()){
      case polycube::LogLevel::TRACE:
        return RouterLoglevelEnum::TRACE;
      case polycube::LogLevel::DEBUG:
        return RouterLoglevelEnum::DEBUG;
      case polycube::LogLevel::INFO:
        return RouterLoglevelEnum::INFO;
      case polycube::LogLevel::WARN:
        return RouterLoglevelEnum::WARN;
      case polycube::LogLevel::ERR:
        return RouterLoglevelEnum::ERR;
      case polycube::LogLevel::CRITICAL:
        return RouterLoglevelEnum::CRITICAL;
      case polycube::LogLevel::OFF:
        return RouterLoglevelEnum::OFF;
    }
}

void Router::setLoglevel(const RouterLoglevelEnum &value){
  // This method sets the loglevel value.
    switch(value){
      case RouterLoglevelEnum::TRACE:
        Cube::set_log_level(polycube::LogLevel::TRACE);
        break;
      case RouterLoglevelEnum::DEBUG:
        Cube::set_log_level(polycube::LogLevel::DEBUG);
        break;
      case RouterLoglevelEnum::INFO:
        Cube::set_log_level(polycube::LogLevel::INFO);
        break;
      case RouterLoglevelEnum::WARN:
        Cube::set_log_level(polycube::LogLevel::WARN);
        break;
      case RouterLoglevelEnum::ERR:
        Cube::set_log_level(polycube::LogLevel::ERR);
        break;
      case RouterLoglevelEnum::CRITICAL:
        Cube::set_log_level(polycube::LogLevel::CRITICAL);
        break;
      case RouterLoglevelEnum::OFF:
        Cube::set_log_level(polycube::LogLevel::OFF);
        break;
    }
}

std::shared_ptr<Ports> Router::getPorts(const std::string &name){
  return Ports::getEntry(*this, name);
}

std::vector<std::shared_ptr<Ports>> Router::getPortsList(){
  return Ports::get(*this);
}

void Router::addPorts(const std::string &name, const PortsJsonObject &conf){
  Ports::create(*this, name, conf);
}

void Router::addPortsList(const std::vector<PortsJsonObject> &conf){
  for(auto &i : conf){
    std::string name_ = i.getName();
    Ports::create(*this, name_,  i);
  }
}

void Router::replacePorts(const std::string &name, const PortsJsonObject &conf){
  Ports::removeEntry(*this, name);
  std::string name_ = conf.getName();
  Ports::create(*this, name_, conf);

}

void Router::delPorts(const std::string &name){
  Ports::removeEntry(*this, name);
}

void Router::delPortsList(){
  Ports::remove(*this);
}

std::shared_ptr<Route> Router::getRoute(const std::string &network, const std::string &netmask, const std::string &nexthop){
  return Route::getEntry(*this, network, netmask, nexthop);
}

std::vector<std::shared_ptr<Route>> Router::getRouteList(){
  return Route::get(*this);
}

void Router::addRoute(const std::string &network, const std::string &netmask, const std::string &nexthop, const RouteJsonObject &conf){
  Route::create(*this, network, netmask, nexthop, conf);
}

void Router::addRouteList(const std::vector<RouteJsonObject> &conf){
  for(auto &i : conf){
    std::string network_ = i.getNetwork();
    std::string netmask_ = i.getNetmask();
    std::string nexthop_ = i.getNexthop();
    Route::create(*this, network_, netmask_, nexthop_,  i);
  }
}

void Router::replaceRoute(const std::string &network, const std::string &netmask, const std::string &nexthop, const RouteJsonObject &conf){
  Route::removeEntry(*this, network, netmask, nexthop);
  std::string network_ = conf.getNetwork();
  std::string netmask_ = conf.getNetmask();
  std::string nexthop_ = conf.getNexthop();
  Route::create(*this, network_, netmask_, nexthop_, conf);

}

void Router::delRoute(const std::string &network, const std::string &netmask, const std::string &nexthop){
  Route::removeEntry(*this, network, netmask, nexthop);
}

void Router::delRouteList(){
  Route::remove(*this);
}

std::shared_ptr<ArpEntry> Router::getArpEntry(const std::string &address){
  return ArpEntry::getEntry(*this, address);
}

std::vector<std::shared_ptr<ArpEntry>> Router::getArpEntryList(){
  return ArpEntry::get(*this);
}

void Router::addArpEntry(const std::string &address, const ArpEntryJsonObject &conf){
  ArpEntry::create(*this, address, conf);
}

void Router::addArpEntryList(const std::vector<ArpEntryJsonObject> &conf){
  for(auto &i : conf){
    std::string address_ = i.getAddress();
    ArpEntry::create(*this, address_,  i);
  }
}

void Router::replaceArpEntry(const std::string &address, const ArpEntryJsonObject &conf){
  ArpEntry::removeEntry(*this, address);
  std::string address_ = conf.getAddress();
  ArpEntry::create(*this, address_, conf);

}

void Router::delArpEntry(const std::string &address){
  ArpEntry::removeEntry(*this, address);
}

void Router::delArpEntryList(){
  ArpEntry::remove(*this);
}


