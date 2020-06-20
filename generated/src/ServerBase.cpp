
// AUTO GENERATED by vnxcppcodegen

#include <vnx/vnx.h>
#include <vnx/keyvalue/package.hxx>
#include <vnx/keyvalue/ServerBase.hxx>
#include <vnx/NoSuchMethod.hxx>
#include <vnx/Module.h>
#include <vnx/TopicPtr.hpp>
#include <vnx/Value.h>
#include <vnx/Variant.hpp>
#include <vnx/keyvalue/Server_delete_value.hxx>
#include <vnx/keyvalue/Server_delete_value_return.hxx>
#include <vnx/keyvalue/Server_get_value.hxx>
#include <vnx/keyvalue/Server_get_value_locked.hxx>
#include <vnx/keyvalue/Server_get_value_locked_return.hxx>
#include <vnx/keyvalue/Server_get_value_return.hxx>
#include <vnx/keyvalue/Server_get_values.hxx>
#include <vnx/keyvalue/Server_get_values_return.hxx>
#include <vnx/keyvalue/Server_store_value.hxx>
#include <vnx/keyvalue/Server_store_value_return.hxx>
#include <vnx/keyvalue/Server_store_values.hxx>
#include <vnx/keyvalue/Server_store_values_return.hxx>
#include <vnx/keyvalue/Server_sync_all.hxx>
#include <vnx/keyvalue/Server_sync_all_keys.hxx>
#include <vnx/keyvalue/Server_sync_all_keys_return.hxx>
#include <vnx/keyvalue/Server_sync_all_return.hxx>
#include <vnx/keyvalue/Server_sync_from.hxx>
#include <vnx/keyvalue/Server_sync_from_return.hxx>
#include <vnx/keyvalue/Server_sync_range.hxx>
#include <vnx/keyvalue/Server_sync_range_return.hxx>
#include <vnx/keyvalue/Server_unlock.hxx>
#include <vnx/keyvalue/Server_unlock_return.hxx>



namespace vnx {
namespace keyvalue {


const vnx::Hash64 ServerBase::VNX_TYPE_HASH(0xbb28aa6f1d808048ull);
const vnx::Hash64 ServerBase::VNX_CODE_HASH(0x46cfc16635bbae82ull);

ServerBase::ServerBase(const std::string& _vnx_name)
	:	Module::Module(_vnx_name)
{
	vnx::read_config(vnx_name + ".collection", collection);
	vnx::read_config(vnx_name + ".idle_rewrite_interval", idle_rewrite_interval);
	vnx::read_config(vnx_name + ".idle_rewrite_threshold", idle_rewrite_threshold);
	vnx::read_config(vnx_name + ".ignore_errors", ignore_errors);
	vnx::read_config(vnx_name + ".max_block_size", max_block_size);
	vnx::read_config(vnx_name + ".max_queue_ms", max_queue_ms);
	vnx::read_config(vnx_name + ".num_read_threads", num_read_threads);
	vnx::read_config(vnx_name + ".rewrite_chunk_count", rewrite_chunk_count);
	vnx::read_config(vnx_name + ".rewrite_chunk_size", rewrite_chunk_size);
	vnx::read_config(vnx_name + ".rewrite_interval", rewrite_interval);
	vnx::read_config(vnx_name + ".rewrite_threshold", rewrite_threshold);
	vnx::read_config(vnx_name + ".stats_interval_ms", stats_interval_ms);
	vnx::read_config(vnx_name + ".storage_path", storage_path);
	vnx::read_config(vnx_name + ".sync_chunk_count", sync_chunk_count);
	vnx::read_config(vnx_name + ".timeout_interval_ms", timeout_interval_ms);
	vnx::read_config(vnx_name + ".update_topic", update_topic);
	vnx::read_config(vnx_name + ".update_topic_keys", update_topic_keys);
}

vnx::Hash64 ServerBase::get_type_hash() const {
	return VNX_TYPE_HASH;
}

const char* ServerBase::get_type_name() const {
	return "vnx.keyvalue.Server";
}
const vnx::TypeCode* ServerBase::get_type_code() const {
	return vnx::keyvalue::vnx_native_type_code_ServerBase;
}

void ServerBase::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::keyvalue::vnx_native_type_code_ServerBase;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, update_topic);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, update_topic_keys);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, collection);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, storage_path);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, max_block_size);
	_visitor.type_field(_type_code->fields[5], 5); vnx::accept(_visitor, rewrite_chunk_size);
	_visitor.type_field(_type_code->fields[6], 6); vnx::accept(_visitor, rewrite_chunk_count);
	_visitor.type_field(_type_code->fields[7], 7); vnx::accept(_visitor, rewrite_threshold);
	_visitor.type_field(_type_code->fields[8], 8); vnx::accept(_visitor, idle_rewrite_threshold);
	_visitor.type_field(_type_code->fields[9], 9); vnx::accept(_visitor, rewrite_interval);
	_visitor.type_field(_type_code->fields[10], 10); vnx::accept(_visitor, idle_rewrite_interval);
	_visitor.type_field(_type_code->fields[11], 11); vnx::accept(_visitor, sync_chunk_count);
	_visitor.type_field(_type_code->fields[12], 12); vnx::accept(_visitor, max_queue_ms);
	_visitor.type_field(_type_code->fields[13], 13); vnx::accept(_visitor, num_read_threads);
	_visitor.type_field(_type_code->fields[14], 14); vnx::accept(_visitor, timeout_interval_ms);
	_visitor.type_field(_type_code->fields[15], 15); vnx::accept(_visitor, stats_interval_ms);
	_visitor.type_field(_type_code->fields[16], 16); vnx::accept(_visitor, ignore_errors);
	_visitor.type_end(*_type_code);
}

