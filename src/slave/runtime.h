#ifndef _ORG_LABCRYPTO__FENCE__SLAVE__RUNTIME_H_
#define _ORG_LABCRYPTO__FENCE__SLAVE__RUNTIME_H_

#include <vector>
#include <map>
#include <mutex>
#include <deque>

#include <fence/message.h>
#include <transport/transport_message.h>


namespace org {
namespace labcrypto {
namespace fence {
namespace slave {
  class Runtime {
  public:
    static void Init();
    static void Shutdown();
    static std::string GetCurrentStat();
  public:
    
    static bool initialized_;
    static bool coreInitialized_;
    static bool termSignal_;
    static bool slaveThreadTerminated_;

    static uint64_t messageIdCounter_;
    static uint64_t enqueuedTotalCounter_;
    static uint64_t readyForPopTotalCounter_;
    static uint64_t poppedAndAckedTotalCounter_;
    static uint64_t transmittedTotalCounter_;
    static uint64_t transmissionFailureTotalCounter_;
    
    static std::mutex termSignalLock_;
    static std::mutex messageIdCounterLock_;
    static std::mutex mainLock_;
    static std::mutex readyForPopLock_;
    static std::mutex enqueueLock_;
    
    static std::map<uint64_t, uint16_t> states_;
    static std::map<std::string, std::vector<uint64_t>*> inbox_;
    static std::vector<uint64_t> outbox_;
    static std::map<std::string, std::map<uint64_t, uint64_t>*> poppedButNotAcked_;
    static std::map<std::string, std::deque<uint64_t>*> readyForPop_;
  };
} // END NAMESPACE slave
} // END NAMESPACE fence
} // END NAMESPACE labcrypto
} // END NAMESPACE org

#endif
