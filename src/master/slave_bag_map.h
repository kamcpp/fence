#ifndef _IR_NTNAEEM_GATE__MASTER__SLAVE_BAG_MAP_H_
#define _IR_NTNAEEM_GATE__MASTER__SLAVE_BAG_MAP_H_

#include <mutex>
#include <map>
#include <vector>


namespace ir {
namespace ntnaeem {
namespace gate {
namespace master {
  template <class M>
  class SlaveBagMap {
  public:
    SlaveBagMap() {}
    virtual ~SlaveBagMap() {}
  public:
    void
    Put(uint32_t slaveId, M *item) {
      std::lock_guard<std::mutex> guard(lock_);
      if (maps_.find(slaveId) != maps_.end()) {
        Bag<M> *bag = new Bag<M>();
        bag->Put(item);
        maps_[slaveId] = bag;
      } else {
        maps_[slaveId]->Put(item);
      }
    }
    std::vector<M*>
    PopAll(uint32_t slaveId) {
      std::lock_guard<std::mutex> guard(lock_);
      return maps_[slaveId]->PopAll();
    }
  private:
    std::mutex lock_;
    std::map<uint32_t, Bag<M>*> maps_;
  };
}
}
}
}

#endif