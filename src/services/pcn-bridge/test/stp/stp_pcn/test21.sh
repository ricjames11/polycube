#! /bin/bash

# 3 pcn-bridge; triangle topology
# test connectivity, after convergence

source "${BASH_SOURCE%/*}/../../helpers.bash"

function cleanup {
  set +e
  del_bridges 3
  delete_veth 3
  delete_link 3
}
trap cleanup EXIT

set -x

# setup
create_veth 3
create_link 3

set -e

add_bridges_stp 3

# create ports
bridge_add_port br1 link11
set_br_priority br1 24576
bridge_add_port br1 link32
bridge_add_port br1 veth1

bridge_add_port br2 link12
set_br_priority br2 28672
bridge_add_port br2 link21
bridge_add_port br2 veth2

bridge_add_port br3 link22
bridge_add_port br3 link31
bridge_add_port br3 veth3

#sleeping
sleep $CONVERGENCE_TIME


#testing connectivity
ping_cycle 3

# change topology
polycubectl br1 ports del link32
polycubectl br3 ports del link31

#sleeping
sleep $CONVERGENCE_TIME


#testing connectivity
ping_cycle 3
