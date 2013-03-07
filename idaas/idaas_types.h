/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef idaas_TYPES_H
#define idaas_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace idaas {

typedef struct _ida_enum_const__isset {
  _ida_enum_const__isset() : id(true), name(false), value(false), serial(false), mask(true) {}
  bool id;
  bool name;
  bool value;
  bool serial;
  bool mask;
} _ida_enum_const__isset;

class ida_enum_const {
 public:

  static const char* ascii_fingerprint; // = "9EE5A5E70DAA20144C7D83B8D2568FFF";
  static const uint8_t binary_fingerprint[16]; // = {0x9E,0xE5,0xA5,0xE7,0x0D,0xAA,0x20,0x14,0x4C,0x7D,0x83,0xB8,0xD2,0x56,0x8F,0xFF};

  ida_enum_const() : id(-1), name(), value(0), serial(0), mask(-1) {
  }

  virtual ~ida_enum_const() throw() {}

  int32_t id;
  std::string name;
  int32_t value;
  int8_t serial;
  int32_t mask;

  _ida_enum_const__isset __isset;

  void __set_id(const int32_t val) {
    id = val;
  }

  void __set_name(const std::string& val) {
    name = val;
  }

  void __set_value(const int32_t val) {
    value = val;
  }

  void __set_serial(const int8_t val) {
    serial = val;
  }

  void __set_mask(const int32_t val) {
    mask = val;
  }

  bool operator == (const ida_enum_const & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(name == rhs.name))
      return false;
    if (!(value == rhs.value))
      return false;
    if (!(serial == rhs.serial))
      return false;
    if (!(mask == rhs.mask))
      return false;
    return true;
  }
  bool operator != (const ida_enum_const &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ida_enum_const & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(ida_enum_const &a, ida_enum_const &b);

typedef struct _ida_enum__isset {
  _ida_enum__isset() : id(true), name(false), isBitfield(false), constants(false) {}
  bool id;
  bool name;
  bool isBitfield;
  bool constants;
} _ida_enum__isset;

class ida_enum {
 public:

  static const char* ascii_fingerprint; // = "BD5486D740F03067C1D7FE53AE3F6204";
  static const uint8_t binary_fingerprint[16]; // = {0xBD,0x54,0x86,0xD7,0x40,0xF0,0x30,0x67,0xC1,0xD7,0xFE,0x53,0xAE,0x3F,0x62,0x04};

  ida_enum() : id(-1), name(), isBitfield(0) {
  }

  virtual ~ida_enum() throw() {}

  int32_t id;
  std::string name;
  bool isBitfield;
  std::vector<ida_enum_const>  constants;

  _ida_enum__isset __isset;

  void __set_id(const int32_t val) {
    id = val;
  }

  void __set_name(const std::string& val) {
    name = val;
  }

  void __set_isBitfield(const bool val) {
    isBitfield = val;
  }

  void __set_constants(const std::vector<ida_enum_const> & val) {
    constants = val;
  }

  bool operator == (const ida_enum & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(name == rhs.name))
      return false;
    if (!(isBitfield == rhs.isBitfield))
      return false;
    if (!(constants == rhs.constants))
      return false;
    return true;
  }
  bool operator != (const ida_enum &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ida_enum & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(ida_enum &a, ida_enum &b);

} // namespace

#endif
