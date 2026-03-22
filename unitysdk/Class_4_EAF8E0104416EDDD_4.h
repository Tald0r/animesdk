#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20577CF7FC6B1263.h"
#include "unitysdk/Class_4_EAF8E0104416EDDD_4_Struct_2_52AD02145F5FCE36_21.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SsrQuality.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class ScreenSpaceReflectionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ScreenSpaceReflection; }

#define CLASS_4_EAF8E0104416EDDD_4_METHOD_4_20A627803502A830_OFFSET UNITYSDK_OFFSET(0xB9D7860)
#define CLASS_4_EAF8E0104416EDDD_4_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xB9D8BE0)
#define CLASS_4_EAF8E0104416EDDD_4_METHOD_4_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xB9D75C0)
#define CLASS_4_EAF8E0104416EDDD_4_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xB9D8BD0)
#define CLASS_4_EAF8E0104416EDDD_4_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xB9D8BF0)
#define CLASS_4_EAF8E0104416EDDD_4_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xB9D7730)
#define CLASS_4_EAF8E0104416EDDD_4_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB9D8330)
#define CLASS_4_EAF8E0104416EDDD_4__CTOR_OFFSET UNITYSDK_OFFSET(0xB9D8B90)

inline static constexpr unsigned int Class_4_EAF8E0104416EDDD_4_TypeDefinitionIndex = 60831;

class Class_4_EAF8E0104416EDDD_4 : public ::Class_3_20577CF7FC6B1263<::UnityEngine::Rendering::Universal::ScreenSpaceReflection*, ::MoleMole::Timeline::ScreenSpaceReflectionBehaviour*>
{
public:
	::System::Boolean Field_4_16; // 0x38
	::System::Boolean Field_4_5; // 0x39
	::System::Boolean Field_4_15; // 0x3A
	::Class_4_EAF8E0104416EDDD_4_Struct_2_52AD02145F5FCE36_21 Field_4_0; // 0x3C
	::System::Single Field_4_4; // 0x6C
	::System::Boolean Field_4_11; // 0x70
	::System::Boolean Field_4_3; // 0x71
	::System::Boolean Field_4_9; // 0x72
	::System::Boolean Field_4_13; // 0x73
	::System::Single Field_4_6; // 0x74
	::System::Single Field_4_14; // 0x78
	::UnityEngine::NAPRenderPipeline0::SsrQuality Field_4_10; // 0x7C
	::System::Boolean Field_4_12; // 0x80
	::System::Boolean Field_4_1; // 0x81
	::System::Boolean Field_4_7; // 0x82
	::System::Boolean Field_4_2; // 0x83
	::System::Single Field_4_8; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_4_METHOD_4_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_4_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_4_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_4_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_4_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_20A627803502A830(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_4_METHOD_4_20A627803502A830_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_4_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
