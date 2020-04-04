
// AUTO GENERATED by vnxcppcodegen

#include <vnx/keyvalue/package.hxx>
#include <vnx/keyvalue/ServerBase.hxx>
#include <vnx/Input.h>
#include <vnx/Output.h>
#include <vnx/Visitor.h>
#include <vnx/Object.h>
#include <vnx/Struct.h>
#include <vnx/Config.h>
#include <vnx/Binary.h>
#include <vnx/NoSuchMethod.hxx>


namespace vnx {
namespace keyvalue {


const vnx::Hash64 ServerBase::VNX_TYPE_HASH(0xbb28aa6f1d808048ull);
const vnx::Hash64 ServerBase::VNX_CODE_HASH(0x9b9f5eacee1c2782ull);

ServerBase::ServerBase(const std::string& _vnx_name)
	:	Module::Module(_vnx_name)
{
	vnx::read_config(vnx_name + ".collection", collection);
	vnx::read_config(vnx_name + ".do_verify_rewrite", do_verify_rewrite);
	vnx::read_config(vnx_name + ".max_block_size", max_block_size);
	vnx::read_config(vnx_name + ".max_queue_ms", max_queue_ms);
	vnx::read_config(vnx_name + ".num_read_threads", num_read_threads);
	vnx::read_config(vnx_name + ".rewrite_threshold", rewrite_threshold);
	vnx::read_config(vnx_name + ".storage_path", storage_path);
	vnx::read_config(vnx_name + ".update_topic", update_topic);
}

vnx::Hash64 ServerBase::get_type_hash() const {
	return VNX_TYPE_HASH;
}

const char* ServerBase::get_type_name() const {
	return "vnx.keyvalue.Server";
}
const vnx::TypeCode* ServerBase::get_type_code() const {
	return vnx::keyvalue::vnx_native_type_code_Server;
}

void ServerBase::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::keyvalue::vnx_native_type_code_Server;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, update_topic);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, collection);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, storage_path);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, max_block_size);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, rewrite_threshold);
	_visitor.type_field(_type_code->fields[5], 5); vnx::accept(_visitor, num_read_threads);
	_visitor.type_field(_type_code->fields[6], 6); vnx::accept(_visitor, max_queue_ms);
	_visitor.type_field(_type_code->fields[7], 7); vnx::accept(_visitor, do_verify_rewrite);
	_visitor.type_end(*_type_code);
}

void ServerBase::write(std::ostream& _out) const {
	_out << "{";
	_out << "\"update_topic\": "; vnx::write(_out, update_topic);
	_out << ", \"collection\": "; vnx::write(_out, collection);
	_out << ", \"storage_path\": "; vnx::write(_out, storage_path);
	_out << ", \"max_block_size\": "; vnx::write(_out, max_block_size);
	_out << ", \"rewrite_threshold\": "; vnx::write(_out, rewrite_threshold);
	_out << ", \"num_read_threads\": "; vnx::write(_out, num_read_threads);
	_out << ", \"max_queue_ms\": "; vnx::write(_out, max_queue_ms);
	_out << ", \"do_verify_rewrite\": "; vnx::write(_out, do_verify_rewrite);
	_out << "}";
}

void ServerBase::read(std::istream& _in) {
	std::map<std::string, std::string> _object;
	vnx::read_object(_in, _object);
	for(const auto& _entry : _object) {
		if(_entry.first == "collection") {
			vnx::from_string(_entry.second, collection);
		} else if(_entry.first == "do_verify_rewrite") {
			vnx::from_string(_entry.second, do_verify_rewrite);
		} else if(_entry.first == "max_block_size") {
			vnx::from_string(_entry.second, max_block_size);
		} else if(_entry.first == "max_queue_ms") {
			vnx::from_string(_entry.second, max_queue_ms);
		} else if(_entry.first == "num_read_threads") {
			vnx::from_string(_entry.second, num_read_threads);
		} else if(_entry.first == "rewrite_threshold") {
			vnx::from_string(_entry.second, rewrite_threshold);
		} else if(_entry.first == "storage_path") {
			vnx::from_string(_entry.second, storage_path);
		} else if(_entry.first == "update_topic") {
			vnx::from_string(_entry.second, update_topic);
		}
	}
}

