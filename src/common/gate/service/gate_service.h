/***************************************************************
 * Generated by Hottentot CC Generator
 * Date: 06-02-2016 12:36:46
 * Name: gate_service.h
 * Description:
 *   This file contains definition of service interface.
 ***************************************************************/

#ifndef _IR_NTNAEEM_GATE__SERVICE__GATE_SERVICE_H_
#define _IR_NTNAEEM_GATE__SERVICE__GATE_SERVICE_H_

#ifdef _MSC_VER
typedef __int8 int8_t;
typedef unsigned __int8 uint8_t;
typedef __int16 int16_t;
typedef unsigned __int16 uint16_t;
typedef __int32 int32_t;
typedef unsigned __int32 uint32_t;
typedef __int64 int64_t;
typedef unsigned __int64 uint64_t;
#else
#include <stdint.h>
#endif

#include <string>

#include <naeem/hottentot/runtime/types/primitives.h>
#include <naeem/hottentot/runtime/service/hot_context.h>

#include "../message_status.h"
#include "../message.h"


namespace ir {
namespace ntnaeem {
namespace gate {
namespace service {
  class GateService {
  public:
     GateService() {}
     virtual ~GateService() {}
  public:
    virtual void EnqueueMessage(
      ::ir::ntnaeem::gate::Message &message, 
      ::naeem::hottentot::runtime::types::UInt64 &out, 
      ::naeem::hottentot::runtime::service::HotContext &hotContext
    ) = 0;
    virtual void GetMessageStatus(
      ::naeem::hottentot::runtime::types::UInt64 &id, 
      ::ir::ntnaeem::gate::MessageStatus &out, 
      ::naeem::hottentot::runtime::service::HotContext &hotContext
    ) = 0;
    virtual void HasMoreMessage(
      ::naeem::hottentot::runtime::types::Utf8String &label, 
      ::naeem::hottentot::runtime::types::Boolean &out, 
      ::naeem::hottentot::runtime::service::HotContext &hotContext
    ) = 0;
    virtual void NextMessage(
      ::naeem::hottentot::runtime::types::Utf8String &label, 
      ::ir::ntnaeem::gate::Message &out, 
      ::naeem::hottentot::runtime::service::HotContext &hotContext
    ) = 0;
  };
} // END OF NAMESPACE service
} // END OF NAMESPACE gate
} // END OF NAMESPACE ntnaeem
} // END OF NAMESPACE ir

#endif