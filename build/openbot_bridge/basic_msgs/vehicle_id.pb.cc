// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: openbot_bridge/basic_msgs/vehicle_id.proto

#include "openbot_bridge/basic_msgs/vehicle_id.pb.h"

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
namespace openbot_bridge {
namespace basic_msgs {
class VehicleIDDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<VehicleID> _instance;
} _VehicleID_default_instance_;
}  // namespace basic_msgs
}  // namespace openbot_bridge
static void InitDefaultsscc_info_VehicleID_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::openbot_bridge::basic_msgs::_VehicleID_default_instance_;
    new (ptr) ::openbot_bridge::basic_msgs::VehicleID();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_VehicleID_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_VehicleID_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::basic_msgs::VehicleID, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::basic_msgs::VehicleID, vin_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::basic_msgs::VehicleID, plate_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::basic_msgs::VehicleID, other_unique_id_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::openbot_bridge::basic_msgs::VehicleID)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::openbot_bridge::basic_msgs::_VehicleID_default_instance_),
};

const char descriptor_table_protodef_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n*openbot_bridge/basic_msgs/vehicle_id.p"
  "roto\022\031openbot_bridge.basic_msgs\"@\n\tVehic"
  "leID\022\013\n\003vin\030\001 \001(\t\022\r\n\005plate\030\002 \001(\t\022\027\n\017othe"
  "r_unique_id\030\003 \001(\tb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto_sccs[1] = {
  &scc_info_VehicleID_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto = {
  false, false, descriptor_table_protodef_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto, "openbot_bridge/basic_msgs/vehicle_id.proto", 145,
  &descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto_once, descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto_sccs, descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto::offsets,
  file_level_metadata_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto, 1, file_level_enum_descriptors_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto, file_level_service_descriptors_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto)), true);
namespace openbot_bridge {
namespace basic_msgs {

// ===================================================================

class VehicleID::_Internal {
 public:
};

VehicleID::VehicleID(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:openbot_bridge.basic_msgs.VehicleID)
}
VehicleID::VehicleID(const VehicleID& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  vin_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_vin().empty()) {
    vin_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_vin(), 
      GetArena());
  }
  plate_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_plate().empty()) {
    plate_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_plate(), 
      GetArena());
  }
  other_unique_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_other_unique_id().empty()) {
    other_unique_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_other_unique_id(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:openbot_bridge.basic_msgs.VehicleID)
}

void VehicleID::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_VehicleID_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto.base);
  vin_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  plate_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  other_unique_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

VehicleID::~VehicleID() {
  // @@protoc_insertion_point(destructor:openbot_bridge.basic_msgs.VehicleID)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void VehicleID::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  vin_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  plate_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  other_unique_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void VehicleID::ArenaDtor(void* object) {
  VehicleID* _this = reinterpret_cast< VehicleID* >(object);
  (void)_this;
}
void VehicleID::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void VehicleID::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const VehicleID& VehicleID::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_VehicleID_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto.base);
  return *internal_default_instance();
}


void VehicleID::Clear() {
// @@protoc_insertion_point(message_clear_start:openbot_bridge.basic_msgs.VehicleID)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  vin_.ClearToEmpty();
  plate_.ClearToEmpty();
  other_unique_id_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* VehicleID::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string vin = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_vin();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "openbot_bridge.basic_msgs.VehicleID.vin"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string plate = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_plate();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "openbot_bridge.basic_msgs.VehicleID.plate"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string other_unique_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_other_unique_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "openbot_bridge.basic_msgs.VehicleID.other_unique_id"));
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* VehicleID::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:openbot_bridge.basic_msgs.VehicleID)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string vin = 1;
  if (this->vin().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_vin().data(), static_cast<int>(this->_internal_vin().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "openbot_bridge.basic_msgs.VehicleID.vin");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_vin(), target);
  }

  // string plate = 2;
  if (this->plate().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_plate().data(), static_cast<int>(this->_internal_plate().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "openbot_bridge.basic_msgs.VehicleID.plate");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_plate(), target);
  }

  // string other_unique_id = 3;
  if (this->other_unique_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_other_unique_id().data(), static_cast<int>(this->_internal_other_unique_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "openbot_bridge.basic_msgs.VehicleID.other_unique_id");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_other_unique_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:openbot_bridge.basic_msgs.VehicleID)
  return target;
}

size_t VehicleID::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:openbot_bridge.basic_msgs.VehicleID)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string vin = 1;
  if (this->vin().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_vin());
  }

  // string plate = 2;
  if (this->plate().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_plate());
  }

  // string other_unique_id = 3;
  if (this->other_unique_id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_other_unique_id());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VehicleID::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:openbot_bridge.basic_msgs.VehicleID)
  GOOGLE_DCHECK_NE(&from, this);
  const VehicleID* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<VehicleID>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:openbot_bridge.basic_msgs.VehicleID)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:openbot_bridge.basic_msgs.VehicleID)
    MergeFrom(*source);
  }
}

void VehicleID::MergeFrom(const VehicleID& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:openbot_bridge.basic_msgs.VehicleID)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.vin().size() > 0) {
    _internal_set_vin(from._internal_vin());
  }
  if (from.plate().size() > 0) {
    _internal_set_plate(from._internal_plate());
  }
  if (from.other_unique_id().size() > 0) {
    _internal_set_other_unique_id(from._internal_other_unique_id());
  }
}

void VehicleID::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:openbot_bridge.basic_msgs.VehicleID)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VehicleID::CopyFrom(const VehicleID& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:openbot_bridge.basic_msgs.VehicleID)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VehicleID::IsInitialized() const {
  return true;
}

void VehicleID::InternalSwap(VehicleID* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  vin_.Swap(&other->vin_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  plate_.Swap(&other->plate_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  other_unique_id_.Swap(&other->other_unique_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata VehicleID::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace basic_msgs
}  // namespace openbot_bridge
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::openbot_bridge::basic_msgs::VehicleID* Arena::CreateMaybeMessage< ::openbot_bridge::basic_msgs::VehicleID >(Arena* arena) {
  return Arena::CreateMessageInternal< ::openbot_bridge::basic_msgs::VehicleID >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
