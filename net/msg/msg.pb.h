// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg.proto

#ifndef PROTOBUF_msg_2eproto__INCLUDED
#define PROTOBUF_msg_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace thefox {
namespace msg {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_msg_2eproto();
void protobuf_AssignDesc_msg_2eproto();
void protobuf_ShutdownFile_msg_2eproto();

class Box;
class Placeholder;
class HeartBeath;

enum Box_Action {
  Box_Action_kCall = 1,
  Box_Action_kReply = 2
};
bool Box_Action_IsValid(int value);
const Box_Action Box_Action_Action_MIN = Box_Action_kCall;
const Box_Action Box_Action_Action_MAX = Box_Action_kReply;
const int Box_Action_Action_ARRAYSIZE = Box_Action_Action_MAX + 1;

const ::google::protobuf::EnumDescriptor* Box_Action_descriptor();
inline const ::std::string& Box_Action_Name(Box_Action value) {
  return ::google::protobuf::internal::NameOfEnum(
    Box_Action_descriptor(), value);
}
inline bool Box_Action_Parse(
    const ::std::string& name, Box_Action* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Box_Action>(
    Box_Action_descriptor(), name, value);
}
// ===================================================================

class Box : public ::google::protobuf::Message {
 public:
  Box();
  virtual ~Box();

  Box(const Box& from);

  inline Box& operator=(const Box& from) {
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
  static const Box& default_instance();

  void Swap(Box* other);

  // implements Message ----------------------------------------------

  Box* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Box& from);
  void MergeFrom(const Box& from);
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

  typedef Box_Action Action;
  static const Action kCall = Box_Action_kCall;
  static const Action kReply = Box_Action_kReply;
  static inline bool Action_IsValid(int value) {
    return Box_Action_IsValid(value);
  }
  static const Action Action_MIN =
    Box_Action_Action_MIN;
  static const Action Action_MAX =
    Box_Action_Action_MAX;
  static const int Action_ARRAYSIZE =
    Box_Action_Action_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Action_descriptor() {
    return Box_Action_descriptor();
  }
  static inline const ::std::string& Action_Name(Action value) {
    return Box_Action_Name(value);
  }
  static inline bool Action_Parse(const ::std::string& name,
      Action* value) {
    return Box_Action_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required int32 msg_id = 1;
  inline bool has_msg_id() const;
  inline void clear_msg_id();
  static const int kMsgIdFieldNumber = 1;
  inline ::google::protobuf::int32 msg_id() const;
  inline void set_msg_id(::google::protobuf::int32 value);

  // required string msg_type = 2;
  inline bool has_msg_type() const;
  inline void clear_msg_type();
  static const int kMsgTypeFieldNumber = 2;
  inline const ::std::string& msg_type() const;
  inline void set_msg_type(const ::std::string& value);
  inline void set_msg_type(const char* value);
  inline void set_msg_type(const char* value, size_t size);
  inline ::std::string* mutable_msg_type();
  inline ::std::string* release_msg_type();
  inline void set_allocated_msg_type(::std::string* msg_type);

  // optional bytes msg_body = 3;
  inline bool has_msg_body() const;
  inline void clear_msg_body();
  static const int kMsgBodyFieldNumber = 3;
  inline const ::std::string& msg_body() const;
  inline void set_msg_body(const ::std::string& value);
  inline void set_msg_body(const char* value);
  inline void set_msg_body(const void* value, size_t size);
  inline ::std::string* mutable_msg_body();
  inline ::std::string* release_msg_body();
  inline void set_allocated_msg_body(::std::string* msg_body);

  // optional int32 src_id = 4 [default = 0];
  inline bool has_src_id() const;
  inline void clear_src_id();
  static const int kSrcIdFieldNumber = 4;
  inline ::google::protobuf::int32 src_id() const;
  inline void set_src_id(::google::protobuf::int32 value);

  // optional .thefox.msg.Box.Action action = 5 [default = kCall];
  inline bool has_action() const;
  inline void clear_action();
  static const int kActionFieldNumber = 5;
  inline ::thefox::msg::Box_Action action() const;
  inline void set_action(::thefox::msg::Box_Action value);

  // @@protoc_insertion_point(class_scope:thefox.msg.Box)
 private:
  inline void set_has_msg_id();
  inline void clear_has_msg_id();
  inline void set_has_msg_type();
  inline void clear_has_msg_type();
  inline void set_has_msg_body();
  inline void clear_has_msg_body();
  inline void set_has_src_id();
  inline void clear_has_src_id();
  inline void set_has_action();
  inline void clear_has_action();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* msg_type_;
  ::google::protobuf::int32 msg_id_;
  ::google::protobuf::int32 src_id_;
  ::std::string* msg_body_;
  int action_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_msg_2eproto();
  friend void protobuf_AssignDesc_msg_2eproto();
  friend void protobuf_ShutdownFile_msg_2eproto();

  void InitAsDefaultInstance();
  static Box* default_instance_;
};
// -------------------------------------------------------------------

class Placeholder : public ::google::protobuf::Message {
 public:
  Placeholder();
  virtual ~Placeholder();

