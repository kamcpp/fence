/***************************************************************
 * Generated by Hottentot CC Generator
 * Date: 25-01-2016 02:16:31
 * Name: message.h
 * Description:
 *   This file contains definition of Message class.
 ***************************************************************/

#ifndef _IR_NTNAEEM_GATE__MESSAGE_H_
#define _IR_NTNAEEM_GATE__MESSAGE_H_

#include <string>

#include <naeem/hottentot/runtime/types/primitives.h>
#include <naeem/hottentot/runtime/serializable.h>


namespace ir {
namespace ntnaeem {
namespace gate {
  class Message : public ::naeem::hottentot::runtime::Serializable {
  public:
    Message() {}
    ~Message() {}
  public:
    inline ::naeem::hottentot::runtime::types::UInt64 GetId() const {
      return id_;
    }
    inline void SetId(::naeem::hottentot::runtime::types::UInt64 id) {
      id_ = id;
    }
    inline ::naeem::hottentot::runtime::types::UInt64 GetRelId() const {
      return relId_;
    }
    inline void SetRelId(::naeem::hottentot::runtime::types::UInt64 relId) {
      relId_ = relId;
    }
    inline ::naeem::hottentot::runtime::types::Utf8String GetRelLabel() const {
      return relLabel_;
    }
    inline void SetRelLabel(::naeem::hottentot::runtime::types::Utf8String relLabel) {
      relLabel_ = relLabel;
    }
    inline ::naeem::hottentot::runtime::types::Utf8String GetLabel() const {
      return label_;
    }
    inline void SetLabel(::naeem::hottentot::runtime::types::Utf8String label) {
      label_ = label;
    }
    inline ::naeem::hottentot::runtime::types::ByteArray GetContent() const {
      return content_;
    }
    inline void SetContent(::naeem::hottentot::runtime::types::ByteArray content) {
      content_ = content;
    }
  public:
    virtual unsigned char * Serialize(uint32_t * /* Pointer to length */);
    virtual void Deserialize(unsigned char * /* Data */, uint32_t /* Data length */);
  private:
    ::naeem::hottentot::runtime::types::UInt64 id_;
    ::naeem::hottentot::runtime::types::UInt64 relId_;
    ::naeem::hottentot::runtime::types::Utf8String relLabel_;
    ::naeem::hottentot::runtime::types::Utf8String label_;
    ::naeem::hottentot::runtime::types::ByteArray content_;
  };
} // END OF NAMESPACE gate
} // END OF NAMESPACE ntnaeem
} // END OF NAMESPACE ir

#endif