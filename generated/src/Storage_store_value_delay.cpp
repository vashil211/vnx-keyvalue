
// AUTO GENERATED by vnxcppcodegen

#include <vnx/keyvalue/package.hxx>
#include <vnx/keyvalue/Storage_store_value_delay.hxx>
#include <vnx/Value.h>
#include <vnx/Variant.hpp>
#include <vnx/keyvalue/Storage_store_value_delay_return.hxx>

#include <vnx/vnx.h>


namespace vnx {
namespace keyvalue {


const vnx::Hash64 Storage_store_value_delay::VNX_TYPE_HASH(0x8e78c89a3ce01406ull);
const vnx::Hash64 Storage_store_value_delay::VNX_CODE_HASH(0xa0d43f148f50c7f8ull);

vnx::Hash64 Storage_store_value_delay::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string Storage_store_value_delay::get_type_name() const {
	return "vnx.keyvalue.Storage.store_value_delay";
}

const vnx::TypeCode* Storage_store_value_delay::get_type_code() const {
	return vnx::keyvalue::vnx_native_type_code_Storage_store_value_delay;
}

std::shared_ptr<Storage_store_value_delay> Storage_store_value_delay::create() {
	return std::make_shared<Storage_store_value_delay>();
}

std::shared_ptr<vnx::Value> Storage_store_value_delay::clone() const {
	return std::make_shared<Storage_store_value_delay>(*this);
}

void Storage_store_value_delay::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void Storage_store_value_delay::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void Storage_store_value_delay::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::keyvalue::vnx_native_type_code_Storage_store_value_delay;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, key);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, value);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, delay_ms);
	_visitor.type_end(*_type_code);
}

void Storage_store_value_delay::write(std::ostream& _out) const {
	_out << "{\"__type\": \"vnx.keyvalue.Storage.store_value_delay\"";
	_out << ", \"key\": "; vnx::write(_out, key);
	_out << ", \"value\": "; vnx::write(_out, value);
	_out << ", \"delay_ms\": "; vnx::write(_out, delay_ms);
	_out << "}";
}

void Storage_store_value_delay::read(std::istream& _in) {
	std::map<std::string, std::string> _object;
	vnx::read_object(_in, _object);
	for(const auto& _entry : _object) {
		if(_entry.first == "delay_ms") {
			vnx::from_string(_entry.second, delay_ms);
		} else if(_entry.first == "key") {
			vnx::from_string(_entry.second, key);
		} else if(_entry.first == "value") {
			vnx::from_string(_entry.second, value);
		}
	}
}

vnx::Object Storage_store_value_delay::to_object() const {
	vnx::Object _object;
	_object["__type"] = "vnx.keyvalue.Storage.store_value_delay";
	_object["key"] = key;
	_object["value"] = value;
	_object["delay_ms"] = delay_ms;
	return _object;
}

void Storage_store_value_delay::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "delay_ms") {
			_entry.second.to(delay_ms);
		} else if(_entry.first == "key") {
			_entry.second.to(key);
		} else if(_entry.first == "value") {
			_entry.second.to(value);
		}
	}
}

vnx::Variant Storage_store_value_delay::get_field(const std::string& _name) const {
	if(_name == "key") {
		return vnx::Variant(key);
	}
	if(_name == "value") {
		return vnx::Variant(value);
	}
	if(_name == "delay_ms") {
		return vnx::Variant(delay_ms);
	}
	return vnx::Variant();
}

void Storage_store_value_delay::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "key") {
		_value.to(key);
	} else if(_name == "value") {
		_value.to(value);
	} else if(_name == "delay_ms") {
		_value.to(delay_ms);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const Storage_store_value_delay& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, Storage_store_value_delay& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* Storage_store_value_delay::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> Storage_store_value_delay::static_create_type_code() {
	std::shared_ptr<vnx::TypeCode> type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.keyvalue.Storage.store_value_delay";
	type_code->type_hash = vnx::Hash64(0x8e78c89a3ce01406ull);
	type_code->code_hash = vnx::Hash64(0xa0d43f148f50c7f8ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<Storage_store_value_delay>(); };
	type_code->return_type = ::vnx::keyvalue::Storage_store_value_delay_return::static_get_type_code();
	type_code->fields.resize(3);
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
	{
		vnx::TypeField& field = type_code->fields[2];
		field.name = "delay_ms";
		field.code = {7};
	}
	type_code->build();
	return type_code;
}


} // namespace vnx
} // namespace keyvalue


namespace vnx {

void read(TypeInput& in, ::vnx::keyvalue::Storage_store_value_delay& value, const TypeCode* type_code, const uint16_t* code) {
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
		vnx::skip(in, type_code, code);
		return;
	}
	if(code) {
		switch(code[0]) {
			case CODE_STRUCT: type_code = type_code->depends[code[1]]; break;
			case CODE_ALT_STRUCT: type_code = type_code->depends[vnx::flip_bytes(code[1])]; break;
			default: {
				vnx::skip(in, type_code, code);
				return;
			}
		}
	}
	const char* const _buf = in.read(type_code->total_field_size);
	if(type_code->is_matched) {
		{
			const vnx::TypeField* const _field = type_code->field_map[2];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.delay_ms, _field->code.data());
			}
		}
	}
	for(const vnx::TypeField* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.key, type_code, _field->code.data()); break;
			case 1: vnx::read(in, value.value, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::keyvalue::Storage_store_value_delay& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::keyvalue::vnx_native_type_code_Storage_store_value_delay;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::keyvalue::Storage_store_value_delay>(out);
	}
	if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(4);
	vnx::write_value(_buf + 0, value.delay_ms);
	vnx::write(out, value.key, type_code, type_code->fields[0].code.data());
	vnx::write(out, value.value, type_code, type_code->fields[1].code.data());
}

void read(std::istream& in, ::vnx::keyvalue::Storage_store_value_delay& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::keyvalue::Storage_store_value_delay& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::keyvalue::Storage_store_value_delay& value) {
	value.accept(visitor);
}

} // vnx
