/******************************************************************
 * Generated by Hottentot CC Generator
 * Date: 22-01-2016 02:51:52
 * Name: service_impl.h
 * Description:
 *   This file contains definitions of sample stub.
 ******************************************************************/
 
#ifndef ___SERVICE_IMPL_H_
#define ___SERVICE_IMPL_H_

#include <stdint.h>
#include <string>

#include "../service/abstract_service.h"



  class ServiceImpl : public ::::service::AbstractService {
  public:
    ServiceImpl() {}
    virtual ~ServiceImpl() {}
  public:
    virtual void OnInit();
    virtual void OnShutdown();
    virtual void (:::: &out);
  };


#endif