  Placeholder(const Placeholder& from);

  inline Placeholder& operator=(const Placeholder& from) {
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
  static const Placeholder& default_instance();

  void Swap(Placeholder* other);

  // implements Message ----------------------------------------------

  Placeholder* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Placeholder& from);
  void MergeFrom(const Placeholder& from);
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

  // @@protoc_insertion_point(class_scope:thefox.msg.Placeholder)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_msg_2eproto();
  friend void protobuf_AssignDesc_msg_2eproto();
  friend void protobuf_ShutdownFile_msg_2eproto();

  void InitAsDefaultInstance();
  static Placeholder* default_instance_;
};
// -------------------------------------------------------------------

class HeartBeath : public ::google::protobuf::Message {
 public:
  HeartBeath();
  virtual ~HeartBeath();

  HeartBeath(const HeartBeath& from);

  inline HeartBeath& operator=(const HeartBeath& from) {
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
  static const HeartBeath& default_instance();

  void Swap(HeartBeath* other);

  // implements Message ----------------------------------------------

  HeartBeath* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HeartBeath& from);
  void MergeFrom(const HeartBeath& from);
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

  // @@protoc_insertion_point(class_scope:thefox.msg.HeartBeath)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_msg_2eproto();
  friend void protobuf_AssignDesc_msg_2eproto();
  friend void protobuf_ShutdownFile_msg_2eproto();

