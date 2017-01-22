#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PostEffectsBase
struct  PostEffectsBase_t3757392499  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean PostEffectsBase::supportHDRTextures
	bool ___supportHDRTextures_2;
	// System.Boolean PostEffectsBase::supportDX11
	bool ___supportDX11_3;
	// System.Boolean PostEffectsBase::isSupported
	bool ___isSupported_4;

public:
	inline static int32_t get_offset_of_supportHDRTextures_2() { return static_cast<int32_t>(offsetof(PostEffectsBase_t3757392499, ___supportHDRTextures_2)); }
	inline bool get_supportHDRTextures_2() const { return ___supportHDRTextures_2; }
	inline bool* get_address_of_supportHDRTextures_2() { return &___supportHDRTextures_2; }
	inline void set_supportHDRTextures_2(bool value)
	{
		___supportHDRTextures_2 = value;
	}

	inline static int32_t get_offset_of_supportDX11_3() { return static_cast<int32_t>(offsetof(PostEffectsBase_t3757392499, ___supportDX11_3)); }
	inline bool get_supportDX11_3() const { return ___supportDX11_3; }
	inline bool* get_address_of_supportDX11_3() { return &___supportDX11_3; }
	inline void set_supportDX11_3(bool value)
	{
		___supportDX11_3 = value;
	}

	inline static int32_t get_offset_of_isSupported_4() { return static_cast<int32_t>(offsetof(PostEffectsBase_t3757392499, ___isSupported_4)); }
	inline bool get_isSupported_4() const { return ___isSupported_4; }
	inline bool* get_address_of_isSupported_4() { return &___isSupported_4; }
	inline void set_isSupported_4(bool value)
	{
		___isSupported_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
