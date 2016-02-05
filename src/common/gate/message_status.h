/***************************************************************
 * Generated by Hottentot CC Generator
 * Date: 03-02-2016 03:40:24
 * Name: message_status.h
 * Description:
 *   This file contains definition of MessageStatus class.
 ***************************************************************/

#ifndef _IR_NTNAEEM_GATE__MESSAGE_STATUS_H_
#define _IR_NTNAEEM_GATE__MESSAGE_STATUS_H_

#include <string>

#include <naeem/hottentot/runtime/types/primitives.h>
#include <naeem/hottentot/runtime/serializable.h>


namespace ir {
namespace ntnaeem {
namespace gate {
  class MessageStatus : public ::naeem::hottentot::runtime::Serializable {
  public:
    MessageStatus() {}
    ~MessageStatus() {}
  public:
    inline ::naeem::hottentot::runtime::types::Int16 GetStatusCode() const {
      return statusCode_;
    }
    inline void SetStatusCode(::naeem::hottentot::runtime::types::Int16 statusCode) {
      statusCode_ = statusCode;
    }
  public:
    virtual unsigned char * Serialize(uint32_t * /* Pointer to length */);
    virtual void Deserialize(unsigned char * /* Data */, uint32_t /* Data length */);
  private:
    ::naeem::hottentot::runtime::types::Int16 statusCode_;
  };
} // END OF NAMESPACE gate
} // END OF NAMESPACE ntnaeem
} // END OF NAMESPACE ir

#endif