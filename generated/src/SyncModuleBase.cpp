
// AUTO GENERATED by vnxcppcodegen

#include <vnx/keyvalue/package.hxx>
#include <vnx/keyvalue/SyncModuleBase.hxx>
#include <vnx/NoSuchMethod.hxx>
#include <vnx/Hash64.hpp>
#include <vnx/Module.h>
#include <vnx/ModuleInterface_vnx_get_type_code.hxx>
#include <vnx/ModuleInterface_vnx_get_type_code_return.hxx>
#include <vnx/TopicPtr.hpp>
#include <vnx/keyvalue/SyncInfo.hxx>
#include <vnx/keyvalue/SyncUpdate.hxx>

#include <vnx/vnx.h>


namespace vnx {
namespace keyvalue {


const vnx::Hash64 SyncModuleBase::VNX_TYPE_HASH(0x508da303057fe58cull);
const vnx::Hash64 SyncModuleBase::VNX_CODE_HASH(0x16148dd4b4c87a0dull);

SyncModuleBase::SyncModuleBase(const std::string& _vnx_name)
	:	Module::Module(_vnx_name)
{
	vnx::read_config(vnx_name + ".add_only", add_only);
	vnx::read_config(vnx_name + ".buffer_size", buffer_size);
	vnx::read_config(vnx_name + ".dst_addr", dst_addr);
	vnx::read_config(vnx_name + ".input_sync", input_sync);
	vnx::read_config(vnx_name + ".src_addr", src_addr);
	vnx::read_config(vnx_name + ".stats_interval_ms", stats_interval_ms);
}

vnx::Hash64 SyncModuleBase::get_type_hash() const {
	return VNX_TYPE_HASH;
}

const char* SyncModuleBase::get_type_name() const {
	return "vnx.keyvalue.SyncModule";
}
const vnx::TypeCode* SyncModuleBase::get_type_code() const {
	return vnx::keyvalue::vnx_native_type_code_SyncModuleBase;
}

void SyncModuleBase::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::keyvalue::vnx_native_type_code_SyncModuleBase;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, input_sync);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, src_addr);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, dst_addr);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, buffer_size);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, stats_interval_ms);
	_visitor.type_field(_type_code->fields[5], 5); vnx::accept(_visitor, add_only);
	_visitor.type_end(*_type_code);
}

void SyncModuleBase::write(std::ostream& _out) const {
	_out << "{";
	_out << "\"input_sync\": "; vnx::write(_out, input_sync);
	_out << ", \"src_addr\": "; vnx::write(_out, src_addr);
	_out << ", \"dst_addr\": "; vnx::write(_out, dst_addr);
	_out << ", \"buffer_size\": "; vnx::write(_out, buffer_size);
	_out << ", \"stats_interval_ms\": "; vnx::write(_out, stats_interval_ms);
	_out << ", \"add_only\": "; vnx::write(_out, add_only);
	_out << "}";
}

void SyncModuleBase::read(std::istream& _in) {
	std::map<std::string, std::string> _object;
	vnx::read_object(_in, _object);
	for(const auto& _entry : _object) {
		if(_entry.first == "add_only") {
			vnx::from_string(_entry.second, add_only);
		} else if(_entry.first == "buffer_size") {
			vnx::from_string(_entry.second, buffer_size);
		} else if(_entry.first == "dst_addr") {
			vnx::from_string(_entry.second, dst_addr);
		} else if(_entry.first == "input_sync") {
			vnx::from_string(_entry.second, input_sync);
		} else if(_entry.first == "src_addr") {
			vnx::from_string(_entry.second, src_addr);
		} else if(_entry.first == "stats_interval_ms") {
			vnx::from_string(_entry.second, stats_interval_ms);
		}
	}
}

vnx::Object SyncModuleBase::to_object() const {
	vnx::Object _object;
	_object["input_sync"] = input_sync;
	_object["src_addr"] = src_addr;
	_object["dst_addr"] = dst_addr;
	_object["buffer_size"] = buffer_size;
	_object["stats_interval_ms"] = stats_interval_ms;
	_object["add_only"] = add_only;
	return _object;
}

void SyncModuleBase::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "add_only") {
			_entry.second.to(add_only);
		} else if(_entry.first == "buffer_size") {
			_entry.second.to(buffer_size);
		} else if(_entry.first == "dst_addr") {
			_entry.second.to(dst_addr);
		} else if(_entry.first == "input_sync") {
			_entry.second.to(input_sync);
		} else if(_entry.first == "src_addr") {
			_entry.second.to(src_addr);
		} else if(_entry.first == "stats_interval_ms") {
			_entry.second.to(stats_interval_ms);
		}
	}
}

vnx::Variant SyncModuleBase::get_field(const std::string& _name) const {
	if(_name == "input_sync") {
		return vnx::Variant(input_sync);
	}
	if(_name == "src_addr") {
		return vnx::Variant(src_addr);
	}
	if(_name == "dst_addr") {
		return vnx::Variant(dst_addr);
	}
	if(_name == "buffer_size") {
		return vnx::Variant(buffer_size);
	}
	if(_name == "stats_interval_ms") {
		return vnx::Variant(stats_interval_ms);
	}
	if(_name == "add_only") {
		return vnx::Variant(add_only);
	}
	return vnx::Variant();
}

