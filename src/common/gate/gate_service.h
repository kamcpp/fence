/***************************************************************
 * Generated by Hottentot CC Generator
 * Date: 24-01-2016 03:08:11
 * Name: gate_service.h
 * Description:
 *   This file contains definition of service interface.
 ***************************************************************/

#ifndef _IR_NTNAEEM_GATE__PROXY__GATE_SERVICE_H_
#define _IR_NTNAEEM_GATE__PROXY__GATE_SERVICE_H_

#include <stdint.h>
#include <string>

#include <naeem/hottentot/runtime/types/primitives.h>

#include "status.h"
#include "message.h"


namespace ir {
namespace ntnaeem {
namespace gate {
  class GateService {
  public:
    virtual void EnqueueMessage(::ir::ntnaeem::gate::Message &message, ::naeem::hottentot::runtime::types::UInt32 &out) = 0;
    virtual void GetMessageStatus(::naeem::hottentot::runtime::types::UInt32 &id, ::ir::ntnaeem::gate::Status &out) = 0;
    virtual void HasMoreMessage(::naeem::hottentot::runtime::types::Utf8String &label, ::naeem::hottentot::runtime::types::Boolean &out) = 0;
    virtual void NextMessage(::naeem::hottentot::runtime::types::Utf8String &label, ::naeem::hottentot::runtime::types::Boolean &messageRetrieved, ::ir::ntnaeem::gate::Message &out) = 0;
  };
} // END OF NAMESPACE gate
} // END OF NAMESPACE ntnaeem
} // END OF NAMESPACE ir

#endif