void ServerBase::write(std::ostream& _out) const {
	_out << "{\"__type\": \"vnx.keyvalue.Server\"";
	_out << ", \"update_topic\": "; vnx::write(_out, update_topic);
	_out << ", \"update_topic_keys\": "; vnx::write(_out, update_topic_keys);
	_out << ", \"collection\": "; vnx::write(_out, collection);
	_out << ", \"storage_path\": "; vnx::write(_out, storage_path);
	_out << ", \"max_block_size\": "; vnx::write(_out, max_block_size);
	_out << ", \"rewrite_chunk_size\": "; vnx::write(_out, rewrite_chunk_size);
	_out << ", \"rewrite_chunk_count\": "; vnx::write(_out, rewrite_chunk_count);
	_out << ", \"rewrite_threshold\": "; vnx::write(_out, rewrite_threshold);
	_out << ", \"idle_rewrite_threshold\": "; vnx::write(_out, idle_rewrite_threshold);
	_out << ", \"rewrite_interval\": "; vnx::write(_out, rewrite_interval);
	_out << ", \"idle_rewrite_interval\": "; vnx::write(_out, idle_rewrite_interval);
	_out << ", \"sync_chunk_count\": "; vnx::write(_out, sync_chunk_count);
	_out << ", \"max_queue_ms\": "; vnx::write(_out, max_queue_ms);
	_out << ", \"num_read_threads\": "; vnx::write(_out, num_read_threads);
	_out << ", \"timeout_interval_ms\": "; vnx::write(_out, timeout_interval_ms);
	_out << ", \"stats_interval_ms\": "; vnx::write(_out, stats_interval_ms);
	_out << ", \"ignore_errors\": "; vnx::write(_out, ignore_errors);
	_out << "}";
}

