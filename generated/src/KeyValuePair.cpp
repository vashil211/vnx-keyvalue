
// AUTO GENERATED by vnxcppcodegen

#include <vnx/keyvalue/package.hxx>
#include <vnx/keyvalue/KeyValuePair.hxx>
#include <vnx/Input.h>
#include <vnx/Output.h>
#include <vnx/Visitor.h>
#include <vnx/Object.h>
#include <vnx/Struct.h>


namespace vnx {
namespace keyvalue {


const vnx::Hash64 KeyValuePair::VNX_TYPE_HASH(0xf87436237449d8afull);
const vnx::Hash64 KeyValuePair::VNX_CODE_HASH(0x24d2022787f2112full);

vnx::Hash64 KeyValuePair::get_type_hash() const {
	return VNX_TYPE_HASH;
}

const char* KeyValuePair::get_type_name() const {
	return "vnx.keyvalue.KeyValuePair";
}
const vnx::TypeCode* KeyValuePair::get_type_code() const {
	return vnx::keyvalue::vnx_native_type_code_KeyValuePair;
}

std::shared_ptr<KeyValuePair> KeyValuePair::create() {
	return std::make_shared<KeyValuePair>();
}

std::shared_ptr<vnx::Value> KeyValuePair::clone() const {
	return std::make_shared<KeyValuePair>(*this);
}

void KeyValuePair::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void KeyValuePair::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void KeyValuePair::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::keyvalue::vnx_native_type_code_KeyValuePair;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, collection);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, version);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, previous);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, key);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, value);
	_visitor.type_end(*_type_code);
}

void KeyValuePair::write(std::ostream& _out) const {
	_out << "{\"__type\": \"vnx.keyvalue.KeyValuePair\"";
	_out << ", \"collection\": "; vnx::write(_out, collection);
	_out << ", \"version\": "; vnx::write(_out, version);
	_out << ", \"previous\": "; vnx::write(_out, previous);
	_out << ", \"key\": "; vnx::write(_out, key);
	_out << ", \"value\": "; vnx::write(_out, value);
	_out << "}";
}

void KeyValuePair::read(std::istream& _in) {
	std::map<std::string, std::string> _object;
	vnx::read_object(_in, _object);
	for(const auto& _entry : _object) {
		if(_entry.first == "collection") {
			vnx::from_string(_entry.second, collection);
		} else if(_entry.first == "key") {
			vnx::from_string(_entry.second, key);
		} else if(_entry.first == "previous") {
			vnx::from_string(_entry.second, previous);
		} else if(_entry.first == "value") {
			vnx::from_string(_entry.second, value);
		} else if(_entry.first == "version") {
			vnx::from_string(_entry.second, version);
		}
	}
}

vnx::Object KeyValuePair::to_object() const {
	vnx::Object _object;
	_object["collection"] = collection;
	_object["version"] = version;
	_object["previous"] = previous;
	_object["key"] = key;
	_object["value"] = value;
	return _object;
}

void KeyValuePair::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "collection") {
			_entry.second.to(collection);
		} else if(_entry.first == "key") {
			_entry.second.to(key);
		} else if(_entry.first == "previous") {
			_entry.second.to(previous);
		} else if(_entry.first == "value") {
			_entry.second.to(value);
		} else if(_entry.first == "version") {
			_entry.second.to(version);
		}
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const KeyValuePair& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, KeyValuePair& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* KeyValuePair::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(vnx::Hash64(0xf87436237449d8afull));
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> KeyValuePair::static_create_type_code() {
	std::shared_ptr<vnx::TypeCode> type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.keyvalue.KeyValuePair";
	type_code->type_hash = vnx::Hash64(0xf87436237449d8afull);
	type_code->code_hash = vnx::Hash64(0x24d2022787f2112full);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<KeyValuePair>(); };
	type_code->methods.resize(0);
	type_code->fields.resize(5);
	{
		vnx::TypeField& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "collection";
		field.code = {12, 5};
	}
	{
		vnx::TypeField& field = type_code->fields[1];
		field.name = "version";
		field.code = {4};
	}
	{
		vnx::TypeField& field = type_code->fields[2];
		field.name = "previous";
		field.code = {4};
	}
	{
		vnx::TypeField& field = type_code->fields[3];
		field.is_extended = true;
		field.name = "key";
		field.code = {17};
	}
	{
		vnx::TypeField& field = type_code->fields[4];
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

void read(TypeInput& in, ::vnx::keyvalue::KeyValuePair& value, const TypeCode* type_code, const uint16_t* code) {
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
			const vnx::TypeField* const _field = type_code->field_map[1];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.version, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[2];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.previous, _field->code.data());
			}
		}
	}
	for(const vnx::TypeField* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.collection, type_code, _field->code.data()); break;
			case 3: vnx::read(in, value.key, type_code, _field->code.data()); break;
			case 4: vnx::read(in, value.value, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::keyvalue::KeyValuePair& value, const TypeCode* type_code, const uint16_t* code) {
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::keyvalue::vnx_native_type_code_KeyValuePair;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::keyvalue::KeyValuePair>(out);
	}
	if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(16);
	vnx::write_value(_buf + 0, value.version);
	vnx::write_value(_buf + 8, value.previous);
	vnx::write(out, value.collection, type_code, type_code->fields[0].code.data());
	vnx::write(out, value.key, type_code, type_code->fields[3].code.data());
	vnx::write(out, value.value, type_code, type_code->fields[4].code.data());
}

void read(std::istream& in, ::vnx::keyvalue::KeyValuePair& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::keyvalue::KeyValuePair& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::keyvalue::KeyValuePair& value) {
	value.accept(visitor);
}

} // vnx
