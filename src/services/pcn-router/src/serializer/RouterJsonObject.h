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


/* Do not edit this file manually */

/*
* RouterJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"

#include "RouteJsonObject.h"
#include "PortsJsonObject.h"
#include <vector>
#include "ArpEntryJsonObject.h"
#include "polycube/services/cube.h"

using polycube::service::CubeType;

namespace io {
namespace swagger {
namespace server {
namespace model {

enum class RouterLoglevelEnum {
  TRACE, DEBUG, INFO, WARN, ERR, CRITICAL, OFF
};

/// <summary>
///
/// </summary>
class  RouterJsonObject : public JsonObjectBase {
public:
  RouterJsonObject();
  RouterJsonObject(nlohmann::json& json);
  ~RouterJsonObject() final = default;

  /////////////////////////////////////////////
  /// JsonObjectBase overrides

  nlohmann::json toJson() const final;

  static nlohmann::json helpKeys();
  static nlohmann::json helpElements();
  static nlohmann::json helpWritableLeafs();
  static nlohmann::json helpComplexElements();
  static std::vector<std::string> helpActions();
  /////////////////////////////////////////////
  /// RouterJsonObject members

  /// <summary>
  /// Name of the router service
  /// </summary>
  std::string getName() const;
  void setName(std::string value);
  bool nameIsSet() const;
  void unsetName();

  /// <summary>
  /// UUID of the Cube
  /// </summary>
  std::string getUuid() const;
  void setUuid(std::string value);
  bool uuidIsSet() const;
  void unsetUuid();

  /// <summary>
  /// Type of the Cube (TC, XDP_SKB, XDP_DRV)
  /// </summary>
  CubeType getType() const;
  void setType(CubeType value);
  bool typeIsSet() const;
  void unsetType();
  static std::string CubeType_to_string(const CubeType &value);
  static CubeType string_to_CubeType(const std::string &str);

  /// <summary>
  /// Defines the logging level of a service instance, from none (OFF) to the most verbose (TRACE)
  /// </summary>
  RouterLoglevelEnum getLoglevel() const;
  void setLoglevel(RouterLoglevelEnum value);
  bool loglevelIsSet() const;
  void unsetLoglevel();
  static std::string RouterLoglevelEnum_to_string(const RouterLoglevelEnum &value);
  static RouterLoglevelEnum string_to_RouterLoglevelEnum(const std::string &str);
  polycube::LogLevel getPolycubeLoglevel() const;
  /// <summary>
  /// Entry of the ports table
  /// </summary>
  const std::vector<PortsJsonObject>& getPorts() const;
  void addPorts(PortsJsonObject value);
  bool portsIsSet() const;
  void unsetPorts();

  /// <summary>
  /// Entry associated with the routing table
  /// </summary>
  const std::vector<RouteJsonObject>& getRoute() const;
  void addRoute(RouteJsonObject value);
  bool routeIsSet() const;
  void unsetRoute();

  /// <summary>
  /// Entry associated with the ARP table
  /// </summary>
  const std::vector<ArpEntryJsonObject>& getArpEntry() const;
  void addArpEntry(ArpEntryJsonObject value);
  bool arpEntryIsSet() const;
  void unsetArpEntry();


private:
  std::string m_name;
  bool m_nameIsSet;
  std::string m_uuid;
  bool m_uuidIsSet;
  CubeType m_type;
  bool m_typeIsSet;
  RouterLoglevelEnum m_loglevel;
  bool m_loglevelIsSet;
  std::vector<PortsJsonObject> m_ports;
  bool m_portsIsSet;
  std::vector<RouteJsonObject> m_route;
  bool m_routeIsSet;
  std::vector<ArpEntryJsonObject> m_arpEntry;
  bool m_arpEntryIsSet;
};

}
}
}
}