void ServerBase::read(std::istream& _in) {
	std::map<std::string, std::string> _object;
	vnx::read_object(_in, _object);
	for(const auto& _entry : _object) {
		if(_entry.first == "collection") {
			vnx::from_string(_entry.second, collection);
		} else if(_entry.first == "idle_rewrite_interval") {
			vnx::from_string(_entry.second, idle_rewrite_interval);
		} else if(_entry.first == "idle_rewrite_threshold") {
			vnx::from_string(_entry.second, idle_rewrite_threshold);
		} else if(_entry.first == "ignore_errors") {
			vnx::from_string(_entry.second, ignore_errors);
		} else if(_entry.first == "max_block_size") {
			vnx::from_string(_entry.second, max_block_size);
		} else if(_entry.first == "max_queue_ms") {
			vnx::from_string(_entry.second, max_queue_ms);
		} else if(_entry.first == "num_read_threads") {
			vnx::from_string(_entry.second, num_read_threads);
		} else if(_entry.first == "rewrite_chunk_count") {
			vnx::from_string(_entry.second, rewrite_chunk_count);
		} else if(_entry.first == "rewrite_chunk_size") {
			vnx::from_string(_entry.second, rewrite_chunk_size);
		} else if(_entry.first == "rewrite_interval") {
			vnx::from_string(_entry.second, rewrite_interval);
		} else if(_entry.first == "rewrite_threshold") {
			vnx::from_string(_entry.second, rewrite_threshold);
		} else if(_entry.first == "stats_interval_ms") {
			vnx::from_string(_entry.second, stats_interval_ms);
		} else if(_entry.first == "storage_path") {
			vnx::from_string(_entry.second, storage_path);
		} else if(_entry.first == "sync_chunk_count") {
			vnx::from_string(_entry.second, sync_chunk_count);
		} else if(_entry.first == "timeout_interval_ms") {
			vnx::from_string(_entry.second, timeout_interval_ms);
		} else if(_entry.first == "update_topic") {
			vnx::from_string(_entry.second, update_topic);
		} else if(_entry.first == "update_topic_keys") {
			vnx::from_string(_entry.second, update_topic_keys);
		}
	}
}

vnx::Object ServerBase::to_object() const {
	vnx::Object _object;
	_object["__type"] = "vnx.keyvalue.Server";
	_object["update_topic"] = update_topic;
	_object["update_topic_keys"] = update_topic_keys;
	_object["collection"] = collection;
	_object["storage_path"] = storage_path;
	_object["max_block_size"] = max_block_size;
	_object["rewrite_chunk_size"] = rewrite_chunk_size;
	_object["rewrite_chunk_count"] = rewrite_chunk_count;
	_object["rewrite_threshold"] = rewrite_threshold;
	_object["idle_rewrite_threshold"] = idle_rewrite_threshold;
	_object["rewrite_interval"] = rewrite_interval;
	_object["idle_rewrite_interval"] = idle_rewrite_interval;
	_object["sync_chunk_count"] = sync_chunk_count;
	_object["max_queue_ms"] = max_queue_ms;
	_object["num_read_threads"] = num_read_threads;
	_object["timeout_interval_ms"] = timeout_interval_ms;
	_object["stats_interval_ms"] = stats_interval_ms;
	_object["ignore_errors"] = ignore_errors;
	return _object;
}