vnx::Object ServerBase::to_object() const {
	vnx::Object _object;
	_object["update_topic"] = update_topic;
	_object["collection"] = collection;
	_object["storage_path"] = storage_path;
	_object["max_block_size"] = max_block_size;
	_object["rewrite_threshold"] = rewrite_threshold;
	_object["num_read_threads"] = num_read_threads;
	_object["max_queue_ms"] = max_queue_ms;
	_object["do_verify_rewrite"] = do_verify_rewrite;
	return _object;
}

void ServerBase::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "collection") {
			_entry.second.to(collection);
		} else if(_entry.first == "do_verify_rewrite") {
			_entry.second.to(do_verify_rewrite);
		} else if(_entry.first == "max_block_size") {
			_entry.second.to(max_block_size);
		} else if(_entry.first == "max_queue_ms") {
			_entry.second.to(max_queue_ms);
		} else if(_entry.first == "num_read_threads") {
			_entry.second.to(num_read_threads);
		} else if(_entry.first == "rewrite_threshold") {
			_entry.second.to(rewrite_threshold);
		} else if(_entry.first == "storage_path") {
			_entry.second.to(storage_path);
		} else if(_entry.first == "update_topic") {
			_entry.second.to(update_topic);
		}
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const ServerBase& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, ServerBase& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* ServerBase::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(vnx::Hash64(0xbb28aa6f1d808048ull));
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> ServerBase::static_create_type_code() {
	std::shared_ptr<vnx::TypeCode> type_code = std::make_shared<vnx::TypeCode>(true);
	type_code->name = "vnx.keyvalue.Server";
	type_code->type_hash = vnx::Hash64(0xbb28aa6f1d808048ull);
	type_code->code_hash = vnx::Hash64(0x9b9f5eacee1c2782ull);
	type_code->methods.resize(6);
	{
		std::shared_ptr<vnx::TypeCode> call_type = std::make_shared<vnx::TypeCode>(true);
		call_type->name = "vnx.keyvalue.Server.block_sync_finished";
		call_type->type_hash = vnx::Hash64(0xba90ce7bfd371653ull);
		call_type->code_hash = vnx::Hash64(0x1ea478ca41e18707ull);
		call_type->is_method = true;
		{
			std::shared_ptr<vnx::TypeCode> return_type = std::make_shared<vnx::TypeCode>(true);
			return_type->name = "vnx.keyvalue.Server.block_sync_finished.return";
			return_type->type_hash = vnx::Hash64(0xe5d95a7b370db191ull);
			return_type->code_hash = vnx::Hash64(0x2074747a5437b8f4ull);
			return_type->is_return = true;
			return_type->build();
			call_type->return_type = vnx::register_type_code(return_type);
		}
		call_type->fields.resize(1);
		{
			vnx::TypeField& field = call_type->fields[0];
			field.name = "job_id";
			field.code = {8};
		}
		call_type->build();
		type_code->methods[0] = vnx::register_type_code(call_type);
	}
	{
		std::shared_ptr<vnx::TypeCode> call_type = std::make_shared<vnx::TypeCode>(true);
		call_type->name = "vnx.keyvalue.Server.delete_value";
		call_type->type_hash = vnx::Hash64(0xf5f6c0eca92f8e82ull);
		call_type->code_hash = vnx::Hash64(0xc12c0f582fad5c12ull);
		call_type->is_method = true;
		{
			std::shared_ptr<vnx::TypeCode> return_type = std::make_shared<vnx::TypeCode>(true);
			return_type->name = "vnx.keyvalue.Server.delete_value.return";
			return_type->type_hash = vnx::Hash64(0x6b26b84842654d71ull);
			return_type->code_hash = vnx::Hash64(0x67950ac76d00959bull);
			return_type->is_return = true;
			return_type->build();
			call_type->return_type = vnx::register_type_code(return_type);
		}
		call_type->fields.resize(1);
		{
			vnx::TypeField& field = call_type->fields[0];
			field.is_extended = true;
			field.name = "key";
			field.code = {17};
		}
		call_type->build();
		type_code->methods[1] = vnx::register_type_code(call_type);
	}
	{
		std::shared_ptr<vnx::TypeCode> call_type = std::make_shared<vnx::TypeCode>(true);
		call_type->name = "vnx.keyvalue.Server.get_value";
		call_type->type_hash = vnx::Hash64(0xe2ff2d7a976abdb8ull);
		call_type->code_hash = vnx::Hash64(0xb446025a8e0f3147ull);
		call_type->is_method = true;
		{
			std::shared_ptr<vnx::TypeCode> return_type = std::make_shared<vnx::TypeCode>(true);
			return_type->name = "vnx.keyvalue.Server.get_value.return";
			return_type->type_hash = vnx::Hash64(0x2eda7f8d6761272dull);
			return_type->code_hash = vnx::Hash64(0xb2c4c250a6a88484ull);
			return_type->is_return = true;
			return_type->fields.resize(1);
			{
				vnx::TypeField& field = return_type->fields[0];
				field.is_extended = true;
				field.name = "_ret_0";
				field.code = {16};
			}
			return_type->build();
			call_type->return_type = vnx::register_type_code(return_type);
		}
		call_type->fields.resize(1);
		{
			vnx::TypeField& field = call_type->fields[0];
			field.is_extended = true;
			field.name = "key";
			field.code = {17};
		}
		call_type->build();
		type_code->methods[2] = vnx::register_type_code(call_type);
	}
	{
		std::shared_ptr<vnx::TypeCode> call_type = std::make_shared<vnx::TypeCode>(true);
		call_type->name = "vnx.keyvalue.Server.get_values";
		call_type->type_hash = vnx::Hash64(0x29edfe1764d9e55ull);
		call_type->code_hash = vnx::Hash64(0x2611df7151fe65b8ull);
		call_type->is_method = true;
		{
			std::shared_ptr<vnx::TypeCode> return_type = std::make_shared<vnx::TypeCode>(true);
			return_type->name = "vnx.keyvalue.Server.get_values.return";
			return_type->type_hash = vnx::Hash64(0x92bdf340933764bcull);
			return_type->code_hash = vnx::Hash64(0x2311bb8b41c5673eull);
			return_type->is_return = true;
			return_type->fields.resize(1);
			{
				vnx::TypeField& field = return_type->fields[0];
				field.is_extended = true;
				field.name = "_ret_0";
				field.code = {12, 16};
			}
			return_type->build();
			call_type->return_type = vnx::register_type_code(return_type);
		}
		call_type->fields.resize(1);
		{
			vnx::TypeField& field = call_type->fields[0];
			field.is_extended = true;
			field.name = "keys";
			field.code = {12, 17};
		}
		call_type->build();
		type_code->methods[3] = vnx::register_type_code(call_type);
	}
	{
		std::shared_ptr<vnx::TypeCode> call_type = std::make_shared<vnx::TypeCode>(true);
		call_type->name = "vnx.keyvalue.Server.store_value";
		call_type->type_hash = vnx::Hash64(0xf6bea692aee1018cull);
		call_type->code_hash = vnx::Hash64(0xf5b7514c84dd23acull);
		call_type->is_method = true;
		{
			std::shared_ptr<vnx::TypeCode> return_type = std::make_shared<vnx::TypeCode>(true);
			return_type->name = "vnx.keyvalue.Server.store_value.return";
			return_type->type_hash = vnx::Hash64(0x8bc8f7e913889f88ull);
			return_type->code_hash = vnx::Hash64(0x12c5a07c502cfac0ull);
			return_type->is_return = true;
			return_type->build();
			call_type->return_type = vnx::register_type_code(return_type);
		}
		call_type->fields.resize(2);
		{
			vnx::TypeField& field = call_type->fields[0];
			field.is_extended = true;
			field.name = "key";
			field.code = {17};
		}
		{
			vnx::TypeField& field = call_type->fields[1];
			field.is_extended = true;
			field.name = "value";
			field.code = {16};
		}
		call_type->build();
		type_code->methods[4] = vnx::register_type_code(call_type);
	}
	{
		std::shared_ptr<vnx::TypeCode> call_type = std::make_shared<vnx::TypeCode>(true);
		call_type->name = "vnx.keyvalue.Server.sync_all";
		call_type->type_hash = vnx::Hash64(0x6173affeadaf11ddull);
		call_type->code_hash = vnx::Hash64(0x3586a46e6beccaf2ull);
		call_type->is_method = true;
		{
			std::shared_ptr<vnx::TypeCode> return_type = std::make_shared<vnx::TypeCode>(true);
			return_type->name = "vnx.keyvalue.Server.sync_all.return";
			return_type->type_hash = vnx::Hash64(0x964de09bdefcfc87ull);
			return_type->code_hash = vnx::Hash64(0x95c5d36cbdabb501ull);
			return_type->is_return = true;
			return_type->build();
			call_type->return_type = vnx::register_type_code(return_type);
		}
		call_type->fields.resize(1);
		{
			vnx::TypeField& field = call_type->fields[0];
			field.is_extended = true;
			field.name = "topic";
			field.code = {12, 5};
		}
		call_type->build();
		type_code->methods[5] = vnx::register_type_code(call_type);
	}
	type_code->fields.resize(8);
	{
		vnx::TypeField& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "update_topic";
		field.code = {12, 5};
	}
	{
		vnx::TypeField& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "collection";
		field.value = vnx::to_string("storage");
		field.code = {12, 5};
	}
	{
		vnx::TypeField& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "storage_path";
		field.code = {12, 5};
	}
	{
		vnx::TypeField& field = type_code->fields[3];
		field.name = "max_block_size";
		field.value = vnx::to_string(268435456);
		field.code = {8};
	}
	{
		vnx::TypeField& field = type_code->fields[4];
		field.name = "rewrite_threshold";
		field.value = vnx::to_string(0.5);
		field.code = {9};
	}
	{
		vnx::TypeField& field = type_code->fields[5];
		field.name = "num_read_threads";
		field.value = vnx::to_string(10);
		field.code = {7};
	}
	{
		vnx::TypeField& field = type_code->fields[6];
		field.name = "max_queue_ms";
		field.value = vnx::to_string(1000);
		field.code = {7};
	}
	{
		vnx::TypeField& field = type_code->fields[7];
		field.name = "do_verify_rewrite";
		field.value = vnx::to_string(false);
		field.code = {1};
	}
	type_code->build();
	return type_code;
}

