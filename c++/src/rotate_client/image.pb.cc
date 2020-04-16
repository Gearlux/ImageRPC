// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: image.proto

#include "image.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

class imageDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<image> _instance;
} _image_default_instance_;
static void InitDefaultsimage_image_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_image_default_instance_;
    new (ptr) ::image();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::image::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_image_image_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsimage_image_2eproto}, {}};

void InitDefaults_image_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_image_image_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_image_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_image_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_image_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_image_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::image, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::image, png_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::image)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_image_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_image_2eproto = {
  {}, AddDescriptors_image_2eproto, "image.proto", schemas,
  file_default_instances, TableStruct_image_2eproto::offsets,
  file_level_metadata_image_2eproto, 1, file_level_enum_descriptors_image_2eproto, file_level_service_descriptors_image_2eproto,
};

const char descriptor_table_protodef_image_2eproto[] =
  "\n\013image.proto\"\024\n\005image\022\013\n\003png\030\001 \001(\0142#\n\006R"
  "otate\022\031\n\005rot90\022\006.image\032\006.image\"\000b\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_image_2eproto = {
  false, InitDefaults_image_2eproto, 
  descriptor_table_protodef_image_2eproto,
  "image.proto", &assign_descriptors_table_image_2eproto, 80,
};

void AddDescriptors_image_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_image_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_image_2eproto = []() { AddDescriptors_image_2eproto(); return true; }();

// ===================================================================

void image::InitAsDefaultInstance() {
}
class image::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int image::kPngFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

image::image()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:image)
}
image::image(const image& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  png_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.png().size() > 0) {
    png_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.png_);
  }
  // @@protoc_insertion_point(copy_constructor:image)
}

void image::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_image_image_2eproto.base);
  png_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

image::~image() {
  // @@protoc_insertion_point(destructor:image)
  SharedDtor();
}

void image::SharedDtor() {
  png_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void image::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const image& image::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_image_image_2eproto.base);
  return *internal_default_instance();
}


void image::Clear() {
// @@protoc_insertion_point(message_clear_start:image)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  png_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* image::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<image*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // bytes png = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        object = msg->mutable_png();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParser;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheck(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool image::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:image)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bytes png = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_png()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:image)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:image)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void image::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:image)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes png = 1;
  if (this->png().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->png(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:image)
}

::google::protobuf::uint8* image::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:image)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes png = 1;
  if (this->png().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->png(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:image)
  return target;
}

size_t image::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:image)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes png = 1;
  if (this->png().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->png());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void image::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:image)
  GOOGLE_DCHECK_NE(&from, this);
  const image* source =
      ::google::protobuf::DynamicCastToGenerated<image>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:image)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:image)
    MergeFrom(*source);
  }
}

void image::MergeFrom(const image& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:image)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.png().size() > 0) {

    png_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.png_);
  }
}

void image::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:image)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void image::CopyFrom(const image& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:image)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool image::IsInitialized() const {
  return true;
}

void image::Swap(image* other) {
  if (other == this) return;
  InternalSwap(other);
}
void image::InternalSwap(image* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  png_.Swap(&other->png_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::google::protobuf::Metadata image::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_image_2eproto);
  return ::file_level_metadata_image_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::image* Arena::CreateMaybeMessage< ::image >(Arena* arena) {
  return Arena::CreateInternal< ::image >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>