/******************************************************************
 * Generated by Hottentot CC Generator
 * Date: 22-01-2016 02:51:52
 * Name: service_proxy_builder.cc
 * Description:
 *   This file contains implementation of the proxy builder class.
 ******************************************************************/

#include "service_proxy_builder.h"
#include "service_proxy.h"



namespace proxy {
  Service*
  ServiceProxyBuilder::Create(std::string host, uint32_t port) {
    return new ServiceProxy(host, port);
  }
  void
  ServiceProxyBuilder::Destroy(Service *service) {
    delete service;
  }
} // END OF NAMESPACE proxy
