
// AUTO GENERATED by vnxcppcodegen

#include <vnx/keyvalue/package.hxx>
#include <vnx/keyvalue/ServerInfo.hxx>
#include <vnx/Input.h>
#include <vnx/Output.h>
#include <vnx/Visitor.h>
#include <vnx/Object.h>
#include <vnx/Struct.h>


namespace vnx {
namespace keyvalue {


const vnx::Hash64 ServerInfo::VNX_TYPE_HASH(0x84f5671f9ec97c93ull);
const vnx::Hash64 ServerInfo::VNX_CODE_HASH(0x7dc3539ef28aad43ull);

vnx::Hash64 ServerInfo::get_type_hash() const {
	return VNX_TYPE_HASH;
}

const char* ServerInfo::get_type_name() const {
	return "vnx.keyvalue.ServerInfo";
}
const vnx::TypeCode* ServerInfo::get_type_code() const {
	return vnx::keyvalue::vnx_native_type_code_ServerInfo;
}

std::shared_ptr<ServerInfo> ServerInfo::create() {
	return std::make_shared<ServerInfo>();
}

std::shared_ptr<vnx::Value> ServerInfo::clone() const {
	return std::make_shared<ServerInfo>(*this);
}

void ServerInfo::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void ServerInfo::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void ServerInfo::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::keyvalue::vnx_native_type_code_ServerInfo;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, shard);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, address);
	_visitor.type_end(*_type_code);
}

void ServerInfo::write(std::ostream& _out) const {
	_out << "{\"__type\": \"vnx.keyvalue.ServerInfo\"";
	_out << ", \"shard\": "; vnx::write(_out, shard);
	_out << ", \"address\": "; vnx::write(_out, address);
	_out << "}";
}

void ServerInfo::read(std::istream& _in) {
	std::map<std::string, std::string> _object;
	vnx::read_object(_in, _object);
	for(const auto& _entry : _object) {
		if(_entry.first == "address") {
			vnx::from_string(_entry.second, address);
		} else if(_entry.first == "shard") {
			vnx::from_string(_entry.second, shard);
		}
	}
}

vnx::Object ServerInfo::to_object() const {
	vnx::Object _object;
	_object["shard"] = shard;
	_object["address"] = address;
	return _object;
}

void ServerInfo::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "address") {
			_entry.second.to(address);
		} else if(_entry.first == "shard") {
			_entry.second.to(shard);
		}
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const ServerInfo& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, ServerInfo& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* ServerInfo::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(vnx::Hash64(0x84f5671f9ec97c93ull));
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> ServerInfo::static_create_type_code() {
	std::shared_ptr<vnx::TypeCode> type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.keyvalue.ServerInfo";
	type_code->type_hash = vnx::Hash64(0x84f5671f9ec97c93ull);
	type_code->code_hash = vnx::Hash64(0x7dc3539ef28aad43ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<ServerInfo>(); };
	type_code->depends.resize(1);
	type_code->depends[0] = ::vnx::keyvalue::shard_t::static_get_type_code();
	type_code->methods.resize(0);
	type_code->fields.resize(2);
	{
		vnx::TypeField& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "shard";
		field.code = {19, 0};
	}
	{
		vnx::TypeField& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "address";
		field.code = {4};
	}
	type_code->build();
	return type_code;
}


} // namespace vnx
} // namespace keyvalue


namespace vnx {

void read(TypeInput& in, ::vnx::keyvalue::ServerInfo& value, const TypeCode* type_code, const uint16_t* code) {
	if(!type_code) {
		throw std::logic_error("read(): type_code == 0");
	}
	if(code) {
		switch(code[0]) {
			case CODE_STRUCT: type_code = type_code->depends[code[1]]; break;
			case CODE_ALT_STRUCT: type_code = type_code->depends[vnx::flip_bytes(code[1])]; break;
			default: vnx::skip(in, type_code, code); return;
		}
	}
	const char* const _buf = in.read(type_code->total_field_size);
	if(type_code->is_matched) {
	}
	for(const vnx::TypeField* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.shard, type_code, _field->code.data()); break;
			case 1: vnx::read(in, value.address, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::keyvalue::ServerInfo& value, const TypeCode* type_code, const uint16_t* code) {
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::keyvalue::vnx_native_type_code_ServerInfo;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::keyvalue::ServerInfo>(out);
	}
	if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	vnx::write(out, value.shard, type_code, type_code->fields[0].code.data());
	vnx::write(out, value.address, type_code, type_code->fields[1].code.data());
}

void read(std::istream& in, ::vnx::keyvalue::ServerInfo& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::keyvalue::ServerInfo& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::keyvalue::ServerInfo& value) {
	value.accept(visitor);
}

} // vnx
