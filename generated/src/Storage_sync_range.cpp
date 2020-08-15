
// AUTO GENERATED by vnxcppcodegen

#include <vnx/keyvalue/package.hxx>
#include <vnx/keyvalue/Storage_sync_range.hxx>
#include <vnx/TopicPtr.hpp>
#include <vnx/Value.h>
#include <vnx/keyvalue/Storage_sync_range_return.hxx>

#include <vnx/vnx.h>


namespace vnx {
namespace keyvalue {


const vnx::Hash64 Storage_sync_range::VNX_TYPE_HASH(0x57e04cb98c5e5698ull);
const vnx::Hash64 Storage_sync_range::VNX_CODE_HASH(0x4cedc13e84ad882full);

vnx::Hash64 Storage_sync_range::get_type_hash() const {
	return VNX_TYPE_HASH;
}

const char* Storage_sync_range::get_type_name() const {
	return "vnx.keyvalue.Storage.sync_range";
}
const vnx::TypeCode* Storage_sync_range::get_type_code() const {
	return vnx::keyvalue::vnx_native_type_code_Storage_sync_range;
}

std::shared_ptr<Storage_sync_range> Storage_sync_range::create() {
	return std::make_shared<Storage_sync_range>();
}

std::shared_ptr<vnx::Value> Storage_sync_range::clone() const {
	return std::make_shared<Storage_sync_range>(*this);
}

void Storage_sync_range::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void Storage_sync_range::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void Storage_sync_range::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::keyvalue::vnx_native_type_code_Storage_sync_range;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, topic);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, begin);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, end);
	_visitor.type_end(*_type_code);
}

void Storage_sync_range::write(std::ostream& _out) const {
	_out << "{\"__type\": \"vnx.keyvalue.Storage.sync_range\"";
	_out << ", \"topic\": "; vnx::write(_out, topic);
	_out << ", \"begin\": "; vnx::write(_out, begin);
	_out << ", \"end\": "; vnx::write(_out, end);
	_out << "}";
}

void Storage_sync_range::read(std::istream& _in) {
	std::map<std::string, std::string> _object;
	vnx::read_object(_in, _object);
	for(const auto& _entry : _object) {
		if(_entry.first == "begin") {
			vnx::from_string(_entry.second, begin);
		} else if(_entry.first == "end") {
			vnx::from_string(_entry.second, end);
		} else if(_entry.first == "topic") {
			vnx::from_string(_entry.second, topic);
		}
	}
}

vnx::Object Storage_sync_range::to_object() const {
	vnx::Object _object;
	_object["__type"] = "vnx.keyvalue.Storage.sync_range";
	_object["topic"] = topic;
	_object["begin"] = begin;
	_object["end"] = end;
	return _object;
}

void Storage_sync_range::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "begin") {
			_entry.second.to(begin);
		} else if(_entry.first == "end") {
			_entry.second.to(end);
		} else if(_entry.first == "topic") {
			_entry.second.to(topic);
		}
	}
}

vnx::Variant Storage_sync_range::get_field(const std::string& _name) const {
	if(_name == "topic") {
		return vnx::Variant(topic);
	}
	if(_name == "begin") {
		return vnx::Variant(begin);
	}
	if(_name == "end") {
		return vnx::Variant(end);
	}
	return vnx::Variant();
}

void Storage_sync_range::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "topic") {
		_value.to(topic);
	} else if(_name == "begin") {
		_value.to(begin);
	} else if(_name == "end") {
		_value.to(end);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const Storage_sync_range& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, Storage_sync_range& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* Storage_sync_range::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> Storage_sync_range::static_create_type_code() {
	std::shared_ptr<vnx::TypeCode> type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.keyvalue.Storage.sync_range";
	type_code->type_hash = vnx::Hash64(0x57e04cb98c5e5698ull);
	type_code->code_hash = vnx::Hash64(0x4cedc13e84ad882full);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<Storage_sync_range>(); };
	type_code->return_type = ::vnx::keyvalue::Storage_sync_range_return::static_get_type_code();
	type_code->fields.resize(3);
	{
		vnx::TypeField& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "topic";
		field.code = {12, 5};
	}
	{
		vnx::TypeField& field = type_code->fields[1];
		field.name = "begin";
		field.code = {4};
	}
	{
		vnx::TypeField& field = type_code->fields[2];
		field.name = "end";
		field.code = {4};
	}
	type_code->build();
	return type_code;
}


} // namespace vnx
} // namespace keyvalue


namespace vnx {

void read(TypeInput& in, ::vnx::keyvalue::Storage_sync_range& value, const TypeCode* type_code, const uint16_t* code) {
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
			const vnx::TypeField* const _field = type_code->field_map[1];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.begin, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[2];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.end, _field->code.data());
			}
		}
	}
	for(const vnx::TypeField* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.topic, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::keyvalue::Storage_sync_range& value, const TypeCode* type_code, const uint16_t* code) {
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::keyvalue::vnx_native_type_code_Storage_sync_range;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::keyvalue::Storage_sync_range>(out);
	}
	if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(16);
	vnx::write_value(_buf + 0, value.begin);
	vnx::write_value(_buf + 8, value.end);
	vnx::write(out, value.topic, type_code, type_code->fields[0].code.data());
}

void read(std::istream& in, ::vnx::keyvalue::Storage_sync_range& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::keyvalue::Storage_sync_range& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::keyvalue::Storage_sync_range& value) {
	value.accept(visitor);
}

} // vnx