  void InitAsDefaultInstance();
  static HeartBeath* default_instance_;
};
// ===================================================================


// ===================================================================

// Box

// required int32 msg_id = 1;
inline bool Box::has_msg_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Box::set_has_msg_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Box::clear_has_msg_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Box::clear_msg_id() {
  msg_id_ = 0;
  clear_has_msg_id();
}
inline ::google::protobuf::int32 Box::msg_id() const {
  return msg_id_;
}
inline void Box::set_msg_id(::google::protobuf::int32 value) {
  set_has_msg_id();
  msg_id_ = value;
}

// required string msg_type = 2;
inline bool Box::has_msg_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Box::set_has_msg_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Box::clear_has_msg_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Box::clear_msg_type() {
  if (msg_type_ != &::google::protobuf::internal::kEmptyString) {
    msg_type_->clear();
  }
  clear_has_msg_type();
}
inline const ::std::string& Box::msg_type() const {
  return *msg_type_;
}
inline void Box::set_msg_type(const ::std::string& value) {
  set_has_msg_type();
  if (msg_type_ == &::google::protobuf::internal::kEmptyString) {
    msg_type_ = new ::std::string;
  }
  msg_type_->assign(value);
}
inline void Box::set_msg_type(const char* value) {
  set_has_msg_type();
  if (msg_type_ == &::google::protobuf::internal::kEmptyString) {
    msg_type_ = new ::std::string;
  }
  msg_type_->assign(value);
}
inline void Box::set_msg_type(const char* value, size_t size) {
  set_has_msg_type();
  if (msg_type_ == &::google::protobuf::internal::kEmptyString) {
    msg_type_ = new ::std::string;
  }
  msg_type_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Box::mutable_msg_type() {
  set_has_msg_type();
  if (msg_type_ == &::google::protobuf::internal::kEmptyString) {
    msg_type_ = new ::std::string;
  }
  return msg_type_;
}
inline ::std::string* Box::release_msg_type() {
  clear_has_msg_type();
  if (msg_type_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = msg_type_;
    msg_type_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Box::set_allocated_msg_type(::std::string* msg_type) {
  if (msg_type_ != &::google::protobuf::internal::kEmptyString) {
    delete msg_type_;
  }
  if (msg_type) {
    set_has_msg_type();
    msg_type_ = msg_type;
  } else {
    clear_has_msg_type();
    msg_type_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional bytes msg_body = 3;
inline bool Box::has_msg_body() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Box::set_has_msg_body() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Box::clear_has_msg_body() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Box::clear_msg_body() {
  if (msg_body_ != &::google::protobuf::internal::kEmptyString) {
    msg_body_->clear();
  }
  clear_has_msg_body();
}
inline const ::std::string& Box::msg_body() const {
  return *msg_body_;
}
inline void Box::set_msg_body(const ::std::string& value) {
  set_has_msg_body();
  if (msg_body_ == &::google::protobuf::internal::kEmptyString) {
    msg_body_ = new ::std::string;
  }
  msg_body_->assign(value);
}
inline void Box::set_msg_body(const char* value) {
  set_has_msg_body();
  if (msg_body_ == &::google::protobuf::internal::kEmptyString) {
    msg_body_ = new ::std::string;
  }
  msg_body_->assign(value);
}
inline void Box::set_msg_body(const void* value, size_t size) {
  set_has_msg_body();
  if (msg_body_ == &::google::protobuf::internal::kEmptyString) {
    msg_body_ = new ::std::string;
  }
  msg_body_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Box::mutable_msg_body() {
  set_has_msg_body();
  if (msg_body_ == &::google::protobuf::internal::kEmptyString) {
    msg_body_ = new ::std::string;
  }
  return msg_body_;
}
inline ::std::string* Box::release_msg_body() {
  clear_has_msg_body();
  if (msg_body_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = msg_body_;
    msg_body_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Box::set_allocated_msg_body(::std::string* msg_body) {
  if (msg_body_ != &::google::protobuf::internal::kEmptyString) {
    delete msg_body_;
  }
  if (msg_body) {
    set_has_msg_body();
    msg_body_ = msg_body;
  } else {
    clear_has_msg_body();
    msg_body_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 src_id = 4 [default = 0];
inline bool Box::has_src_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Box::set_has_src_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Box::clear_has_src_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Box::clear_src_id() {
  src_id_ = 0;
  clear_has_src_id();
}
inline ::google::protobuf::int32 Box::src_id() const {
  return src_id_;
}
inline void Box::set_src_id(::google::protobuf::int32 value) {
  set_has_src_id();
  src_id_ = value;
}

// optional .thefox.msg.Box.Action action = 5 [default = kCall];
inline bool Box::has_action() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Box::set_has_action() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Box::clear_has_action() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Box::clear_action() {
  action_ = 1;
  clear_has_action();
}
inline ::thefox::msg::Box_Action Box::action() const {
  return static_cast< ::thefox::msg::Box_Action >(action_);
}
inline void Box::set_action(::thefox::msg::Box_Action value) {
  assert(::thefox::msg::Box_Action_IsValid(value));
  set_has_action();
  action_ = value;
}

// -------------------------------------------------------------------

// Placeholder

// -------------------------------------------------------------------

// HeartBeath


// @@protoc_insertion_point(namespace_scope)

}  // namespace msg
}  // namespace thefox

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::thefox::msg::Box_Action>() {
  return ::thefox::msg::Box_Action_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_msg_2eproto__INCLUDED
