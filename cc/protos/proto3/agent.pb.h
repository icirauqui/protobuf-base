// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto3/agent.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto3_2fagent_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto3_2fagent_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021009 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto3_2fagent_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto3_2fagent_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto3_2fagent_2eproto;
class Weights;
struct WeightsDefaultTypeInternal;
extern WeightsDefaultTypeInternal _Weights_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Weights* Arena::CreateMaybeMessage<::Weights>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Weights final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Weights) */ {
 public:
  inline Weights() : Weights(nullptr) {}
  ~Weights() override;
  explicit PROTOBUF_CONSTEXPR Weights(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Weights(const Weights& from);
  Weights(Weights&& from) noexcept
    : Weights() {
    *this = ::std::move(from);
  }

  inline Weights& operator=(const Weights& from) {
    CopyFrom(from);
    return *this;
  }
  inline Weights& operator=(Weights&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Weights& default_instance() {
    return *internal_default_instance();
  }
  static inline const Weights* internal_default_instance() {
    return reinterpret_cast<const Weights*>(
               &_Weights_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Weights& a, Weights& b) {
    a.Swap(&b);
  }
  inline void Swap(Weights* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Weights* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Weights* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Weights>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Weights& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Weights& from) {
    Weights::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Weights* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Weights";
  }
  protected:
  explicit Weights(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWeightFieldNumber = 3,
    kNameFieldNumber = 2,
    kIdFieldNumber = 1,
  };
  // repeated float weight = 3;
  int weight_size() const;
  private:
  int _internal_weight_size() const;
  public:
  void clear_weight();
  private:
  float _internal_weight(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      _internal_weight() const;
  void _internal_add_weight(float value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      _internal_mutable_weight();
  public:
  float weight(int index) const;
  void set_weight(int index, float value);
  void add_weight(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      weight() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_weight();

  // string name = 2;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // int32 id = 1;
  void clear_id();
  int32_t id() const;
  void set_id(int32_t value);
  private:
  int32_t _internal_id() const;
  void _internal_set_id(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:Weights)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > weight_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    int32_t id_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_proto3_2fagent_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Weights

// int32 id = 1;
inline void Weights::clear_id() {
  _impl_.id_ = 0;
}
inline int32_t Weights::_internal_id() const {
  return _impl_.id_;
}
inline int32_t Weights::id() const {
  // @@protoc_insertion_point(field_get:Weights.id)
  return _internal_id();
}
inline void Weights::_internal_set_id(int32_t value) {
  
  _impl_.id_ = value;
}
inline void Weights::set_id(int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:Weights.id)
}

// string name = 2;
inline void Weights::clear_name() {
  _impl_.name_.ClearToEmpty();
}
inline const std::string& Weights::name() const {
  // @@protoc_insertion_point(field_get:Weights.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Weights::set_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Weights.name)
}
inline std::string* Weights::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:Weights.name)
  return _s;
}
inline const std::string& Weights::_internal_name() const {
  return _impl_.name_.Get();
}
inline void Weights::_internal_set_name(const std::string& value) {
  
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* Weights::_internal_mutable_name() {
  
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* Weights::release_name() {
  // @@protoc_insertion_point(field_release:Weights.name)
  return _impl_.name_.Release();
}
inline void Weights::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Weights.name)
}

// repeated float weight = 3;
inline int Weights::_internal_weight_size() const {
  return _impl_.weight_.size();
}
inline int Weights::weight_size() const {
  return _internal_weight_size();
}
inline void Weights::clear_weight() {
  _impl_.weight_.Clear();
}
inline float Weights::_internal_weight(int index) const {
  return _impl_.weight_.Get(index);
}
inline float Weights::weight(int index) const {
  // @@protoc_insertion_point(field_get:Weights.weight)
  return _internal_weight(index);
}
inline void Weights::set_weight(int index, float value) {
  _impl_.weight_.Set(index, value);
  // @@protoc_insertion_point(field_set:Weights.weight)
}
inline void Weights::_internal_add_weight(float value) {
  _impl_.weight_.Add(value);
}
inline void Weights::add_weight(float value) {
  _internal_add_weight(value);
  // @@protoc_insertion_point(field_add:Weights.weight)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
Weights::_internal_weight() const {
  return _impl_.weight_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
Weights::weight() const {
  // @@protoc_insertion_point(field_list:Weights.weight)
  return _internal_weight();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
Weights::_internal_mutable_weight() {
  return &_impl_.weight_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
Weights::mutable_weight() {
  // @@protoc_insertion_point(field_mutable_list:Weights.weight)
  return _internal_mutable_weight();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto3_2fagent_2eproto