void ServerBase::vnx_handle_switch(std::shared_ptr<const ::vnx::Sample> _sample) {
	const uint64_t _type_hash = _sample->value->get_type_hash();
}

std::shared_ptr<vnx::Value> ServerBase::vnx_call_switch(vnx::TypeInput& _in, const vnx::TypeCode* _call_type, const vnx::request_id_t& _request_id) {
	if(_call_type->type_hash == vnx::Hash64(0xba90ce7bfd371653ull)) {
		::int64_t job_id = 0;
		{
			const char* const _buf = _in.read(_call_type->total_field_size);
			if(_call_type->is_matched) {
				{
					const vnx::TypeField* const _field = _call_type->field_map[0];
					if(_field) {
						vnx::read_value(_buf + _field->offset, job_id, _field->code.data());
					}
				}
			}
			for(const vnx::TypeField* _field : _call_type->ext_fields) {
				switch(_field->native_index) {
					default: vnx::skip(_in, _call_type, _field->code.data());
				}
			}
		}
		block_sync_finished(job_id);
		std::shared_ptr<vnx::Binary> _return_value;
		{
			const vnx::TypeCode* _return_type = vnx::keyvalue::vnx_native_type_code_Server_block_sync_finished_return;
			_return_value = vnx::Binary::create();
			_return_value->type_code = _return_type;
		}
		return _return_value;
	} else if(_call_type->type_hash == vnx::Hash64(0xf5f6c0eca92f8e82ull)) {
		::vnx::Variant key;
		{
			const char* const _buf = _in.read(_call_type->total_field_size);
			if(_call_type->is_matched) {
			}
			for(const vnx::TypeField* _field : _call_type->ext_fields) {
				switch(_field->native_index) {
					case 0: vnx::read(_in, key, _call_type, _field->code.data()); break;
					default: vnx::skip(_in, _call_type, _field->code.data());
				}
			}
		}
		delete_value(key);
		std::shared_ptr<vnx::Binary> _return_value;
		{
			const vnx::TypeCode* _return_type = vnx::keyvalue::vnx_native_type_code_Server_delete_value_return;
			_return_value = vnx::Binary::create();
			_return_value->type_code = _return_type;
		}
		return _return_value;
	} else if(_call_type->type_hash == vnx::Hash64(0xe2ff2d7a976abdb8ull)) {
		::vnx::Variant key;
		{
			const char* const _buf = _in.read(_call_type->total_field_size);
			if(_call_type->is_matched) {
			}
			for(const vnx::TypeField* _field : _call_type->ext_fields) {
				switch(_field->native_index) {
					case 0: vnx::read(_in, key, _call_type, _field->code.data()); break;
					default: vnx::skip(_in, _call_type, _field->code.data());
				}
			}
		}
		get_value_async(key, std::bind(&ServerBase::get_value_async_return, this, _request_id, std::placeholders::_1), _request_id);
		return 0;
	} else if(_call_type->type_hash == vnx::Hash64(0x29edfe1764d9e55ull)) {
		::std::vector<::vnx::Variant> keys;
		{
			const char* const _buf = _in.read(_call_type->total_field_size);
			if(_call_type->is_matched) {
			}
			for(const vnx::TypeField* _field : _call_type->ext_fields) {
				switch(_field->native_index) {
					case 0: vnx::read(_in, keys, _call_type, _field->code.data()); break;
					default: vnx::skip(_in, _call_type, _field->code.data());
				}
			}
		}
		get_values_async(keys, std::bind(&ServerBase::get_values_async_return, this, _request_id, std::placeholders::_1), _request_id);
		return 0;
	} else if(_call_type->type_hash == vnx::Hash64(0xf6bea692aee1018cull)) {
		::vnx::Variant key;
		::std::shared_ptr<const ::vnx::Value> value;
		{
			const char* const _buf = _in.read(_call_type->total_field_size);
			if(_call_type->is_matched) {
			}
			for(const vnx::TypeField* _field : _call_type->ext_fields) {
				switch(_field->native_index) {
					case 0: vnx::read(_in, key, _call_type, _field->code.data()); break;
					case 1: vnx::read(_in, value, _call_type, _field->code.data()); break;
					default: vnx::skip(_in, _call_type, _field->code.data());
				}
			}
		}
		store_value(key, value);
		std::shared_ptr<vnx::Binary> _return_value;
		{
			const vnx::TypeCode* _return_type = vnx::keyvalue::vnx_native_type_code_Server_store_value_return;
			_return_value = vnx::Binary::create();
			_return_value->type_code = _return_type;
		}
		return _return_value;
	} else if(_call_type->type_hash == vnx::Hash64(0x6173affeadaf11ddull)) {
		::vnx::TopicPtr topic;
		{
			const char* const _buf = _in.read(_call_type->total_field_size);
			if(_call_type->is_matched) {
			}
			for(const vnx::TypeField* _field : _call_type->ext_fields) {
				switch(_field->native_index) {
					case 0: vnx::read(_in, topic, _call_type, _field->code.data()); break;
					default: vnx::skip(_in, _call_type, _field->code.data());
				}
			}
		}
		sync_all(topic);
		std::shared_ptr<vnx::Binary> _return_value;
		{
			const vnx::TypeCode* _return_type = vnx::keyvalue::vnx_native_type_code_Server_sync_all_return;
			_return_value = vnx::Binary::create();
			_return_value->type_code = _return_type;
		}
		return _return_value;
	}
	auto _ex = vnx::NoSuchMethod::create();
	_ex->method = _call_type->name;
	return _ex;
}

