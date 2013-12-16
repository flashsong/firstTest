// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AvatarAsset.proto

#ifndef PROTOBUF_AvatarAsset_2eproto__INCLUDED
#define PROTOBUF_AvatarAsset_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_AvatarAsset_2eproto();
void protobuf_AssignDesc_AvatarAsset_2eproto();
void protobuf_ShutdownFile_AvatarAsset_2eproto();

class AvatarAssetTable;
class AvatarAsset;

// ===================================================================

class AvatarAssetTable : public ::google::protobuf::Message {
 public:
  AvatarAssetTable();
  virtual ~AvatarAssetTable();

  AvatarAssetTable(const AvatarAssetTable& from);

  inline AvatarAssetTable& operator=(const AvatarAssetTable& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AvatarAssetTable& default_instance();

  void Swap(AvatarAssetTable* other);

  // implements Message ----------------------------------------------

  AvatarAssetTable* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AvatarAssetTable& from);
  void MergeFrom(const AvatarAssetTable& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string tname = 1;
  inline bool has_tname() const;
  inline void clear_tname();
  static const int kTnameFieldNumber = 1;
  inline const ::std::string& tname() const;
  inline void set_tname(const ::std::string& value);
  inline void set_tname(const char* value);
  inline void set_tname(const char* value, size_t size);
  inline ::std::string* mutable_tname();
  inline ::std::string* release_tname();
  inline void set_allocated_tname(::std::string* tname);

  // repeated .AvatarAsset tlist = 2;
  inline int tlist_size() const;
  inline void clear_tlist();
  static const int kTlistFieldNumber = 2;
  inline const ::AvatarAsset& tlist(int index) const;
  inline ::AvatarAsset* mutable_tlist(int index);
  inline ::AvatarAsset* add_tlist();
  inline const ::google::protobuf::RepeatedPtrField< ::AvatarAsset >&
      tlist() const;
  inline ::google::protobuf::RepeatedPtrField< ::AvatarAsset >*
      mutable_tlist();

  // @@protoc_insertion_point(class_scope:AvatarAssetTable)
 private:
  inline void set_has_tname();
  inline void clear_has_tname();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* tname_;
  ::google::protobuf::RepeatedPtrField< ::AvatarAsset > tlist_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_AvatarAsset_2eproto();
  friend void protobuf_AssignDesc_AvatarAsset_2eproto();
  friend void protobuf_ShutdownFile_AvatarAsset_2eproto();

  void InitAsDefaultInstance();
  static AvatarAssetTable* default_instance_;
};
// -------------------------------------------------------------------

class AvatarAsset : public ::google::protobuf::Message {
 public:
  AvatarAsset();
  virtual ~AvatarAsset();

  AvatarAsset(const AvatarAsset& from);

