/**
* simpleforwarder API
* Simple Forwarder Base Service
*
* OpenAPI spec version: 2.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/

#pragma once

#include "../interface/SimpleforwarderInterface.h"

#include "polycube/services/cube.h"
#include "polycube/services/fifo_map.hpp"
#include "polycube/services/port.h"
#include "polycube/services/utils.h"

#include <spdlog/spdlog.h>

#include "Actions.h"
#include "Ports.h"

using namespace io::swagger::server::model;
using polycube::service::CubeType;

class Simpleforwarder : public polycube::service::Cube<Ports>,
                        public SimpleforwarderInterface {
  friend class Ports;

 public:
  Simpleforwarder(const std::string name, const SimpleforwarderJsonObject &conf,
                  CubeType type = CubeType::TC);
  virtual ~Simpleforwarder();
  std::string generate_code();
  std::vector<std::string> generate_code_vector();
  void packet_in(Ports &port, polycube::service::PacketInMetadata &md,
                 const std::vector<uint8_t> &packet) override;

  void update(const SimpleforwarderJsonObject &conf) override;
  SimpleforwarderJsonObject toJsonObject() override;

  /// <summary>
  /// Name of the simpleforwarder service
  /// </summary>
  std::string getName() override;

  /// <summary>
  /// UUID of the Cube
  /// </summary>
  std::string getUuid() override;

  /// <summary>
  /// Type of the Cube (TC, XDP_SKB, XDP_DRV)
  /// </summary>
  CubeType getType() override;

  /// <summary>
  /// Defines the logging level of a service instance, from none (OFF) to the
  /// most verbose (TRACE)
  /// </summary>
  SimpleforwarderLoglevelEnum getLoglevel() override;
  void setLoglevel(const SimpleforwarderLoglevelEnum &value) override;

  /// <summary>
  /// Entry of the ports table
  /// </summary>
  std::shared_ptr<Ports> getPorts(const std::string &name) override;
  std::vector<std::shared_ptr<Ports>> getPortsList() override;
  void addPorts(const std::string &name, const PortsJsonObject &conf) override;
  void addPortsList(const std::vector<PortsJsonObject> &conf) override;
  void replacePorts(const std::string &name,
                    const PortsJsonObject &conf) override;
  void delPorts(const std::string &name) override;
  void delPortsList() override;

  /// <summary>
  /// Entry of the Actions table
  /// </summary>
  std::shared_ptr<Actions> getActions(const std::string &inport) override;
  std::vector<std::shared_ptr<Actions>> getActionsList() override;
  void addActions(const std::string &inport,
                  const ActionsJsonObject &conf) override;
  void addActionsList(const std::vector<ActionsJsonObject> &conf) override;
  void replaceActions(const std::string &inport,
                      const ActionsJsonObject &conf) override;
  void delActions(const std::string &inport) override;
  void delActionsList() override;
};
