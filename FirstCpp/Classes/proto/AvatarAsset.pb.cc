// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AvatarAsset.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "AvatarAsset.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* AvatarAssetTable_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AvatarAssetTable_reflection_ = NULL;
const ::google::protobuf::Descriptor* AvatarAsset_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AvatarAsset_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_AvatarAsset_2eproto() {
  protobuf_AddDesc_AvatarAsset_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "AvatarAsset.proto");
  GOOGLE_CHECK(file != NULL);
  AvatarAssetTable_descriptor_ = file->message_type(0);
  static const int AvatarAssetTable_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AvatarAssetTable, tname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AvatarAssetTable, tlist_),
  };
  AvatarAssetTable_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      AvatarAssetTable_descriptor_,
      AvatarAssetTable::default_instance_,
      AvatarAssetTable_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AvatarAssetTable, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AvatarAssetTable, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(AvatarAssetTable));
  AvatarAsset_descriptor_ = file->message_type(1);
  static const int AvatarAsset_offsets_[14] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AvatarAsset, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AvatarAsset, aname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AvatarAsset, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AvatarAsset, distance_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AvatarAsset, speed_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AvatarAsset, bulletx_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AvatarAsset, bullety_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AvatarAsset, bodywidth_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AvatarAsset, hp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AvatarAsset, att_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AvatarAsset, maxatt_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AvatarAsset, defe_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AvatarAsset, isremote_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AvatarAsset, delay_),
  };
  AvatarAsset_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      AvatarAsset_descriptor_,
      AvatarAsset::default_instance_,
      AvatarAsset_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AvatarAsset, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AvatarAsset, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(AvatarAsset));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_AvatarAsset_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    AvatarAssetTable_descriptor_, &AvatarAssetTable::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    AvatarAsset_descriptor_, &AvatarAsset::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_AvatarAsset_2eproto() {
  delete AvatarAssetTable::default_instance_;
  delete AvatarAssetTable_reflection_;
  delete AvatarAsset::default_instance_;
  delete AvatarAsset_reflection_;
}

void protobuf_AddDesc_AvatarAsset_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021AvatarAsset.proto\">\n\020AvatarAssetTable\022"
    "\r\n\005tname\030\001 \001(\t\022\033\n\005tlist\030\002 \003(\0132\014.AvatarAs"
    "set\"\344\001\n\013AvatarAsset\022\n\n\002id\030\001 \001(\005\022\r\n\005aname"
    "\030\002 \001(\t\022\014\n\004name\030\003 \001(\t\022\020\n\010distance\030\004 \001(\005\022\r"
    "\n\005speed\030\005 \001(\005\022\017\n\007bulletx\030\006 \001(\005\022\017\n\007bullet"
    "y\030\007 \001(\005\022\021\n\tbodywidth\030\010 \001(\005\022\n\n\002hp\030\t \001(\005\022\013"
    "\n\003att\030\n \001(\005\022\016\n\006maxatt\030\013 \001(\005\022\014\n\004defe\030\014 \001("
    "\005\022\020\n\010isremote\030\r \001(\005\022\r\n\005delay\030\016 \001(\005", 314);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "AvatarAsset.proto", &protobuf_RegisterTypes);
  AvatarAssetTable::default_instance_ = new AvatarAssetTable();
  AvatarAsset::default_instance_ = new AvatarAsset();
  AvatarAssetTable::default_instance_->InitAsDefaultInstance();
  AvatarAsset::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_AvatarAsset_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_AvatarAsset_2eproto {
  StaticDescriptorInitializer_AvatarAsset_2eproto() {
    protobuf_AddDesc_AvatarAsset_2eproto();
  }
} static_descriptor_initializer_AvatarAsset_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int AvatarAssetTable::kTnameFieldNumber;
const int AvatarAssetTable::kTlistFieldNumber;
#endif  // !_MSC_VER

AvatarAssetTable::AvatarAssetTable()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void AvatarAssetTable::InitAsDefaultInstance() {
}

