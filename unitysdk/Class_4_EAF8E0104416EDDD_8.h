#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20577CF7FC6B1263.h"
#include "unitysdk/Class_4_EAF8E0104416EDDD_8_Struct_2_52AD02145F5FCE36_33.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class ScreenSpacePlanarReflectionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ScreenSpacePlanarReflection; }

#define CLASS_4_EAF8E0104416EDDD_8_METHOD_4_20A627803502A830_OFFSET UNITYSDK_OFFSET(0xB98FD60)
#define CLASS_4_EAF8E0104416EDDD_8_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xB991430)
#define CLASS_4_EAF8E0104416EDDD_8_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xB991410)
#define CLASS_4_EAF8E0104416EDDD_8_METHOD_4_D87A7D8243E04FD7_OFFSET UNITYSDK_OFFSET(0xB98F9F0)
#define CLASS_4_EAF8E0104416EDDD_8_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xB991420)
#define CLASS_4_EAF8E0104416EDDD_8_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xB98FBF0)
#define CLASS_4_EAF8E0104416EDDD_8_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB990A40)
#define CLASS_4_EAF8E0104416EDDD_8__CTOR_OFFSET UNITYSDK_OFFSET(0xB9913D0)

inline static constexpr unsigned int Class_4_EAF8E0104416EDDD_8_TypeDefinitionIndex = 68598;

class Class_4_EAF8E0104416EDDD_8 : public ::Class_3_20577CF7FC6B1263<::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*, ::MoleMole::Timeline::ScreenSpacePlanarReflectionBehaviour*>
{
public:
	::System::Boolean Field_4_11; // 0x38
	::System::Boolean Field_4_2; // 0x39
	::System::Boolean Field_4_3; // 0x3A
	::System::Boolean Field_4_5; // 0x3B
	::System::Boolean Field_4_20; // 0x3C
	::System::Boolean Field_4_15; // 0x3D
	::System::Single Field_4_6; // 0x40
	::System::Single Field_4_14; // 0x44
	::System::Single Field_4_8; // 0x48
	::Class_4_EAF8E0104416EDDD_8_Struct_2_52AD02145F5FCE36_33 Field_4_0; // 0x4C
	::System::Single Field_4_16; // 0x8C
	::System::Single Field_4_10; // 0x90
	::System::Single Field_4_4; // 0x94
	::System::Boolean Field_4_9; // 0x98
	::System::Boolean Field_4_17; // 0x99
	::System::Boolean Field_4_19; // 0x9A
	::System::Boolean Field_4_13; // 0x9B
	::System::Boolean Field_4_12; // 0x9C
	::System::Boolean Field_4_7; // 0x9D
	::System::Boolean Field_4_1; // 0x9E
	::System::Single Field_4_18; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_8__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_D87A7D8243E04FD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_8_METHOD_4_D87A7D8243E04FD7_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_8_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_8_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_8_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_8_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_8_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_20A627803502A830(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_8_METHOD_4_20A627803502A830_OFFSET))(this, a1);
	}
};