void ServerBase::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "collection") {
			_entry.second.to(collection);
		} else if(_entry.first == "idle_rewrite_interval") {
			_entry.second.to(idle_rewrite_interval);
		} else if(_entry.first == "idle_rewrite_threshold") {
			_entry.second.to(idle_rewrite_threshold);
		} else if(_entry.first == "ignore_errors") {
			_entry.second.to(ignore_errors);
		} else if(_entry.first == "max_block_size") {
			_entry.second.to(max_block_size);
		} else if(_entry.first == "max_queue_ms") {
			_entry.second.to(max_queue_ms);
		} else if(_entry.first == "num_read_threads") {
			_entry.second.to(num_read_threads);
		} else if(_entry.first == "rewrite_chunk_count") {
			_entry.second.to(rewrite_chunk_count);
		} else if(_entry.first == "rewrite_chunk_size") {
			_entry.second.to(rewrite_chunk_size);
		} else if(_entry.first == "rewrite_interval") {
			_entry.second.to(rewrite_interval);
		} else if(_entry.first == "rewrite_threshold") {
			_entry.second.to(rewrite_threshold);
		} else if(_entry.first == "stats_interval_ms") {
			_entry.second.to(stats_interval_ms);
		} else if(_entry.first == "storage_path") {
			_entry.second.to(storage_path);
		} else if(_entry.first == "sync_chunk_count") {
			_entry.second.to(sync_chunk_count);
		} else if(_entry.first == "timeout_interval_ms") {
			_entry.second.to(timeout_interval_ms);
		} else if(_entry.first == "update_topic") {
			_entry.second.to(update_topic);
		} else if(_entry.first == "update_topic_keys") {
			_entry.second.to(update_topic_keys);
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
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> ServerBase::static_create_type_code() {
	std::shared_ptr<vnx::TypeCode> type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.keyvalue.Server";
	type_code->type_hash = vnx::Hash64(0xbb28aa6f1d808048ull);
	type_code->code_hash = vnx::Hash64(0x46cfc16635bbae82ull);
	type_code->is_native = true;
	type_code->methods.resize(11);
	type_code->methods[0] = ::vnx::keyvalue::Server_delete_value::static_get_type_code();
	type_code->methods[1] = ::vnx::keyvalue::Server_get_value::static_get_type_code();
	type_code->methods[2] = ::vnx::keyvalue::Server_get_value_locked::static_get_type_code();
	type_code->methods[3] = ::vnx::keyvalue::Server_get_values::static_get_type_code();
	type_code->methods[4] = ::vnx::keyvalue::Server_store_value::static_get_type_code();
	type_code->methods[5] = ::vnx::keyvalue::Server_store_values::static_get_type_code();
	type_code->methods[6] = ::vnx::keyvalue::Server_sync_all::static_get_type_code();
	type_code->methods[7] = ::vnx::keyvalue::Server_sync_all_keys::static_get_type_code();
	type_code->methods[8] = ::vnx::keyvalue::Server_sync_from::static_get_type_code();
	type_code->methods[9] = ::vnx::keyvalue::Server_sync_range::static_get_type_code();
	type_code->methods[10] = ::vnx::keyvalue::Server_unlock::static_get_type_code();
	type_code->fields.resize(17);
	{
		vnx::TypeField& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "update_topic";
		field.code = {12, 5};
	}
	{
		vnx::TypeField& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "update_topic_keys";
		field.code = {12, 5};
	}
	{
		vnx::TypeField& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "collection";
		field.value = vnx::to_string("storage");
		field.code = {12, 5};
	}
	{
		vnx::TypeField& field = type_code->fields[3];
		field.is_extended = true;
		field.name = "storage_path";
		field.code = {12, 5};
	}
	{
		vnx::TypeField& field = type_code->fields[4];
		field.name = "max_block_size";
		field.value = vnx::to_string(268435456);
		field.code = {8};
	}
	{
		vnx::TypeField& field = type_code->fields[5];
		field.name = "rewrite_chunk_size";
		field.value = vnx::to_string(4194304);
		field.code = {7};
	}
	{
		vnx::TypeField& field = type_code->fields[6];
		field.name = "rewrite_chunk_count";
		field.value = vnx::to_string(1000);
		field.code = {7};
	}
	{
		vnx::TypeField& field = type_code->fields[7];
		field.name = "rewrite_threshold";
		field.value = vnx::to_string(0.5);
		field.code = {9};
	}
	{
		vnx::TypeField& field = type_code->fields[8];
		field.name = "idle_rewrite_threshold";
		field.value = vnx::to_string(0.9);
		field.code = {9};
	}
	{
		vnx::TypeField& field = type_code->fields[9];
		field.name = "rewrite_interval";
		field.value = vnx::to_string(10);
		field.code = {7};
	}
	{
		vnx::TypeField& field = type_code->fields[10];
		field.name = "idle_rewrite_interval";
		field.value = vnx::to_string(1000);
		field.code = {7};
	}
	{
		vnx::TypeField& field = type_code->fields[11];
		field.name = "sync_chunk_count";
		field.value = vnx::to_string(100);
		field.code = {7};
	}
	{
		vnx::TypeField& field = type_code->fields[12];
		field.name = "max_queue_ms";
		field.value = vnx::to_string(1000);
		field.code = {7};
	}
	{
		vnx::TypeField& field = type_code->fields[13];
		field.name = "num_read_threads";
		field.value = vnx::to_string(1);
		field.code = {7};
	}
	{
		vnx::TypeField& field = type_code->fields[14];
		field.name = "timeout_interval_ms";
		field.value = vnx::to_string(100);
		field.code = {7};
	}
	{
		vnx::TypeField& field = type_code->fields[15];
		field.name = "stats_interval_ms";
		field.value = vnx::to_string(3000);
		field.code = {7};
	}
	{
		vnx::TypeField& field = type_code->fields[16];
		field.name = "ignore_errors";
		field.value = vnx::to_string(false);
		field.code = {1};
	}
	type_code->build();
	return type_code;
}

void ServerBase::vnx_handle_switch(std::shared_ptr<const vnx::Sample> _sample) {
}

std::shared_ptr<vnx::Value> ServerBase::vnx_call_switch(std::shared_ptr<const vnx::Value> _method, const vnx::request_id_t& _request_id) {
	const auto _type_hash = _method->get_type_hash();
	if(_type_hash == vnx::Hash64(0xf5f6c0eca92f8e82ull)) {
		auto _args = std::dynamic_pointer_cast<const ::vnx::keyvalue::Server_delete_value>(_method);
		if(!_args) {
			throw std::logic_error("vnx_call_switch(): !_args");
		}
		auto _return_value = ::vnx::keyvalue::Server_delete_value_return::create();
		delete_value(_args->key);
		return _return_value;
	} else if(_type_hash == vnx::Hash64(0xe2ff2d7a976abdb8ull)) {
		auto _args = std::dynamic_pointer_cast<const ::vnx::keyvalue::Server_get_value>(_method);
		if(!_args) {
			throw std::logic_error("vnx_call_switch(): !_args");
		}
		get_value_async(_args->key, _request_id);
		return 0;
	} else if(_type_hash == vnx::Hash64(0x99472796c5804f63ull)) {
		auto _args = std::dynamic_pointer_cast<const ::vnx::keyvalue::Server_get_value_locked>(_method);
		if(!_args) {
			throw std::logic_error("vnx_call_switch(): !_args");
		}
		get_value_locked_async(_args->key, _args->timeout_ms, _request_id);
		return 0;
	} else if(_type_hash == vnx::Hash64(0x29edfe1764d9e55ull)) {
		auto _args = std::dynamic_pointer_cast<const ::vnx::keyvalue::Server_get_values>(_method);
		if(!_args) {
			throw std::logic_error("vnx_call_switch(): !_args");
		}
		get_values_async(_args->keys, _request_id);
		return 0;
	} else if(_type_hash == vnx::Hash64(0xf6bea692aee1018cull)) {
		auto _args = std::dynamic_pointer_cast<const ::vnx::keyvalue::Server_store_value>(_method);
		if(!_args) {
			throw std::logic_error("vnx_call_switch(): !_args");
		}
		auto _return_value = ::vnx::keyvalue::Server_store_value_return::create();
		store_value(_args->key, _args->value);
		return _return_value;
	} else if(_type_hash == vnx::Hash64(0xfff6bea692aee101ull)) {
		auto _args = std::dynamic_pointer_cast<const ::vnx::keyvalue::Server_store_values>(_method);
		if(!_args) {
			throw std::logic_error("vnx_call_switch(): !_args");
		}
		auto _return_value = ::vnx::keyvalue::Server_store_values_return::create();
		store_values(_args->values);
		return _return_value;
	} else if(_type_hash == vnx::Hash64(0x6173affeadaf11ddull)) {
		auto _args = std::dynamic_pointer_cast<const ::vnx::keyvalue::Server_sync_all>(_method);
		if(!_args) {
			throw std::logic_error("vnx_call_switch(): !_args");
		}
		auto _return_value = ::vnx::keyvalue::Server_sync_all_return::create();
		_return_value->_ret_0 = sync_all(_args->topic);
		return _return_value;
	} else if(_type_hash == vnx::Hash64(0x5f4cae900d6d7f69ull)) {
		auto _args = std::dynamic_pointer_cast<const ::vnx::keyvalue::Server_sync_all_keys>(_method);
		if(!_args) {
			throw std::logic_error("vnx_call_switch(): !_args");
		}
		auto _return_value = ::vnx::keyvalue::Server_sync_all_keys_return::create();
		_return_value->_ret_0 = sync_all_keys(_args->topic);
		return _return_value;
	} else if(_type_hash == vnx::Hash64(0xc10ef313be34be0full)) {
		auto _args = std::dynamic_pointer_cast<const ::vnx::keyvalue::Server_sync_from>(_method);
		if(!_args) {
			throw std::logic_error("vnx_call_switch(): !_args");
		}
		auto _return_value = ::vnx::keyvalue::Server_sync_from_return::create();
		_return_value->_ret_0 = sync_from(_args->topic, _args->version);
		return _return_value;
	} else if(_type_hash == vnx::Hash64(0x21592a9e03b544fdull)) {
		auto _args = std::dynamic_pointer_cast<const ::vnx::keyvalue::Server_sync_range>(_method);
		if(!_args) {
			throw std::logic_error("vnx_call_switch(): !_args");
		}
		auto _return_value = ::vnx::keyvalue::Server_sync_range_return::create();
		_return_value->_ret_0 = sync_range(_args->topic, _args->begin, _args->end);
		return _return_value;
	} else if(_type_hash == vnx::Hash64(0xfd9d27aa50baa773ull)) {
		auto _args = std::dynamic_pointer_cast<const ::vnx::keyvalue::Server_unlock>(_method);
		if(!_args) {
			throw std::logic_error("vnx_call_switch(): !_args");
		}
		auto _return_value = ::vnx::keyvalue::Server_unlock_return::create();
		unlock(_args->key);
		return _return_value;
	}
	auto _ex = vnx::NoSuchMethod::create();
	_ex->dst_mac = vnx_request ? vnx_request->dst_mac : 0;
	_ex->method = _method->get_type_name();
	return _ex;
}

void ServerBase::get_value_async_return(const vnx::request_id_t& _request_id, const std::shared_ptr<const ::vnx::Value>& _ret_0) const {
	auto _return_value = ::vnx::keyvalue::Server_get_value_return::create();
	_return_value->_ret_0 = _ret_0;
	vnx_async_callback(_request_id, _return_value);
}

void ServerBase::get_value_locked_async_return(const vnx::request_id_t& _request_id, const std::pair<::vnx::Variant, std::shared_ptr<const ::vnx::Value>>& _ret_0) const {
	auto _return_value = ::vnx::keyvalue::Server_get_value_locked_return::create();
	_return_value->_ret_0 = _ret_0;
	vnx_async_callback(_request_id, _return_value);
}

void ServerBase::get_values_async_return(const vnx::request_id_t& _request_id, const std::vector<std::shared_ptr<const ::vnx::Value>>& _ret_0) const {
	auto _return_value = ::vnx::keyvalue::Server_get_values_return::create();
	_return_value->_ret_0 = _ret_0;
	vnx_async_callback(_request_id, _return_value);
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
			const vnx::TypeField* const _field = type_code->field_map[4];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.max_block_size, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[5];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.rewrite_chunk_size, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[6];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.rewrite_chunk_count, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[7];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.rewrite_threshold, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[8];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.idle_rewrite_threshold, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[9];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.rewrite_interval, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[10];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.idle_rewrite_interval, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[11];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.sync_chunk_count, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[12];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.max_queue_ms, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[13];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.num_read_threads, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[14];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.timeout_interval_ms, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[15];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.stats_interval_ms, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[16];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.ignore_errors, _field->code.data());
			}
		}
	}
	for(const vnx::TypeField* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.update_topic, type_code, _field->code.data()); break;
			case 1: vnx::read(in, value.update_topic_keys, type_code, _field->code.data()); break;
			case 2: vnx::read(in, value.collection, type_code, _field->code.data()); break;
			case 3: vnx::read(in, value.storage_path, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::keyvalue::ServerBase& value, const TypeCode* type_code, const uint16_t* code) {
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::keyvalue::vnx_native_type_code_ServerBase;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::keyvalue::ServerBase>(out);
	}
	if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(53);
	vnx::write_value(_buf + 0, value.max_block_size);
	vnx::write_value(_buf + 8, value.rewrite_chunk_size);
	vnx::write_value(_buf + 12, value.rewrite_chunk_count);
	vnx::write_value(_buf + 16, value.rewrite_threshold);
	vnx::write_value(_buf + 20, value.idle_rewrite_threshold);
	vnx::write_value(_buf + 24, value.rewrite_interval);
	vnx::write_value(_buf + 28, value.idle_rewrite_interval);
	vnx::write_value(_buf + 32, value.sync_chunk_count);
	vnx::write_value(_buf + 36, value.max_queue_ms);
	vnx::write_value(_buf + 40, value.num_read_threads);
	vnx::write_value(_buf + 44, value.timeout_interval_ms);
	vnx::write_value(_buf + 48, value.stats_interval_ms);
	vnx::write_value(_buf + 52, value.ignore_errors);
	vnx::write(out, value.update_topic, type_code, type_code->fields[0].code.data());
	vnx::write(out, value.update_topic_keys, type_code, type_code->fields[1].code.data());
	vnx::write(out, value.collection, type_code, type_code->fields[2].code.data());
	vnx::write(out, value.storage_path, type_code, type_code->fields[3].code.data());
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
