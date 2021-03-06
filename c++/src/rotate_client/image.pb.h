// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: image.proto

#ifndef PROTOBUF_INCLUDED_image_2eproto
#define PROTOBUF_INCLUDED_image_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_image_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_image_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_image_2eproto();
class image;
class imageDefaultTypeInternal;
extern imageDefaultTypeInternal _image_default_instance_;
namespace google {
namespace protobuf {
template<> ::image* Arena::CreateMaybeMessage<::image>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class image final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:image) */ {
 public:
  image();
  virtual ~image();

  image(const image& from);

  inline image& operator=(const image& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  image(image&& from) noexcept
    : image() {
    *this = ::std::move(from);
  }

  inline image& operator=(image&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const image& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const image* internal_default_instance() {
    return reinterpret_cast<const image*>(
               &_image_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(image* other);
  friend void swap(image& a, image& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline image* New() const final {
    return CreateMaybeMessage<image>(nullptr);
  }

  image* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<image>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const image& from);
  void MergeFrom(const image& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(image* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes png = 1;
  void clear_png();
  static const int kPngFieldNumber = 1;
  const ::std::string& png() const;
  void set_png(const ::std::string& value);
  #if LANG_CXX11
  void set_png(::std::string&& value);
  #endif
  void set_png(const char* value);
  void set_png(const void* value, size_t size);
  ::std::string* mutable_png();
  ::std::string* release_png();
  void set_allocated_png(::std::string* png);

  // @@protoc_insertion_point(class_scope:image)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr png_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_image_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// image

// bytes png = 1;
inline void image::clear_png() {
  png_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& image::png() const {
  // @@protoc_insertion_point(field_get:image.png)
  return png_.GetNoArena();
}
inline void image::set_png(const ::std::string& value) {
  
  png_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:image.png)
}
#if LANG_CXX11
inline void image::set_png(::std::string&& value) {
  
  png_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:image.png)
}
#endif
inline void image::set_png(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  png_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:image.png)
}
inline void image::set_png(const void* value, size_t size) {
  
  png_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:image.png)
}
inline ::std::string* image::mutable_png() {
  
  // @@protoc_insertion_point(field_mutable:image.png)
  return png_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* image::release_png() {
  // @@protoc_insertion_point(field_release:image.png)
  
  return png_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void image::set_allocated_png(::std::string* png) {
  if (png != nullptr) {
    
  } else {
    
  }
  png_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), png);
  // @@protoc_insertion_point(field_set_allocated:image.png)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_image_2eproto
