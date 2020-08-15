
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_keyvalue_Storage_get_keys_return_HXX_
#define INCLUDE_vnx_keyvalue_Storage_get_keys_return_HXX_

#include <vnx/keyvalue/package.hxx>
#include <vnx/Value.h>
#include <vnx/Variant.hpp>


namespace vnx {
namespace keyvalue {

class Storage_get_keys_return : public ::vnx::Value {
public:
	
	std::vector<std::pair<uint64_t, ::vnx::Variant>> _ret_0;
	
	typedef ::vnx::Value Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	vnx::Hash64 get_type_hash() const override;
	const char* get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<Storage_get_keys_return> create();
	std::shared_ptr<vnx::Value> clone() const;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code);
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	void accept(vnx::Visitor& _visitor) const;
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	vnx::Variant get_field(const std::string& name) const;
	void set_field(const std::string& name, const vnx::Variant& value);
	
	friend std::ostream& operator<<(std::ostream& _out, const Storage_get_keys_return& _value);
	friend std::istream& operator>>(std::istream& _in, Storage_get_keys_return& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};


} // namespace vnx
} // namespace keyvalue

#endif // INCLUDE_vnx_keyvalue_Storage_get_keys_return_HXX_
