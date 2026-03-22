#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20577CF7FC6B1263.h"
#include "unitysdk/Class_4_EAF8E0104416EDDD_3_Struct_2_52AD02145F5FCE36_17.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Timeline { class ShadowsMidtonesHighlightsBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ShadowsMidtonesHighlights; }

#define CLASS_4_EAF8E0104416EDDD_3_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x5EB5100)
#define CLASS_4_EAF8E0104416EDDD_3_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x5EB5120)
#define CLASS_4_EAF8E0104416EDDD_3_METHOD_4_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x5EB3BF0)
#define CLASS_4_EAF8E0104416EDDD_3_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x5EB5110)
#define CLASS_4_EAF8E0104416EDDD_3_METHOD_4_EBA44A5450C8B29F_OFFSET UNITYSDK_OFFSET(0x5EB3EF0)
#define CLASS_4_EAF8E0104416EDDD_3_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x5EB3D90)
#define CLASS_4_EAF8E0104416EDDD_3_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x5EB4880)
#define CLASS_4_EAF8E0104416EDDD_3__CTOR_OFFSET UNITYSDK_OFFSET(0x5EB50B0)

inline static constexpr unsigned int Class_4_EAF8E0104416EDDD_3_TypeDefinitionIndex = 50955;

class Class_4_EAF8E0104416EDDD_3 : public ::Class_3_20577CF7FC6B1263<::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*, ::MoleMole::Timeline::ShadowsMidtonesHighlightsBehaviour*>
{
public:
	::System::Boolean Field_4_1; // 0x38
	::System::Boolean Field_4_5; // 0x39
	::System::Boolean Field_4_7; // 0x3A
	::System::Boolean Field_4_15; // 0x3B
	::System::Boolean Field_4_3; // 0x3C
	::System::Boolean Field_4_11; // 0x3D
	::System::Boolean Field_4_13; // 0x3E
	::System::Boolean Field_4_9; // 0x3F
	::System::Boolean Field_4_16; // 0x40
	::System::Single Field_4_12; // 0x44
	::UnityEngine::Vector4 Field_4_4; // 0x48
	::System::Single Field_4_14; // 0x58
	::System::Single Field_4_10; // 0x5C
	::Class_4_EAF8E0104416EDDD_3_Struct_2_52AD02145F5FCE36_17 Field_4_0; // 0x60
	::UnityEngine::Vector4 Field_4_2; // 0xC0
	::System::Single Field_4_8; // 0xD0
	::UnityEngine::Vector4 Field_4_6; // 0xD4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_D737CD2779D51A4E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_3_METHOD_4_D737CD2779D51A4E_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_3_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_3_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_EBA44A5450C8B29F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_3_METHOD_4_EBA44A5450C8B29F_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_3_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_3_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_3_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};
