#pragma once

#include "FlightTask.hpp"

class FlightTaskAutomanTask : public FlightTask
{
public:
  FlightTaskAutomanTask() = default;
  virtual ~FlightTaskAutomanTask() = default;

  bool update();
  bool activate(vehicle_local_position_setpoint_s last_setpoint);

private:
  float _origin_z{0.f};
};
