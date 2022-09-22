#include "FlightTaskAutomanTask.hpp"

bool FlightTaskAutomanTask::activate(vehicle_local_position_setpoint_s last_setpoint)
{
  bool ret = FlightTask::activate(last_setpoint);
  PX4_INFO("FlightTaskAutomanTask activate was called! ret: %d", ret); // report if activation was succesful
  return ret;
}

bool FlightTaskAutomanTask::update()
{
  // PX4_INFO("FlightTaskAutomanTask update was called!"); // report update
  return true;
}
