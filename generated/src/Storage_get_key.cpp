
// AUTO GENERATED by vnxcppcodegen

#include <vnx/keyvalue/package.hxx>
#include <vnx/keyvalue/Storage_get_key.hxx>
#include <vnx/Value.h>
#include <vnx/keyvalue/Storage_get_key_return.hxx>

#include <vnx/vnx.h>


namespace vnx {
namespace keyvalue {


const vnx::Hash64 Storage_get_key::VNX_TYPE_HASH(0xc7c81afb9921d76ull);
const vnx::Hash64 Storage_get_key::VNX_CODE_HASH(0xd9bc5a986afffc27ull);

vnx::Hash64 Storage_get_key::get_type_hash() const {
	return VNX_TYPE_HASH;
}

const char* Storage_get_key::get_type_name() const {
	return "vnx.keyvalue.Storage.get_key";
}
const vnx::TypeCode* Storage_get_key::get_type_code() const {
	return vnx::keyvalue::vnx_native_type_code_Storage_get_key;
}

std::shared_ptr<Storage_get_key> Storage_get_key::create() {
	return std::make_shared<Storage_get_key>();
}

std::shared_ptr<vnx::Value> Storage_get_key::clone() const {
	return std::make_shared<Storage_get_key>(*this);
}

void Storage_get_key::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void Storage_get_key::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void Storage_get_key::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::keyvalue::vnx_native_type_code_Storage_get_key;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, version);
	_visitor.type_end(*_type_code);
}

void Storage_get_key::write(std::ostream& _out) const {
	_out << "{\"__type\": \"vnx.keyvalue.Storage.get_key\"";
	_out << ", \"version\": "; vnx::write(_out, version);
	_out << "}";
}

void Storage_get_key::read(std::istream& _in) {
	std::map<std::string, std::string> _object;
	vnx::read_object(_in, _object);
	for(const auto& _entry : _object) {
		if(_entry.first == "version") {
			vnx::from_string(_entry.second, version);
		}
	}
}

vnx::Object Storage_get_key::to_object() const {
	vnx::Object _object;
	_object["__type"] = "vnx.keyvalue.Storage.get_key";
	_object["version"] = version;
	return _object;
}

void Storage_get_key::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "version") {
			_entry.second.to(version);
		}
	}
}

vnx::Variant Storage_get_key::get_field(const std::string& _name) const {
	if(_name == "version") {
		return vnx::Variant(version);
	}
	return vnx::Variant();
}

void Storage_get_key::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "version") {
		_value.to(version);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const Storage_get_key& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, Storage_get_key& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* Storage_get_key::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> Storage_get_key::static_create_type_code() {
	std::shared_ptr<vnx::TypeCode> type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.keyvalue.Storage.get_key";
	type_code->type_hash = vnx::Hash64(0xc7c81afb9921d76ull);
	type_code->code_hash = vnx::Hash64(0xd9bc5a986afffc27ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<Storage_get_key>(); };
	type_code->return_type = ::vnx::keyvalue::Storage_get_key_return::static_get_type_code();
	type_code->fields.resize(1);
	{
		vnx::TypeField& field = type_code->fields[0];
		field.name = "version";
		field.code = {4};
	}
	type_code->build();
	return type_code;
}


} // namespace vnx
} // namespace keyvalue


namespace vnx {

void read(TypeInput& in, ::vnx::keyvalue::Storage_get_key& value, const TypeCode* type_code, const uint16_t* code) {
	if(code) {
		switch(code[0]) {
			case CODE_OBJECT:
			case CODE_ALT_OBJECT: {
				Object tmp;
				vnx::read(in, tmp, type_code, code);
				value.from_object(tmp);
				return;
			}
			case CODE_DYNAMIC:
			case CODE_ALT_DYNAMIC:
				vnx::read_dynamic(in, value);
				return;
		}
	}
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
		{
			const vnx::TypeField* const _field = type_code->field_map[0];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.version, _field->code.data());
			}
		}
	}
	for(const vnx::TypeField* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::keyvalue::Storage_get_key& value, const TypeCode* type_code, const uint16_t* code) {
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::keyvalue::vnx_native_type_code_Storage_get_key;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::keyvalue::Storage_get_key>(out);
	}
	if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(8);
	vnx::write_value(_buf + 0, value.version);
}

void read(std::istream& in, ::vnx::keyvalue::Storage_get_key& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::keyvalue::Storage_get_key& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::keyvalue::Storage_get_key& value) {
	value.accept(visitor);
}

} // vnx