void ServerBase::get_value_async_return(const vnx::request_id_t& _request_id, const ::std::shared_ptr<const ::vnx::Value>& _ret_0) {
	std::shared_ptr<vnx::Binary> _return_value;
	const vnx::TypeCode* _return_type = vnx::keyvalue::vnx_native_type_code_Server_get_value_return;
	_return_value = vnx::Binary::create();
	_return_value->type_code = _return_type;
	vnx::BinaryOutputStream _stream_out(_return_value.get());
	vnx::TypeOutput _out(&_stream_out);
	vnx::write(_out, _ret_0, _return_type, _return_type->fields[0].code.data());
	_out.flush();
	vnx_async_return(_request_id, _return_value);
}

void ServerBase::get_values_async_return(const vnx::request_id_t& _request_id, const ::std::vector<::std::shared_ptr<const ::vnx::Value>>& _ret_0) {
	std::shared_ptr<vnx::Binary> _return_value;
	const vnx::TypeCode* _return_type = vnx::keyvalue::vnx_native_type_code_Server_get_values_return;
	_return_value = vnx::Binary::create();
	_return_value->type_code = _return_type;
	vnx::BinaryOutputStream _stream_out(_return_value.get());
	vnx::TypeOutput _out(&_stream_out);
	vnx::write(_out, _ret_0, _return_type, _return_type->fields[0].code.data());
	_out.flush();
	vnx_async_return(_request_id, _return_value);
}


} // namespace vnx
} // namespace keyvalue


