
// AUTO GENERATED by vnxcppcodegen

#include <vnx/vnx.h>
#include <vnx/keyvalue/package.hxx>
#include <vnx/keyvalue/Server_store_value.hxx>
#include <vnx/Value.h>
#include <vnx/Variant.hpp>
#include <vnx/keyvalue/Server_store_value_return.hxx>



namespace vnx {
namespace keyvalue {


const vnx::Hash64 Server_store_value::VNX_TYPE_HASH(0xf6bea692aee1018cull);
const vnx::Hash64 Server_store_value::VNX_CODE_HASH(0x8c7731b7acba5f30ull);

vnx::Hash64 Server_store_value::get_type_hash() const {
	return VNX_TYPE_HASH;
}

const char* Server_store_value::get_type_name() const {
	return "vnx.keyvalue.Server.store_value";
}
const vnx::TypeCode* Server_store_value::get_type_code() const {
	return vnx::keyvalue::vnx_native_type_code_Server_store_value;
}

std::shared_ptr<Server_store_value> Server_store_value::create() {
	return std::make_shared<Server_store_value>();
}

std::shared_ptr<vnx::Value> Server_store_value::clone() const {
	return std::make_shared<Server_store_value>(*this);
}

void Server_store_value::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void Server_store_value::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void Server_store_value::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::keyvalue::vnx_native_type_code_Server_store_value;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, key);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, value);
	_visitor.type_end(*_type_code);
}

void Server_store_value::write(std::ostream& _out) const {
	_out << "{\"__type\": \"vnx.keyvalue.Server.store_value\"";
	_out << ", \"key\": "; vnx::write(_out, key);
	_out << ", \"value\": "; vnx::write(_out, value);
	_out << "}";
}

void Server_store_value::read(std::istream& _in) {
	std::map<std::string, std::string> _object;
	vnx::read_object(_in, _object);
	for(const auto& _entry : _object) {
		if(_entry.first == "key") {
			vnx::from_string(_entry.second, key);
		} else if(_entry.first == "value") {
			vnx::from_string(_entry.second, value);
		}
	}
}

vnx::Object Server_store_value::to_object() const {
	vnx::Object _object;
	_object["key"] = key;
	_object["value"] = value;
	return _object;
}

void Server_store_value::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "key") {
			_entry.second.to(key);
		} else if(_entry.first == "value") {
			_entry.second.to(value);
		}
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const Server_store_value& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, Server_store_value& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* Server_store_value::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> Server_store_value::static_create_type_code() {
	std::shared_ptr<vnx::TypeCode> type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.keyvalue.Server.store_value";
	type_code->type_hash = vnx::Hash64(0xf6bea692aee1018cull);
	type_code->code_hash = vnx::Hash64(0x8c7731b7acba5f30ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<Server_store_value>(); };
	type_code->return_type = ::vnx::keyvalue::Server_store_value_return::static_get_type_code();
	type_code->fields.resize(2);
	{
		vnx::TypeField& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "key";
		field.code = {17};
	}
	{
		vnx::TypeField& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "value";
		field.code = {16};
	}
	type_code->build();
	return type_code;
}


} // namespace vnx
} // namespace keyvalue


namespace vnx {

void read(TypeInput& in, ::vnx::keyvalue::Server_store_value& value, const TypeCode* type_code, const uint16_t* code) {
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
			case 0: vnx::read(in, value.key, type_code, _field->code.data()); break;
			case 1: vnx::read(in, value.value, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::keyvalue::Server_store_value& value, const TypeCode* type_code, const uint16_t* code) {
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::keyvalue::vnx_native_type_code_Server_store_value;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::keyvalue::Server_store_value>(out);
	}
	if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	vnx::write(out, value.key, type_code, type_code->fields[0].code.data());
	vnx::write(out, value.value, type_code, type_code->fields[1].code.data());
}

void read(std::istream& in, ::vnx::keyvalue::Server_store_value& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::keyvalue::Server_store_value& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::keyvalue::Server_store_value& value) {
	value.accept(visitor);
}

} // vnx
