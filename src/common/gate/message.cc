/******************************************************************
 * Generated by Hottentot CC Generator
 * Date: 24-01-2016 03:08:11
 * Name: message.cc
 * Description:
 *   This file contains implementation of Message class.
 ******************************************************************/

#include <iostream>
#include <string.h>

#include "message.h"


namespace ir {
namespace ntnaeem {
namespace gate {
  unsigned char *
  Message::Serialize(uint32_t *length_ptr) {
    uint32_t totalLength = 0;
    uint32_t length0 = 0;
    unsigned char *data0 = id_.Serialize(&length0);
    if (length0 <= 127) {
      totalLength += 1 + length0;
    } else if (length0 <= (256 * 256 - 1)) {
      totalLength += 3 + length0;
    } else if (length0 <= (256 * 256 * 256 - 1)) {
      totalLength += 3 + length0;
    }
    uint32_t length1 = 0;
    unsigned char *data1 = relId_.Serialize(&length1);
    if (length1 <= 127) {
      totalLength += 1 + length1;
    } else if (length1 <= (256 * 256 - 1)) {
      totalLength += 3 + length1;
    } else if (length1 <= (256 * 256 * 256 - 1)) {
      totalLength += 3 + length1;
    }
    uint32_t length2 = 0;
    unsigned char *data2 = relLabel_.Serialize(&length2);
    if (length2 <= 127) {
      totalLength += 1 + length2;
    } else if (length2 <= (256 * 256 - 1)) {
      totalLength += 3 + length2;
    } else if (length2 <= (256 * 256 * 256 - 1)) {
      totalLength += 3 + length2;
    }
    uint32_t length3 = 0;
    unsigned char *data3 = label_.Serialize(&length3);
    if (length3 <= 127) {
      totalLength += 1 + length3;
    } else if (length3 <= (256 * 256 - 1)) {
      totalLength += 3 + length3;
    } else if (length3 <= (256 * 256 * 256 - 1)) {
      totalLength += 3 + length3;
    }
    uint32_t length4 = 0;
    unsigned char *data4 = content_.Serialize(&length4);
    if (length4 <= 127) {
      totalLength += 1 + length4;
    } else if (length4 <= (256 * 256 - 1)) {
      totalLength += 3 + length4;
    } else if (length4 <= (256 * 256 * 256 - 1)) {
      totalLength += 3 + length4;
    }
    unsigned char *data = new unsigned char[totalLength];
    uint32_t c = 0;
    if (length0 <= 127) {
      data[c] = length0;
      c += 1;
    } else if (length0 <= (256 * 256 - 1)) {
      data[c] = 0x82;
      data[c + 1] = length0 / 256;
      data[c + 2] = length0 % 256;
      c += 3;
    } else if (length0 <= (256 * 256 * 256 - 1)) {
      data[c] = 0x83;
      data[c + 1] = length0 / (256 * 256);
      data[c + 2] = (length0 - data[c + 1] * (256 * 256)) / 256;
      data[c + 3] = length0 % (256 * 256);
      c += 4;
    }
    for (uint32_t i = 0; i < length0; i++) {
      data[c++] = data0[i];
    }
    if (length1 <= 127) {
      data[c] = length1;
      c += 1;
    } else if (length1 <= (256 * 256 - 1)) {
      data[c] = 0x82;
      data[c + 1] = length1 / 256;
      data[c + 2] = length1 % 256;
      c += 3;
    } else if (length1 <= (256 * 256 * 256 - 1)) {
      data[c] = 0x83;
      data[c + 1] = length1 / (256 * 256);
      data[c + 2] = (length1 - data[c + 1] * (256 * 256)) / 256;
      data[c + 3] = length1 % (256 * 256);
      c += 4;
    }
    for (uint32_t i = 0; i < length1; i++) {
      data[c++] = data1[i];
    }
    if (length2 <= 127) {
      data[c] = length2;
      c += 1;
    } else if (length2 <= (256 * 256 - 1)) {
      data[c] = 0x82;
      data[c + 1] = length2 / 256;
      data[c + 2] = length2 % 256;
      c += 3;
    } else if (length2 <= (256 * 256 * 256 - 1)) {
      data[c] = 0x83;
      data[c + 1] = length2 / (256 * 256);
      data[c + 2] = (length2 - data[c + 1] * (256 * 256)) / 256;
      data[c + 3] = length2 % (256 * 256);
      c += 4;
    }
    for (uint32_t i = 0; i < length2; i++) {
      data[c++] = data2[i];
    }
    if (length3 <= 127) {
      data[c] = length3;
      c += 1;
    } else if (length3 <= (256 * 256 - 1)) {
      data[c] = 0x82;
      data[c + 1] = length3 / 256;
      data[c + 2] = length3 % 256;
      c += 3;
    } else if (length3 <= (256 * 256 * 256 - 1)) {
      data[c] = 0x83;
      data[c + 1] = length3 / (256 * 256);
      data[c + 2] = (length3 - data[c + 1] * (256 * 256)) / 256;
      data[c + 3] = length3 % (256 * 256);
      c += 4;
    }
    for (uint32_t i = 0; i < length3; i++) {
      data[c++] = data3[i];
    }
    if (length4 <= 127) {
      data[c] = length4;
      c += 1;
    } else if (length4 <= (256 * 256 - 1)) {
      data[c] = 0x82;
      data[c + 1] = length4 / 256;
      data[c + 2] = length4 % 256;
      c += 3;
    } else if (length4 <= (256 * 256 * 256 - 1)) {
      data[c] = 0x83;
      data[c + 1] = length4 / (256 * 256);
      data[c + 2] = (length4 - data[c + 1] * (256 * 256)) / 256;
      data[c + 3] = length4 % (256 * 256);
      c += 4;
    }
    for (uint32_t i = 0; i < length4; i++) {
      data[c++] = data4[i];
    }
    if (c != totalLength) {
      std::cout << "Struct Serialization: Inconsistency in length of serialized byte array." << std::endl;
      exit(1);
    };
    if (length_ptr) {
      *length_ptr = totalLength;
    }
    return data;
  }
  void
  Message::Deserialize(unsigned char *data, uint32_t length) {
    uint32_t c = 0, elength = 0;
    if ((data[c] & 0x80) == 0) {
      elength = data[c];
      c++;
    } else {
      uint8_t ll = data[c] & 0x0f;
      if (ll == 2) {
        elength == data[c] * 256 + data[c + 1];
        c += 2;
      } else if (ll == 3) {
        elength == data[c] * 256 * 256 + data[c + 1] * 256 + data[c + 2];
        c += 3;
      }
    }
    id_.Deserialize(data + c, elength);
    c += elength;
    if ((data[c] & 0x80) == 0) {
      elength = data[c];
      c++;
    } else {
      uint8_t ll = data[c] & 0x0f;
      if (ll == 2) {
        elength == data[c] * 256 + data[c + 1];
        c += 2;
      } else if (ll == 3) {
        elength == data[c] * 256 * 256 + data[c + 1] * 256 + data[c + 2];
        c += 3;
      }
    }
    relId_.Deserialize(data + c, elength);
    c += elength;
    if ((data[c] & 0x80) == 0) {
      elength = data[c];
      c++;
    } else {
      uint8_t ll = data[c] & 0x0f;
      if (ll == 2) {
        elength == data[c] * 256 + data[c + 1];
        c += 2;
      } else if (ll == 3) {
        elength == data[c] * 256 * 256 + data[c + 1] * 256 + data[c + 2];
        c += 3;
      }
    }
    relLabel_.Deserialize(data + c, elength);
    c += elength;
    if ((data[c] & 0x80) == 0) {
      elength = data[c];
      c++;
    } else {
      uint8_t ll = data[c] & 0x0f;
      if (ll == 2) {
        elength == data[c] * 256 + data[c + 1];
        c += 2;
      } else if (ll == 3) {
        elength == data[c] * 256 * 256 + data[c + 1] * 256 + data[c + 2];
        c += 3;
      }
    }
    label_.Deserialize(data + c, elength);
    c += elength;
    if ((data[c] & 0x80) == 0) {
      elength = data[c];
      c++;
    } else {
      uint8_t ll = data[c] & 0x0f;
      if (ll == 2) {
        elength == data[c] * 256 + data[c + 1];
        c += 2;
      } else if (ll == 3) {
        elength == data[c] * 256 * 256 + data[c + 1] * 256 + data[c + 2];
        c += 3;
      }
    }
    content_.Deserialize(data + c, elength);
    c += elength;
    if (c != length) {
      std::cout << "Struct Deserialization: Inconsistency in length of deserialized byte array." << std::endl;
      exit(1);
    };
  }
} // END OF NAMESPACE gate
} // END OF NAMESPACE ntnaeem
} // END OF NAMESPACE ir