namespace vnx {

void read(TypeInput& in, ::vnx::keyvalue::ServerBase& value, const TypeCode* type_code, const uint16_t* code) {
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
				vnx::read_value(_buf + _field->offset, value.max_block_size, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[4];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.rewrite_threshold, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[5];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.num_read_threads, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[6];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.max_queue_ms, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[7];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.do_verify_rewrite, _field->code.data());
			}
		}
	}
	for(const vnx::TypeField* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.update_topic, type_code, _field->code.data()); break;
			case 1: vnx::read(in, value.collection, type_code, _field->code.data()); break;
			case 2: vnx::read(in, value.storage_path, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::keyvalue::ServerBase& value, const TypeCode* type_code, const uint16_t* code) {
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::keyvalue::vnx_native_type_code_Server;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::keyvalue::ServerBase>(out);
	}
	if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(21);
	vnx::write_value(_buf + 0, value.max_block_size);
	vnx::write_value(_buf + 8, value.rewrite_threshold);
	vnx::write_value(_buf + 12, value.num_read_threads);
	vnx::write_value(_buf + 16, value.max_queue_ms);
	vnx::write_value(_buf + 20, value.do_verify_rewrite);
	vnx::write(out, value.update_topic, type_code, type_code->fields[0].code.data());
	vnx::write(out, value.collection, type_code, type_code->fields[1].code.data());
	vnx::write(out, value.storage_path, type_code, type_code->fields[2].code.data());
}

void read(std::istream& in, ::vnx::keyvalue::ServerBase& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::keyvalue::ServerBase& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::keyvalue::ServerBase& value) {
	value.accept(visitor);
}

} // vnx