  inline AvatarAsset& operator=(const AvatarAsset& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AvatarAsset& default_instance();

  void Swap(AvatarAsset* other);

  // implements Message ----------------------------------------------

  AvatarAsset* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AvatarAsset& from);
  void MergeFrom(const AvatarAsset& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional string aname = 2;
  inline bool has_aname() const;
  inline void clear_aname();
  static const int kAnameFieldNumber = 2;
  inline const ::std::string& aname() const;
  inline void set_aname(const ::std::string& value);
  inline void set_aname(const char* value);
  inline void set_aname(const char* value, size_t size);
  inline ::std::string* mutable_aname();
  inline ::std::string* release_aname();
  inline void set_allocated_aname(::std::string* aname);

  // optional string name = 3;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 3;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional int32 distance = 4;
  inline bool has_distance() const;
  inline void clear_distance();
  static const int kDistanceFieldNumber = 4;
  inline ::google::protobuf::int32 distance() const;
  inline void set_distance(::google::protobuf::int32 value);

  // optional int32 speed = 5;
  inline bool has_speed() const;
  inline void clear_speed();
  static const int kSpeedFieldNumber = 5;
  inline ::google::protobuf::int32 speed() const;
  inline void set_speed(::google::protobuf::int32 value);

  // optional int32 bulletx = 6;
  inline bool has_bulletx() const;
  inline void clear_bulletx();
  static const int kBulletxFieldNumber = 6;
  inline ::google::protobuf::int32 bulletx() const;
  inline void set_bulletx(::google::protobuf::int32 value);

  // optional int32 bullety = 7;
  inline bool has_bullety() const;
  inline void clear_bullety();
  static const int kBulletyFieldNumber = 7;
  inline ::google::protobuf::int32 bullety() const;
  inline void set_bullety(::google::protobuf::int32 value);

  // optional int32 bodywidth = 8;
  inline bool has_bodywidth() const;
  inline void clear_bodywidth();
  static const int kBodywidthFieldNumber = 8;
  inline ::google::protobuf::int32 bodywidth() const;
  inline void set_bodywidth(::google::protobuf::int32 value);

  // optional int32 hp = 9;
  inline bool has_hp() const;
  inline void clear_hp();
  static const int kHpFieldNumber = 9;
  inline ::google::protobuf::int32 hp() const;
  inline void set_hp(::google::protobuf::int32 value);

  // optional int32 att = 10;
  inline bool has_att() const;
  inline void clear_att();
  static const int kAttFieldNumber = 10;
  inline ::google::protobuf::int32 att() const;
  inline void set_att(::google::protobuf::int32 value);

  // optional int32 maxatt = 11;
  inline bool has_maxatt() const;
  inline void clear_maxatt();
  static const int kMaxattFieldNumber = 11;
  inline ::google::protobuf::int32 maxatt() const;
  inline void set_maxatt(::google::protobuf::int32 value);

  // optional int32 defe = 12;
  inline bool has_defe() const;
  inline void clear_defe();
  static const int kDefeFieldNumber = 12;
  inline ::google::protobuf::int32 defe() const;
  inline void set_defe(::google::protobuf::int32 value);

  // optional int32 isremote = 13;
  inline bool has_isremote() const;
  inline void clear_isremote();
  static const int kIsremoteFieldNumber = 13;
  inline ::google::protobuf::int32 isremote() const;
  inline void set_isremote(::google::protobuf::int32 value);

  // optional int32 delay = 14;
  inline bool has_delay() const;
  inline void clear_delay();
  static const int kDelayFieldNumber = 14;
  inline ::google::protobuf::int32 delay() const;
  inline void set_delay(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:AvatarAsset)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_aname();
  inline void clear_has_aname();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_distance();
  inline void clear_has_distance();
  inline void set_has_speed();
  inline void clear_has_speed();
  inline void set_has_bulletx();
  inline void clear_has_bulletx();
  inline void set_has_bullety();
  inline void clear_has_bullety();
  inline void set_has_bodywidth();
  inline void clear_has_bodywidth();
  inline void set_has_hp();
  inline void clear_has_hp();
  inline void set_has_att();
  inline void clear_has_att();
  inline void set_has_maxatt();
  inline void clear_has_maxatt();
  inline void set_has_defe();
  inline void clear_has_defe();
  inline void set_has_isremote();
  inline void clear_has_isremote();
  inline void set_has_delay();
  inline void clear_has_delay();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* aname_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 distance_;
  ::std::string* name_;
  ::google::protobuf::int32 speed_;
  ::google::protobuf::int32 bulletx_;
  ::google::protobuf::int32 bullety_;
  ::google::protobuf::int32 bodywidth_;
  ::google::protobuf::int32 hp_;
  ::google::protobuf::int32 att_;
  ::google::protobuf::int32 maxatt_;
  ::google::protobuf::int32 defe_;
  ::google::protobuf::int32 isremote_;
  ::google::protobuf::int32 delay_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(14 + 31) / 32];

