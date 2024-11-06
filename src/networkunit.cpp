/*
	24.10.17
*/

#include "curl/curl.h"
#include "pbrp/networkunit.hpp"

namespace pbrp {

static size_t read_callback(
	const char *const dest,
	const size_t size,
	const size_t nmemb,
	std::vector<unsigned char> *const buffer
) {

	const size_t buffer_size = size * nmemb;

	if (buffer == nullptr || buffer_size == 0ul) {
		return 0ul;
	}

	buffer->resize(buffer_size);
	memcpy(buffer->data(), dest, buffer_size);

	return buffer_size;
}

class __CURL_GLOBAL_WRAPPER_t {

public:
	__CURL_GLOBAL_WRAPPER_t() {
		curl_global_init(CURL_GLOBAL_ALL);
	}

	~__CURL_GLOBAL_WRAPPER_t() {
		curl_global_cleanup();
	}

};

static const __CURL_GLOBAL_WRAPPER_t __CURL_GLOBAL_WRAPPER{};

NetworkUnit::NetworkUnit(const char *const url) : mPtr(curl_easy_init()) {

	curl_easy_setopt(mPtr, CURLOPT_URL, url);
	curl_easy_setopt(mPtr, CURLOPT_WRITEFUNCTION, read_callback);
	curl_easy_setopt(mPtr, CURLOPT_WRITEDATA, &mBuffer);

}

NetworkUnit::~NetworkUnit() {

	curl_easy_cleanup(mPtr);

}

bool NetworkUnit::NetUpdate(void *const dest, const size_t size) {

	const CURLcode rc = curl_easy_perform(mPtr);

	if (rc != CURLE_OK) {
		return false;
	}

	if (mBuffer.size() < size) {
		return false;
	}

	memcpy(dest, mBuffer.data(), size);
	mBuffer.clear();

	return true;
}

bool NetworkUnit::DEBUG_Update(
	void * const dest,
	const size_t size,
	void * const src
) {
	memcpy(dest, src, size);

	return true;
}

state_t NetworkUnit::GetNetworkState() const {
	return mNetworkState;
}

}