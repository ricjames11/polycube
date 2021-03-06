/**
* synflood API generated from synflood.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */

/*
* SynfloodApiImpl.h
*
*
*/

#pragma once


#include <memory>
#include <map>
#include <mutex>
#include "../Synflood.h"

#include "StatsJsonObject.h"
#include "SynfloodJsonObject.h"
#include <vector>

namespace polycube {
namespace service {
namespace api {

using namespace polycube::service::model;

namespace SynfloodApiImpl {
  void create_synflood_by_id(const std::string &name, const SynfloodJsonObject &value);
  void delete_synflood_by_id(const std::string &name);
  SynfloodJsonObject read_synflood_by_id(const std::string &name);
  std::vector<SynfloodJsonObject> read_synflood_list_by_id();
  StatsJsonObject read_synflood_stats_by_id(const std::string &name);
  std::string read_synflood_stats_deliverratio_by_id(const std::string &name);
  uint64_t read_synflood_stats_lastupdate_by_id(const std::string &name);
  std::string read_synflood_stats_responseratio_by_id(const std::string &name);
  std::string read_synflood_stats_tcpattemptfails_by_id(const std::string &name);
  std::string read_synflood_stats_tcpoutrsts_by_id(const std::string &name);
  void replace_synflood_by_id(const std::string &name, const SynfloodJsonObject &value);
  void update_synflood_by_id(const std::string &name, const SynfloodJsonObject &value);
  void update_synflood_list_by_id(const std::vector<SynfloodJsonObject> &value);

  /* help related */
  std::vector<nlohmann::fifo_map<std::string, std::string>> read_synflood_list_by_id_get_list();

}
}
}
}

