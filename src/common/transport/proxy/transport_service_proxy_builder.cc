/******************************************************************
 * Generated by Hottentot CC Generator
 * Date: 03-02-2016 03:40:24
 * Name: transport_service_proxy_builder.cc
 * Description:
 *   This file contains implementation of the proxy builder class.
 ******************************************************************/

#include "transport_service_proxy_builder.h"
#include "transport_service_proxy.h"


namespace ir {
namespace ntnaeem {
namespace gate {
namespace transport {
namespace proxy {
  TransportService*
  TransportServiceProxyBuilder::Create(std::string host, uint32_t port) {
    return new TransportServiceProxy(host, port);
  }
  void
  TransportServiceProxyBuilder::Destroy(TransportService *service) {
    delete service;
  }
} // END OF NAMESPACE proxy
} // END OF NAMESPACE transport
} // END OF NAMESPACE gate
} // END OF NAMESPACE ntnaeem
} // END OF NAMESPACE ir