//
// Created by century on 2023/10/7.
//

#pragma once

#include "common/rc.h"

class SQLStageEvent;

class DropTableExecutor
{
public:
  DropTableExecutor() = default;
  virtual ~DropTableExecutor() = default;

  RC execute(SQLStageEvent* sql_event);
};

