// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: openbot_bridge/sensor_msgs/ultrasonic_radar.proto

#include "openbot_bridge/sensor_msgs/ultrasonic_radar.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_openbot_5fbridge_2fbasic_5fmsgs_2fheader_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Header_openbot_5fbridge_2fbasic_5fmsgs_2fheader_2eproto;
namespace openbot_bridge {
namespace sensor_msgs {
class UltrasonicDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Ultrasonic> _instance;
} _Ultrasonic_default_instance_;
}  // namespace sensor_msgs
}  // namespace openbot_bridge
static void InitDefaultsscc_info_Ultrasonic_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::openbot_bridge::sensor_msgs::_Ultrasonic_default_instance_;
    new (ptr) ::openbot_bridge::sensor_msgs::Ultrasonic();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Ultrasonic_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Ultrasonic_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto}, {
      &scc_info_Header_openbot_5fbridge_2fbasic_5fmsgs_2fheader_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::Ultrasonic, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::Ultrasonic, header_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::Ultrasonic, ranges_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::openbot_bridge::sensor_msgs::Ultrasonic)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::openbot_bridge::sensor_msgs::_Ultrasonic_default_instance_),
};

const char descriptor_table_protodef_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n1openbot_bridge/sensor_msgs/ultrasonic_"
  "radar.proto\022\032openbot_bridge.sensor_msgs\032"
  "&openbot_bridge/basic_msgs/header.proto\""
  "O\n\nUltrasonic\0221\n\006header\030\001 \001(\0132!.openbot_"
  "bridge.basic_msgs.Header\022\016\n\006ranges\030\002 \003(\002"
  "b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto_deps[1] = {
  &::descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fheader_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto_sccs[1] = {
  &scc_info_Ultrasonic_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto = {
  false, false, descriptor_table_protodef_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto, "openbot_bridge/sensor_msgs/ultrasonic_radar.proto", 208,
  &descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto_once, descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto_sccs, descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto::offsets,
  file_level_metadata_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto, 1, file_level_enum_descriptors_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto, file_level_service_descriptors_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto)), true);
namespace openbot_bridge {
namespace sensor_msgs {

// ===================================================================

class Ultrasonic::_Internal {
 public:
  static const ::openbot_bridge::basic_msgs::Header& header(const Ultrasonic* msg);
};

const ::openbot_bridge::basic_msgs::Header&
Ultrasonic::_Internal::header(const Ultrasonic* msg) {
  return *msg->header_;
}
void Ultrasonic::clear_header() {
  if (GetArena() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
}
Ultrasonic::Ultrasonic(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  ranges_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:openbot_bridge.sensor_msgs.Ultrasonic)
}
Ultrasonic::Ultrasonic(const Ultrasonic& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      ranges_(from.ranges_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_header()) {
    header_ = new ::openbot_bridge::basic_msgs::Header(*from.header_);
  } else {
    header_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:openbot_bridge.sensor_msgs.Ultrasonic)
}

void Ultrasonic::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Ultrasonic_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto.base);
  header_ = nullptr;
}

Ultrasonic::~Ultrasonic() {
  // @@protoc_insertion_point(destructor:openbot_bridge.sensor_msgs.Ultrasonic)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Ultrasonic::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete header_;
}

void Ultrasonic::ArenaDtor(void* object) {
  Ultrasonic* _this = reinterpret_cast< Ultrasonic* >(object);
  (void)_this;
}
void Ultrasonic::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Ultrasonic::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Ultrasonic& Ultrasonic::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Ultrasonic_openbot_5fbridge_2fsensor_5fmsgs_2fultrasonic_5fradar_2eproto.base);
  return *internal_default_instance();
}


void Ultrasonic::Clear() {
// @@protoc_insertion_point(message_clear_start:openbot_bridge.sensor_msgs.Ultrasonic)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ranges_.Clear();
  if (GetArena() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Ultrasonic::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .openbot_bridge.basic_msgs.Header header = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_header(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated float ranges = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_ranges(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21) {
          _internal_add_ranges(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Ultrasonic::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:openbot_bridge.sensor_msgs.Ultrasonic)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .openbot_bridge.basic_msgs.Header header = 1;
  if (this->has_header()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::header(this), target, stream);
  }

  // repeated float ranges = 2;
  if (this->_internal_ranges_size() > 0) {
    target = stream->WriteFixedPacked(2, _internal_ranges(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:openbot_bridge.sensor_msgs.Ultrasonic)
  return target;
}

size_t Ultrasonic::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:openbot_bridge.sensor_msgs.Ultrasonic)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated float ranges = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_ranges_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _ranges_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // .openbot_bridge.basic_msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *header_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Ultrasonic::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:openbot_bridge.sensor_msgs.Ultrasonic)
  GOOGLE_DCHECK_NE(&from, this);
  const Ultrasonic* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Ultrasonic>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:openbot_bridge.sensor_msgs.Ultrasonic)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:openbot_bridge.sensor_msgs.Ultrasonic)
    MergeFrom(*source);
  }
}

void Ultrasonic::MergeFrom(const Ultrasonic& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:openbot_bridge.sensor_msgs.Ultrasonic)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  ranges_.MergeFrom(from.ranges_);
  if (from.has_header()) {
    _internal_mutable_header()->::openbot_bridge::basic_msgs::Header::MergeFrom(from._internal_header());
  }
}

void Ultrasonic::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:openbot_bridge.sensor_msgs.Ultrasonic)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Ultrasonic::CopyFrom(const Ultrasonic& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:openbot_bridge.sensor_msgs.Ultrasonic)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Ultrasonic::IsInitialized() const {
  return true;
}

void Ultrasonic::InternalSwap(Ultrasonic* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ranges_.InternalSwap(&other->ranges_);
  swap(header_, other->header_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Ultrasonic::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace sensor_msgs
}  // namespace openbot_bridge
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::openbot_bridge::sensor_msgs::Ultrasonic* Arena::CreateMaybeMessage< ::openbot_bridge::sensor_msgs::Ultrasonic >(Arena* arena) {
  return Arena::CreateMessageInternal< ::openbot_bridge::sensor_msgs::Ultrasonic >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