  friend void  protobuf_AddDesc_AvatarAsset_2eproto();
  friend void protobuf_AssignDesc_AvatarAsset_2eproto();
  friend void protobuf_ShutdownFile_AvatarAsset_2eproto();

  void InitAsDefaultInstance();
  static AvatarAsset* default_instance_;
};
// ===================================================================


// ===================================================================

// AvatarAssetTable

// optional string tname = 1;
inline bool AvatarAssetTable::has_tname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AvatarAssetTable::set_has_tname() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AvatarAssetTable::clear_has_tname() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AvatarAssetTable::clear_tname() {
  if (tname_ != &::google::protobuf::internal::kEmptyString) {
    tname_->clear();
  }
  clear_has_tname();
}
inline const ::std::string& AvatarAssetTable::tname() const {
  return *tname_;
}
inline void AvatarAssetTable::set_tname(const ::std::string& value) {
  set_has_tname();
  if (tname_ == &::google::protobuf::internal::kEmptyString) {
    tname_ = new ::std::string;
  }
  tname_->assign(value);
}
inline void AvatarAssetTable::set_tname(const char* value) {
  set_has_tname();
  if (tname_ == &::google::protobuf::internal::kEmptyString) {
    tname_ = new ::std::string;
  }
  tname_->assign(value);
}
inline void AvatarAssetTable::set_tname(const char* value, size_t size) {
  set_has_tname();
  if (tname_ == &::google::protobuf::internal::kEmptyString) {
    tname_ = new ::std::string;
  }
  tname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* AvatarAssetTable::mutable_tname() {
  set_has_tname();
  if (tname_ == &::google::protobuf::internal::kEmptyString) {
    tname_ = new ::std::string;
  }
  return tname_;
}
inline ::std::string* AvatarAssetTable::release_tname() {
  clear_has_tname();
  if (tname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = tname_;
    tname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void AvatarAssetTable::set_allocated_tname(::std::string* tname) {
  if (tname_ != &::google::protobuf::internal::kEmptyString) {
    delete tname_;
  }
  if (tname) {
    set_has_tname();
    tname_ = tname;
  } else {
    clear_has_tname();
    tname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated .AvatarAsset tlist = 2;
inline int AvatarAssetTable::tlist_size() const {
  return tlist_.size();
}
inline void AvatarAssetTable::clear_tlist() {
  tlist_.Clear();
}
inline const ::AvatarAsset& AvatarAssetTable::tlist(int index) const {
  return tlist_.Get(index);
}
inline ::AvatarAsset* AvatarAssetTable::mutable_tlist(int index) {
  return tlist_.Mutable(index);
}
inline ::AvatarAsset* AvatarAssetTable::add_tlist() {
  return tlist_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::AvatarAsset >&
AvatarAssetTable::tlist() const {
  return tlist_;
}
inline ::google::protobuf::RepeatedPtrField< ::AvatarAsset >*
AvatarAssetTable::mutable_tlist() {
  return &tlist_;
}

// -------------------------------------------------------------------

// AvatarAsset

// optional int32 id = 1;
inline bool AvatarAsset::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AvatarAsset::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AvatarAsset::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AvatarAsset::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 AvatarAsset::id() const {
  return id_;
}
inline void AvatarAsset::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional string aname = 2;
inline bool AvatarAsset::has_aname() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AvatarAsset::set_has_aname() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AvatarAsset::clear_has_aname() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AvatarAsset::clear_aname() {
  if (aname_ != &::google::protobuf::internal::kEmptyString) {
    aname_->clear();
  }
  clear_has_aname();
}
inline const ::std::string& AvatarAsset::aname() const {
  return *aname_;
}
inline void AvatarAsset::set_aname(const ::std::string& value) {
  set_has_aname();
  if (aname_ == &::google::protobuf::internal::kEmptyString) {
    aname_ = new ::std::string;
  }
  aname_->assign(value);
}
inline void AvatarAsset::set_aname(const char* value) {
  set_has_aname();
  if (aname_ == &::google::protobuf::internal::kEmptyString) {
    aname_ = new ::std::string;
  }
  aname_->assign(value);
}
inline void AvatarAsset::set_aname(const char* value, size_t size) {
  set_has_aname();
  if (aname_ == &::google::protobuf::internal::kEmptyString) {
    aname_ = new ::std::string;
  }
  aname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* AvatarAsset::mutable_aname() {
  set_has_aname();
  if (aname_ == &::google::protobuf::internal::kEmptyString) {
    aname_ = new ::std::string;
  }
  return aname_;
}
inline ::std::string* AvatarAsset::release_aname() {
  clear_has_aname();
  if (aname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = aname_;
    aname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void AvatarAsset::set_allocated_aname(::std::string* aname) {
  if (aname_ != &::google::protobuf::internal::kEmptyString) {
    delete aname_;
  }
  if (aname) {
    set_has_aname();
    aname_ = aname;
  } else {
    clear_has_aname();
    aname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string name = 3;
inline bool AvatarAsset::has_name() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AvatarAsset::set_has_name() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AvatarAsset::clear_has_name() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AvatarAsset::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& AvatarAsset::name() const {
  return *name_;
}
inline void AvatarAsset::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void AvatarAsset::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void AvatarAsset::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* AvatarAsset::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* AvatarAsset::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void AvatarAsset::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 distance = 4;
inline bool AvatarAsset::has_distance() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void AvatarAsset::set_has_distance() {
  _has_bits_[0] |= 0x00000008u;
}
inline void AvatarAsset::clear_has_distance() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void AvatarAsset::clear_distance() {
  distance_ = 0;
  clear_has_distance();
}
inline ::google::protobuf::int32 AvatarAsset::distance() const {
  return distance_;
}
inline void AvatarAsset::set_distance(::google::protobuf::int32 value) {
  set_has_distance();
  distance_ = value;
}

// optional int32 speed = 5;
inline bool AvatarAsset::has_speed() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void AvatarAsset::set_has_speed() {
  _has_bits_[0] |= 0x00000010u;
}
inline void AvatarAsset::clear_has_speed() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void AvatarAsset::clear_speed() {
  speed_ = 0;
  clear_has_speed();
}
inline ::google::protobuf::int32 AvatarAsset::speed() const {
  return speed_;
}
inline void AvatarAsset::set_speed(::google::protobuf::int32 value) {
  set_has_speed();
  speed_ = value;
}

// optional int32 bulletx = 6;
inline bool AvatarAsset::has_bulletx() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void AvatarAsset::set_has_bulletx() {
  _has_bits_[0] |= 0x00000020u;
}
inline void AvatarAsset::clear_has_bulletx() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void AvatarAsset::clear_bulletx() {
  bulletx_ = 0;
  clear_has_bulletx();
}
inline ::google::protobuf::int32 AvatarAsset::bulletx() const {
  return bulletx_;
}
inline void AvatarAsset::set_bulletx(::google::protobuf::int32 value) {
  set_has_bulletx();
  bulletx_ = value;
}

// optional int32 bullety = 7;
inline bool AvatarAsset::has_bullety() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void AvatarAsset::set_has_bullety() {
  _has_bits_[0] |= 0x00000040u;
}
inline void AvatarAsset::clear_has_bullety() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void AvatarAsset::clear_bullety() {
  bullety_ = 0;
  clear_has_bullety();
}
inline ::google::protobuf::int32 AvatarAsset::bullety() const {
  return bullety_;
}
inline void AvatarAsset::set_bullety(::google::protobuf::int32 value) {
  set_has_bullety();
  bullety_ = value;
}

// optional int32 bodywidth = 8;
inline bool AvatarAsset::has_bodywidth() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void AvatarAsset::set_has_bodywidth() {
  _has_bits_[0] |= 0x00000080u;
}
inline void AvatarAsset::clear_has_bodywidth() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void AvatarAsset::clear_bodywidth() {
  bodywidth_ = 0;
  clear_has_bodywidth();
}
inline ::google::protobuf::int32 AvatarAsset::bodywidth() const {
  return bodywidth_;
}
inline void AvatarAsset::set_bodywidth(::google::protobuf::int32 value) {
  set_has_bodywidth();
  bodywidth_ = value;
}

// optional int32 hp = 9;
inline bool AvatarAsset::has_hp() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void AvatarAsset::set_has_hp() {
  _has_bits_[0] |= 0x00000100u;
}
inline void AvatarAsset::clear_has_hp() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void AvatarAsset::clear_hp() {
  hp_ = 0;
  clear_has_hp();
}
inline ::google::protobuf::int32 AvatarAsset::hp() const {
  return hp_;
}
inline void AvatarAsset::set_hp(::google::protobuf::int32 value) {
  set_has_hp();
  hp_ = value;
}

// optional int32 att = 10;
inline bool AvatarAsset::has_att() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void AvatarAsset::set_has_att() {
  _has_bits_[0] |= 0x00000200u;
}
inline void AvatarAsset::clear_has_att() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void AvatarAsset::clear_att() {
  att_ = 0;
  clear_has_att();
}
inline ::google::protobuf::int32 AvatarAsset::att() const {
  return att_;
}
inline void AvatarAsset::set_att(::google::protobuf::int32 value) {
  set_has_att();
  att_ = value;
}

// optional int32 maxatt = 11;
inline bool AvatarAsset::has_maxatt() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void AvatarAsset::set_has_maxatt() {
  _has_bits_[0] |= 0x00000400u;
}
inline void AvatarAsset::clear_has_maxatt() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void AvatarAsset::clear_maxatt() {
  maxatt_ = 0;
  clear_has_maxatt();
}
inline ::google::protobuf::int32 AvatarAsset::maxatt() const {
  return maxatt_;
}
inline void AvatarAsset::set_maxatt(::google::protobuf::int32 value) {
  set_has_maxatt();
  maxatt_ = value;
}

// optional int32 defe = 12;
inline bool AvatarAsset::has_defe() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void AvatarAsset::set_has_defe() {
  _has_bits_[0] |= 0x00000800u;
}
inline void AvatarAsset::clear_has_defe() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void AvatarAsset::clear_defe() {
  defe_ = 0;
  clear_has_defe();
}
inline ::google::protobuf::int32 AvatarAsset::defe() const {
  return defe_;
}
inline void AvatarAsset::set_defe(::google::protobuf::int32 value) {
  set_has_defe();
  defe_ = value;
}

// optional int32 isremote = 13;
inline bool AvatarAsset::has_isremote() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void AvatarAsset::set_has_isremote() {
  _has_bits_[0] |= 0x00001000u;
}
inline void AvatarAsset::clear_has_isremote() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void AvatarAsset::clear_isremote() {
  isremote_ = 0;
  clear_has_isremote();
}
inline ::google::protobuf::int32 AvatarAsset::isremote() const {
  return isremote_;
}
inline void AvatarAsset::set_isremote(::google::protobuf::int32 value) {
  set_has_isremote();
  isremote_ = value;
}

// optional int32 delay = 14;
inline bool AvatarAsset::has_delay() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void AvatarAsset::set_has_delay() {
  _has_bits_[0] |= 0x00002000u;
}
inline void AvatarAsset::clear_has_delay() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void AvatarAsset::clear_delay() {
  delay_ = 0;
  clear_has_delay();
}
inline ::google::protobuf::int32 AvatarAsset::delay() const {
  return delay_;
}
inline void AvatarAsset::set_delay(::google::protobuf::int32 value) {
  set_has_delay();
  delay_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_AvatarAsset_2eproto__INCLUDED
