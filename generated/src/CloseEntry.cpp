
// AUTO GENERATED by vnxcppcodegen

#include <vnx/keyvalue/package.hxx>
#include <vnx/keyvalue/CloseEntry.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace vnx {
namespace keyvalue {


const vnx::Hash64 CloseEntry::VNX_TYPE_HASH(0xc06cd9d036102eefull);
const vnx::Hash64 CloseEntry::VNX_CODE_HASH(0x93f0edbd8bfc9895ull);

vnx::Hash64 CloseEntry::get_type_hash() const {
	return VNX_TYPE_HASH;
}

const char* CloseEntry::get_type_name() const {
	return "vnx.keyvalue.CloseEntry";
}
const vnx::TypeCode* CloseEntry::get_type_code() const {
	return vnx::keyvalue::vnx_native_type_code_CloseEntry;
}

std::shared_ptr<CloseEntry> CloseEntry::create() {
	return std::make_shared<CloseEntry>();
}

std::shared_ptr<vnx::Value> CloseEntry::clone() const {
	return std::make_shared<CloseEntry>(*this);
}

void CloseEntry::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void CloseEntry::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void CloseEntry::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::keyvalue::vnx_native_type_code_CloseEntry;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, block_offset);
	_visitor.type_end(*_type_code);
}

void CloseEntry::write(std::ostream& _out) const {
	_out << "{\"__type\": \"vnx.keyvalue.CloseEntry\"";
	_out << ", \"block_offset\": "; vnx::write(_out, block_offset);
	_out << "}";
}

void CloseEntry::read(std::istream& _in) {
	std::map<std::string, std::string> _object;
	vnx::read_object(_in, _object);
	for(const auto& _entry : _object) {
		if(_entry.first == "block_offset") {
			vnx::from_string(_entry.second, block_offset);
		}
	}
}

vnx::Object CloseEntry::to_object() const {
	vnx::Object _object;
	_object["__type"] = "vnx.keyvalue.CloseEntry";
	_object["block_offset"] = block_offset;
	return _object;
}

void CloseEntry::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "block_offset") {
			_entry.second.to(block_offset);
		}
	}
}

vnx::Variant CloseEntry::get_field(const std::string& _name) const {
	if(_name == "block_offset") {
		return vnx::Variant(block_offset);
	}
	return vnx::Variant();
}

void CloseEntry::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "block_offset") {
		_value.to(block_offset);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const CloseEntry& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, CloseEntry& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* CloseEntry::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> CloseEntry::static_create_type_code() {
	std::shared_ptr<vnx::TypeCode> type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.keyvalue.CloseEntry";
	type_code->type_hash = vnx::Hash64(0xc06cd9d036102eefull);
	type_code->code_hash = vnx::Hash64(0x93f0edbd8bfc9895ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<CloseEntry>(); };
	type_code->fields.resize(1);
	{
		vnx::TypeField& field = type_code->fields[0];
		field.name = "block_offset";
		field.code = {8};
	}
	type_code->build();
	return type_code;
}


} // namespace vnx
} // namespace keyvalue


namespace vnx {

void read(TypeInput& in, ::vnx::keyvalue::CloseEntry& value, const TypeCode* type_code, const uint16_t* code) {
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
				vnx::read_value(_buf + _field->offset, value.block_offset, _field->code.data());
			}
		}
	}
	for(const vnx::TypeField* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::keyvalue::CloseEntry& value, const TypeCode* type_code, const uint16_t* code) {
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::keyvalue::vnx_native_type_code_CloseEntry;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::keyvalue::CloseEntry>(out);
	}
	if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(8);
	vnx::write_value(_buf + 0, value.block_offset);
}

void read(std::istream& in, ::vnx::keyvalue::CloseEntry& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::keyvalue::CloseEntry& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::keyvalue::CloseEntry& value) {
	value.accept(visitor);
}

} // vnx
