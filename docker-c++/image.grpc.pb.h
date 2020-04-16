// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: image.proto
#ifndef GRPC_image_2eproto__INCLUDED
#define GRPC_image_2eproto__INCLUDED

#include "image.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc_impl {
class Channel;
class CompletionQueue;
class ServerCompletionQueue;
}  // namespace grpc_impl

namespace grpc {
namespace experimental {
template <typename RequestT, typename ResponseT>
class MessageAllocator;
}  // namespace experimental
}  // namespace grpc_impl

namespace grpc {
class ServerContext;
}  // namespace grpc

// The rotate service definition.
class Rotate final {
 public:
  static constexpr char const* service_full_name() {
    return "Rotate";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Rotates an image
    virtual ::grpc::Status rot90(::grpc::ClientContext* context, const ::image& request, ::image* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::image>> Asyncrot90(::grpc::ClientContext* context, const ::image& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::image>>(Asyncrot90Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::image>> PrepareAsyncrot90(::grpc::ClientContext* context, const ::image& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::image>>(PrepareAsyncrot90Raw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      // Rotates an image
      virtual void rot90(::grpc::ClientContext* context, const ::image* request, ::image* response, std::function<void(::grpc::Status)>) = 0;
      virtual void rot90(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::image* response, std::function<void(::grpc::Status)>) = 0;
      virtual void rot90(::grpc::ClientContext* context, const ::image* request, ::image* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void rot90(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::image* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::image>* Asyncrot90Raw(::grpc::ClientContext* context, const ::image& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::image>* PrepareAsyncrot90Raw(::grpc::ClientContext* context, const ::image& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status rot90(::grpc::ClientContext* context, const ::image& request, ::image* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::image>> Asyncrot90(::grpc::ClientContext* context, const ::image& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::image>>(Asyncrot90Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::image>> PrepareAsyncrot90(::grpc::ClientContext* context, const ::image& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::image>>(PrepareAsyncrot90Raw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void rot90(::grpc::ClientContext* context, const ::image* request, ::image* response, std::function<void(::grpc::Status)>) override;
      void rot90(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::image* response, std::function<void(::grpc::Status)>) override;
      void rot90(::grpc::ClientContext* context, const ::image* request, ::image* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void rot90(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::image* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::image>* Asyncrot90Raw(::grpc::ClientContext* context, const ::image& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::image>* PrepareAsyncrot90Raw(::grpc::ClientContext* context, const ::image& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_rot90_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Rotates an image
    virtual ::grpc::Status rot90(::grpc::ServerContext* context, const ::image* request, ::image* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_rot90 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_rot90() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_rot90() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status rot90(::grpc::ServerContext* context, const ::image* request, ::image* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestrot90(::grpc::ServerContext* context, ::image* request, ::grpc::ServerAsyncResponseWriter< ::image>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_rot90<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_rot90 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_rot90() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::image, ::image>(
          [this](::grpc::ServerContext* context,
                 const ::image* request,
                 ::image* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->rot90(context, request, response, controller);
                 }));
    }
    void SetMessageAllocatorFor_rot90(
        ::grpc::experimental::MessageAllocator< ::image, ::image>* allocator) {
      static_cast<::grpc::internal::CallbackUnaryHandler< ::image, ::image>*>(
          ::grpc::Service::experimental().GetHandler(0))
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_rot90() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status rot90(::grpc::ServerContext* context, const ::image* request, ::image* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void rot90(::grpc::ServerContext* context, const ::image* request, ::image* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_rot90<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_rot90 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_rot90() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_rot90() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status rot90(::grpc::ServerContext* context, const ::image* request, ::image* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_rot90 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_rot90() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_rot90() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status rot90(::grpc::ServerContext* context, const ::image* request, ::image* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestrot90(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_rot90 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_rot90() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->rot90(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_rot90() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status rot90(::grpc::ServerContext* context, const ::image* request, ::image* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void rot90(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_rot90 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_rot90() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::image, ::image>(std::bind(&WithStreamedUnaryMethod_rot90<BaseClass>::Streamedrot90, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_rot90() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status rot90(::grpc::ServerContext* context, const ::image* request, ::image* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedrot90(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::image,::image>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_rot90<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_rot90<Service > StreamedService;
};


#endif  // GRPC_image_2eproto__INCLUDED
