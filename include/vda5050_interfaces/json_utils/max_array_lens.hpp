/**
 * Copyright (C) 2025 ROS-Industrial Consortium Asia Pacific
 * Advanced Remanufacturing and Technology Centre
 * A*STAR Research Entities (Co. Registration No. 199702110H)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef VDA5050_INTERFACES__JSON_UTILS__MAX_ARRAY_LENS_HPP_
#define VDA5050_INTERFACES__JSON_UTILS__MAX_ARRAY_LENS_HPP_

#include <nlohmann/json.hpp>

#include "vda5050_interfaces/msg/max_array_lens.hpp"

namespace vda5050_interfaces {

namespace msg {

// ============================================================================
/// \brief Convert a vda5050_interfaces::msg::MaxArrayLens object to a nlohmann::json object
///
/// \param j Reference to the JSON object to be populated
/// \param msg Reference to the MaxArrayLens message object to serialize
inline void to_json(nlohmann::json& j, const MaxArrayLens& msg)
{
  j["order.nodes"] = msg.order_nodes;
  j["order.edges"] = msg.order_edges;
  j["node.actions"] = msg.node_actions;
  j["edge.actions"] = msg.edge_actions;
  j["actions.actionsParameters"] = msg.actions_actions_parameters;
  j["instantActions"] = msg.instant_actions;
  j["trajectory.knotVector"] = msg.trajectory_knot_vector;
  j["trajectory.controlPoints"] = msg.trajectory_control_points;
  j["state.nodeStates"] = msg.state_node_states;
  j["state.edgeStates"] = msg.state_edge_states;
  j["state.loads"] = msg.state_loads;
  j["state.actionStates"] = msg.state_action_states;
  j["state.errors"] = msg.state_errors;
  j["state.information"] = msg.state_information;
  j["error.errorReferences"] = msg.error_error_references;
  j["information.infoReferences"] = msg.information_info_references;
}

// ============================================================================
/// \brief Convert a nlohmann::json object to a vda5050_interfaces::msg::MaxArrayLens object
///
/// \param j Reference to the JSON object containing serialized MaxArrayLens data
/// \param msg Reference to the MaxArrayLens message to populate
inline void from_json(const nlohmann::json& j, MaxArrayLens& msg)
{
  if (j.contains("order.nodes"))
  {
    msg.order_nodes = j.at("order.nodes").get<uint32_t>();
  }

  if (j.contains("order.edges"))
  {
    msg.order_edges = j.at("order.edges").get<uint32_t>();
  }

  if (j.contains("node.actions"))
  {
    msg.node_actions = j.at("node.actions").get<uint32_t>();
  }

  if (j.contains("edge.actions"))
  {
    msg.edge_actions = j.at("edge.actions").get<uint32_t>();
  }

  if (j.contains("actions.actionsParameters"))
  {
    msg.actions_actions_parameters =
      j.at("actions.actionsParameters").get<uint32_t>();
  }

  if (j.contains("instantActions"))
  {
    msg.instant_actions = j.at("instantActions").get<uint32_t>();
  }

  if (j.contains("trajectory.knotVector"))
  {
    msg.trajectory_knot_vector = j.at("trajectory.knotVector").get<uint32_t>();
  }

  if (j.contains("trajectory.controlPoints"))
  {
    msg.trajectory_control_points =
      j.at("trajectory.controlPoints").get<uint32_t>();
  }

  if (j.contains("state.nodeStates"))
  {
    msg.state_node_states = j.at("state.nodeStates").get<uint32_t>();
  }

  if (j.contains("state.edgeStates"))
  {
    msg.state_edge_states = j.at("state.edgeStates").get<uint32_t>();
  }

  if (j.contains("state.loads"))
  {
    msg.state_loads = j.at("state.loads").get<uint32_t>();
  }

  if (j.contains("state.actionStates"))
  {
    msg.state_action_states = j.at("state.actionStates").get<uint32_t>();
  }

  if (j.contains("state.errors"))
  {
    msg.state_errors = j.at("state.errors").get<uint32_t>();
  }

  if (j.contains("state.information"))
  {
    msg.state_information = j.at("state.information").get<uint32_t>();
  }

  if (j.contains("error.errorReferences"))
  {
    msg.error_error_references = j.at("error.errorReferences").get<uint32_t>();
  }

  if (j.contains("information.infoReferences"))
  {
    msg.information_info_references =
      j.at("information.infoReferences").get<uint32_t>();
  }
}

}  // namespace msg
}  // namespace vda5050_interfaces

#endif  // VDA5050_INTERFACES__JSON_UTILS__MAX_ARRAY_LENS_HPP_