AvatarAssetTable::AvatarAssetTable(const AvatarAssetTable& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void AvatarAssetTable::SharedCtor() {
  _cached_size_ = 0;
  tname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AvatarAssetTable::~AvatarAssetTable() {
  SharedDtor();
}

void AvatarAssetTable::SharedDtor() {
  if (tname_ != &::google::protobuf::internal::kEmptyString) {
    delete tname_;
  }
  if (this != default_instance_) {
  }
}

void AvatarAssetTable::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AvatarAssetTable::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AvatarAssetTable_descriptor_;
}

const AvatarAssetTable& AvatarAssetTable::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_AvatarAsset_2eproto();
  return *default_instance_;
}

AvatarAssetTable* AvatarAssetTable::default_instance_ = NULL;

AvatarAssetTable* AvatarAssetTable::New() const {
  return new AvatarAssetTable;
}

void AvatarAssetTable::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_tname()) {
      if (tname_ != &::google::protobuf::internal::kEmptyString) {
        tname_->clear();
      }
    }
  }
  tlist_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AvatarAssetTable::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string tname = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_tname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->tname().data(), this->tname().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_tlist;
        break;
      }

      // repeated .AvatarAsset tlist = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_tlist:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_tlist()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_tlist;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void AvatarAssetTable::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string tname = 1;
  if (has_tname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->tname().data(), this->tname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->tname(), output);
  }

  // repeated .AvatarAsset tlist = 2;
  for (int i = 0; i < this->tlist_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->tlist(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* AvatarAssetTable::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string tname = 1;
  if (has_tname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->tname().data(), this->tname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->tname(), target);
  }

  // repeated .AvatarAsset tlist = 2;
  for (int i = 0; i < this->tlist_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->tlist(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int AvatarAssetTable::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string tname = 1;
    if (has_tname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->tname());
    }

  }
  // repeated .AvatarAsset tlist = 2;
  total_size += 1 * this->tlist_size();
  for (int i = 0; i < this->tlist_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->tlist(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AvatarAssetTable::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const AvatarAssetTable* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const AvatarAssetTable*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AvatarAssetTable::MergeFrom(const AvatarAssetTable& from) {
  GOOGLE_CHECK_NE(&from, this);
  tlist_.MergeFrom(from.tlist_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_tname()) {
      set_tname(from.tname());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AvatarAssetTable::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AvatarAssetTable::CopyFrom(const AvatarAssetTable& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AvatarAssetTable::IsInitialized() const {

  return true;
}

void AvatarAssetTable::Swap(AvatarAssetTable* other) {
  if (other != this) {
    std::swap(tname_, other->tname_);
    tlist_.Swap(&other->tlist_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata AvatarAssetTable::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AvatarAssetTable_descriptor_;
  metadata.reflection = AvatarAssetTable_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int AvatarAsset::kIdFieldNumber;
const int AvatarAsset::kAnameFieldNumber;
const int AvatarAsset::kNameFieldNumber;
const int AvatarAsset::kDistanceFieldNumber;
const int AvatarAsset::kSpeedFieldNumber;
const int AvatarAsset::kBulletxFieldNumber;
const int AvatarAsset::kBulletyFieldNumber;
const int AvatarAsset::kBodywidthFieldNumber;
const int AvatarAsset::kHpFieldNumber;
const int AvatarAsset::kAttFieldNumber;
const int AvatarAsset::kMaxattFieldNumber;
const int AvatarAsset::kDefeFieldNumber;
const int AvatarAsset::kIsremoteFieldNumber;
const int AvatarAsset::kDelayFieldNumber;
#endif  // !_MSC_VER

AvatarAsset::AvatarAsset()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void AvatarAsset::InitAsDefaultInstance() {
}

AvatarAsset::AvatarAsset(const AvatarAsset& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void AvatarAsset::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  aname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  distance_ = 0;
  speed_ = 0;
  bulletx_ = 0;
  bullety_ = 0;
  bodywidth_ = 0;
  hp_ = 0;
  att_ = 0;
  maxatt_ = 0;
  defe_ = 0;
  isremote_ = 0;
  delay_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AvatarAsset::~AvatarAsset() {
  SharedDtor();
}

void AvatarAsset::SharedDtor() {
  if (aname_ != &::google::protobuf::internal::kEmptyString) {
    delete aname_;
  }
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (this != default_instance_) {
  }
}

void AvatarAsset::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AvatarAsset::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AvatarAsset_descriptor_;
}

const AvatarAsset& AvatarAsset::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_AvatarAsset_2eproto();
  return *default_instance_;
}

AvatarAsset* AvatarAsset::default_instance_ = NULL;

AvatarAsset* AvatarAsset::New() const {
  return new AvatarAsset;
}

void AvatarAsset::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0;
    if (has_aname()) {
      if (aname_ != &::google::protobuf::internal::kEmptyString) {
        aname_->clear();
      }
    }
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
    distance_ = 0;
    speed_ = 0;
    bulletx_ = 0;
    bullety_ = 0;
    bodywidth_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    hp_ = 0;
    att_ = 0;
    maxatt_ = 0;
    defe_ = 0;
    isremote_ = 0;
    delay_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AvatarAsset::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_aname;
        break;
      }

      // optional string aname = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_aname:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_aname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->aname().data(), this->aname().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_name;
        break;
      }

      // optional string name = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_distance;
        break;
      }

      // optional int32 distance = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_distance:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &distance_)));
          set_has_distance();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_speed;
        break;
      }

      // optional int32 speed = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_speed:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &speed_)));
          set_has_speed();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_bulletx;
        break;
      }

      // optional int32 bulletx = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_bulletx:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &bulletx_)));
          set_has_bulletx();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_bullety;
        break;
      }

      // optional int32 bullety = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_bullety:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &bullety_)));
          set_has_bullety();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_bodywidth;
        break;
      }

      // optional int32 bodywidth = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_bodywidth:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &bodywidth_)));
          set_has_bodywidth();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_hp;
        break;
      }

      // optional int32 hp = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_hp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &hp_)));
          set_has_hp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_att;
        break;
      }

      // optional int32 att = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_att:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &att_)));
          set_has_att();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(88)) goto parse_maxatt;
        break;
      }

      // optional int32 maxatt = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_maxatt:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &maxatt_)));
          set_has_maxatt();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(96)) goto parse_defe;
        break;
      }

      // optional int32 defe = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_defe:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &defe_)));
          set_has_defe();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(104)) goto parse_isremote;
        break;
      }

      // optional int32 isremote = 13;
      case 13: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_isremote:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &isremote_)));
          set_has_isremote();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(112)) goto parse_delay;
        break;
      }

      // optional int32 delay = 14;
      case 14: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_delay:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &delay_)));
          set_has_delay();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void AvatarAsset::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional string aname = 2;
  if (has_aname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->aname().data(), this->aname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->aname(), output);
  }

  // optional string name = 3;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->name(), output);
  }

  // optional int32 distance = 4;
  if (has_distance()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->distance(), output);
  }

  // optional int32 speed = 5;
  if (has_speed()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->speed(), output);
  }

  // optional int32 bulletx = 6;
  if (has_bulletx()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->bulletx(), output);
  }

  // optional int32 bullety = 7;
  if (has_bullety()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->bullety(), output);
  }

  // optional int32 bodywidth = 8;
  if (has_bodywidth()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->bodywidth(), output);
  }

  // optional int32 hp = 9;
  if (has_hp()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->hp(), output);
  }

  // optional int32 att = 10;
  if (has_att()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->att(), output);
  }

  // optional int32 maxatt = 11;
  if (has_maxatt()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(11, this->maxatt(), output);
  }

  // optional int32 defe = 12;
  if (has_defe()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(12, this->defe(), output);
  }

  // optional int32 isremote = 13;
  if (has_isremote()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->isremote(), output);
  }

  // optional int32 delay = 14;
  if (has_delay()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(14, this->delay(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* AvatarAsset::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional string aname = 2;
  if (has_aname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->aname().data(), this->aname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->aname(), target);
  }

  // optional string name = 3;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->name(), target);
  }

  // optional int32 distance = 4;
  if (has_distance()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->distance(), target);
  }

  // optional int32 speed = 5;
  if (has_speed()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->speed(), target);
  }

  // optional int32 bulletx = 6;
  if (has_bulletx()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->bulletx(), target);
  }

  // optional int32 bullety = 7;
  if (has_bullety()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->bullety(), target);
  }

  // optional int32 bodywidth = 8;
  if (has_bodywidth()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->bodywidth(), target);
  }

  // optional int32 hp = 9;
  if (has_hp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->hp(), target);
  }

  // optional int32 att = 10;
  if (has_att()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->att(), target);
  }

  // optional int32 maxatt = 11;
  if (has_maxatt()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(11, this->maxatt(), target);
  }

  // optional int32 defe = 12;
  if (has_defe()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(12, this->defe(), target);
  }

  // optional int32 isremote = 13;
  if (has_isremote()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->isremote(), target);
  }

  // optional int32 delay = 14;
  if (has_delay()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(14, this->delay(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int AvatarAsset::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional string aname = 2;
    if (has_aname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->aname());
    }

    // optional string name = 3;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional int32 distance = 4;
    if (has_distance()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->distance());
    }

    // optional int32 speed = 5;
    if (has_speed()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->speed());
    }

    // optional int32 bulletx = 6;
    if (has_bulletx()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->bulletx());
    }

    // optional int32 bullety = 7;
    if (has_bullety()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->bullety());
    }

    // optional int32 bodywidth = 8;
    if (has_bodywidth()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->bodywidth());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional int32 hp = 9;
    if (has_hp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->hp());
    }

    // optional int32 att = 10;
    if (has_att()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->att());
    }

    // optional int32 maxatt = 11;
    if (has_maxatt()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->maxatt());
    }

    // optional int32 defe = 12;
    if (has_defe()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->defe());
    }

    // optional int32 isremote = 13;
    if (has_isremote()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->isremote());
    }

    // optional int32 delay = 14;
    if (has_delay()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->delay());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AvatarAsset::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const AvatarAsset* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const AvatarAsset*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AvatarAsset::MergeFrom(const AvatarAsset& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_aname()) {
      set_aname(from.aname());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_distance()) {
      set_distance(from.distance());
    }
    if (from.has_speed()) {
      set_speed(from.speed());
    }
    if (from.has_bulletx()) {
      set_bulletx(from.bulletx());
    }
    if (from.has_bullety()) {
      set_bullety(from.bullety());
    }
    if (from.has_bodywidth()) {
      set_bodywidth(from.bodywidth());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_hp()) {
      set_hp(from.hp());
    }
    if (from.has_att()) {
      set_att(from.att());
    }
    if (from.has_maxatt()) {
      set_maxatt(from.maxatt());
    }
    if (from.has_defe()) {
      set_defe(from.defe());
    }
    if (from.has_isremote()) {
      set_isremote(from.isremote());
    }
    if (from.has_delay()) {
      set_delay(from.delay());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AvatarAsset::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AvatarAsset::CopyFrom(const AvatarAsset& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AvatarAsset::IsInitialized() const {

  return true;
}

void AvatarAsset::Swap(AvatarAsset* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(aname_, other->aname_);
    std::swap(name_, other->name_);
    std::swap(distance_, other->distance_);
    std::swap(speed_, other->speed_);
    std::swap(bulletx_, other->bulletx_);
    std::swap(bullety_, other->bullety_);
    std::swap(bodywidth_, other->bodywidth_);
    std::swap(hp_, other->hp_);
    std::swap(att_, other->att_);
    std::swap(maxatt_, other->maxatt_);
    std::swap(defe_, other->defe_);
    std::swap(isremote_, other->isremote_);
    std::swap(delay_, other->delay_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata AvatarAsset::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AvatarAsset_descriptor_;
  metadata.reflection = AvatarAsset_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
