/**
* simplebridge API
* Simple L2 Bridge Service
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


// These methods have a default implementation. Your are free to keep it or add your own


#include "../FdbEntry.h"


nlohmann::fifo_map<std::string, std::string>  FdbEntry::getKeys() {
  nlohmann::fifo_map<std::string, std::string>  r;

  r["address"] = getAddress();

  return r;
}