void SyncModuleBase::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "input_sync") {
		_value.to(input_sync);
	} else if(_name == "src_addr") {
		_value.to(src_addr);
	} else if(_name == "dst_addr") {
		_value.to(dst_addr);
	} else if(_name == "buffer_size") {
		_value.to(buffer_size);
	} else if(_name == "stats_interval_ms") {
		_value.to(stats_interval_ms);
	} else if(_name == "add_only") {
		_value.to(add_only);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const SyncModuleBase& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, SyncModuleBase& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* SyncModuleBase::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> SyncModuleBase::static_create_type_code() {
	std::shared_ptr<vnx::TypeCode> type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.keyvalue.SyncModule";
	type_code->type_hash = vnx::Hash64(0x508da303057fe58cull);
	type_code->code_hash = vnx::Hash64(0x16148dd4b4c87a0dull);
	type_code->is_native = true;
	type_code->methods.resize(1);
	type_code->methods[0] = ::vnx::ModuleInterface_vnx_get_type_code::static_get_type_code();
	type_code->fields.resize(6);
	{
		vnx::TypeField& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "input_sync";
		field.code = {12, 5};
	}
	{
		vnx::TypeField& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "src_addr";
		field.code = {4};
	}
	{
		vnx::TypeField& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "dst_addr";
		field.code = {4};
	}
	{
		vnx::TypeField& field = type_code->fields[3];
		field.name = "buffer_size";
		field.value = vnx::to_string(100);
		field.code = {7};
	}
	{
		vnx::TypeField& field = type_code->fields[4];
		field.name = "stats_interval_ms";
		field.value = vnx::to_string(3000);
		field.code = {7};
	}
	{
		vnx::TypeField& field = type_code->fields[5];
		field.name = "add_only";
		field.value = vnx::to_string(false);
		field.code = {31};
	}
	type_code->build();
	return type_code;
}

void SyncModuleBase::vnx_handle_switch(std::shared_ptr<const vnx::Sample> _sample) {
	{
		auto _value = std::dynamic_pointer_cast<const ::vnx::keyvalue::SyncUpdate>(_sample->value);
		if(_value) {
			handle(_value, _sample);
			return;
		}
	}
	{
		auto _value = std::dynamic_pointer_cast<const ::vnx::keyvalue::SyncInfo>(_sample->value);
		if(_value) {
			handle(_value, _sample);
			return;
		}
	}
}

std::shared_ptr<vnx::Value> SyncModuleBase::vnx_call_switch(std::shared_ptr<const vnx::Value> _method, const vnx::request_id_t& _request_id) {
	const auto _type_hash = _method->get_type_hash();
	if(_type_hash == vnx::Hash64(0x305ec4d628960e5dull)) {
		auto _args = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_type_code>(_method);
		if(!_args) {
			throw std::logic_error("vnx_call_switch(): !_args");
		}
		auto _return_value = ::vnx::ModuleInterface_vnx_get_type_code_return::create();
		_return_value->_ret_0 = vnx_get_type_code();
		return _return_value;
	}
	auto _ex = vnx::NoSuchMethod::create();
	_ex->dst_mac = vnx_request ? vnx_request->dst_mac : 0;
	_ex->method = _method->get_type_name();
	return _ex;
}


} // namespace vnx
} // namespace keyvalue


namespace vnx {

void read(TypeInput& in, ::vnx::keyvalue::SyncModuleBase& value, const TypeCode* type_code, const uint16_t* code) {
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
			const vnx::TypeField* const _field = type_code->field_map[3];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.buffer_size, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[4];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.stats_interval_ms, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[5];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.add_only, _field->code.data());
			}
		}
	}
	for(const vnx::TypeField* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.input_sync, type_code, _field->code.data()); break;
			case 1: vnx::read(in, value.src_addr, type_code, _field->code.data()); break;
			case 2: vnx::read(in, value.dst_addr, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::keyvalue::SyncModuleBase& value, const TypeCode* type_code, const uint16_t* code) {
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::keyvalue::vnx_native_type_code_SyncModuleBase;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::keyvalue::SyncModuleBase>(out);
	}
	if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(9);
	vnx::write_value(_buf + 0, value.buffer_size);
	vnx::write_value(_buf + 4, value.stats_interval_ms);
	vnx::write_value(_buf + 8, value.add_only);
	vnx::write(out, value.input_sync, type_code, type_code->fields[0].code.data());
	vnx::write(out, value.src_addr, type_code, type_code->fields[1].code.data());
	vnx::write(out, value.dst_addr, type_code, type_code->fields[2].code.data());
}

void read(std::istream& in, ::vnx::keyvalue::SyncModuleBase& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::keyvalue::SyncModuleBase& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::keyvalue::SyncModuleBase& value) {
	value.accept(visitor);
}

} // vnx
