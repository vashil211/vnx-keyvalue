
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_keyvalue_CacheBase_HXX_
#define INCLUDE_vnx_keyvalue_CacheBase_HXX_

#include <vnx/keyvalue/package.hxx>
#include <vnx/Module.h>
#include <vnx/TopicPtr.hpp>
#include <vnx/Value.h>
#include <vnx/Variant.hpp>
#include <vnx/keyvalue/Entry.hxx>


namespace vnx {
namespace keyvalue {

class CacheBase : public ::vnx::Module {
public:
	
	
	typedef ::vnx::Module Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	CacheBase(const std::string& _vnx_name);
	
	vnx::Hash64 get_type_hash() const;
	const char* get_type_name() const;
	const vnx::TypeCode* get_type_code() const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	void accept(vnx::Visitor& _visitor) const;
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	vnx::Variant get_field(const std::string& name) const;
	void set_field(const std::string& name, const vnx::Variant& value);
	
	friend std::ostream& operator<<(std::ostream& _out, const CacheBase& _value);
	friend std::istream& operator>>(std::istream& _in, CacheBase& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
protected:
	virtual void get_value_async(const ::vnx::Variant& key, const vnx::request_id_t& _request_id) const = 0;
	void get_value_async_return(const vnx::request_id_t& _request_id, const std::shared_ptr<const ::vnx::keyvalue::Entry>& _ret_0) const;
	virtual void get_value_locked_async(const ::vnx::Variant& key, const int32_t& timeout_ms, const vnx::request_id_t& _request_id) const = 0;
	void get_value_locked_async_return(const vnx::request_id_t& _request_id, const std::shared_ptr<const ::vnx::keyvalue::Entry>& _ret_0) const;
	virtual void get_values_async(const std::vector<::vnx::Variant>& keys, const vnx::request_id_t& _request_id) const = 0;
	void get_values_async_return(const vnx::request_id_t& _request_id, const std::vector<std::shared_ptr<const ::vnx::keyvalue::Entry>>& _ret_0) const;
	virtual void get_key_async(const uint64_t& version, const vnx::request_id_t& _request_id) const = 0;
	void get_key_async_return(const vnx::request_id_t& _request_id, const ::vnx::Variant& _ret_0) const;
	virtual void get_keys_async(const std::vector<uint64_t>& versions, const vnx::request_id_t& _request_id) const = 0;
	void get_keys_async_return(const vnx::request_id_t& _request_id, const std::vector<std::pair<uint64_t, ::vnx::Variant>>& _ret_0) const;
	virtual void unlock(const ::vnx::Variant& key) = 0;
	virtual int64_t sync_from(const ::vnx::TopicPtr& topic, const uint64_t& version) const = 0;
	virtual int64_t sync_range(const ::vnx::TopicPtr& topic, const uint64_t& begin, const uint64_t& end) const = 0;
	virtual int64_t sync_all(const ::vnx::TopicPtr& topic) const = 0;
	virtual int64_t sync_all_keys(const ::vnx::TopicPtr& topic) const = 0;
	virtual void cancel_sync_job(const int64_t& job_id) = 0;
	virtual void store_value(const ::vnx::Variant& key, const std::shared_ptr<const ::vnx::Value>& value) = 0;
	virtual void store_values(const std::vector<std::pair<::vnx::Variant, std::shared_ptr<const ::vnx::Value>>>& values) = 0;
	virtual void store_value_delay(const ::vnx::Variant& key, const std::shared_ptr<const ::vnx::Value>& value, const int32_t& delay_ms) = 0;
	virtual void store_values_delay(const std::vector<std::pair<::vnx::Variant, std::shared_ptr<const ::vnx::Value>>>& values, const int32_t& delay_ms) = 0;
	virtual void delete_value(const ::vnx::Variant& key) = 0;
	
	void vnx_handle_switch(std::shared_ptr<const vnx::Sample> _sample) override;
	std::shared_ptr<vnx::Value> vnx_call_switch(std::shared_ptr<const vnx::Value> _method, const vnx::request_id_t& _request_id) override;
	
};


} // namespace vnx
} // namespace keyvalue

#endif // INCLUDE_vnx_keyvalue_CacheBase_HXX_
