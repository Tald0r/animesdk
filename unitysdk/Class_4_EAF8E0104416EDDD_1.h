#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_EAF8E0104416EDDD_1_Struct_2_52AD02145F5FCE36_3.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Timeline { class ShadowsMidtonesHighlightsBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ShadowsMidtonesHighlights; }

#define CLASS_4_EAF8E0104416EDDD_1_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x7AB6340)
#define CLASS_4_EAF8E0104416EDDD_1_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x7AB6360)
#define CLASS_4_EAF8E0104416EDDD_1_METHOD_4_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x7AB4E10)
#define CLASS_4_EAF8E0104416EDDD_1_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x7AB6350)
#define CLASS_4_EAF8E0104416EDDD_1_METHOD_4_EBA44A5450C8B29F_OFFSET UNITYSDK_OFFSET(0x7AB5140)
#define CLASS_4_EAF8E0104416EDDD_1_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x7AB4FD0)
#define CLASS_4_EAF8E0104416EDDD_1_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x7AB5AC0)
#define CLASS_4_EAF8E0104416EDDD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x7AB62F0)

inline static constexpr unsigned int Class_4_EAF8E0104416EDDD_1_TypeDefinitionIndex = 39368;

class Class_4_EAF8E0104416EDDD_1 : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*, ::MoleMole::Timeline::ShadowsMidtonesHighlightsBehaviour*>
{
public:
	::System::Single Field_4_14; // 0x38
	::System::Boolean Field_4_15; // 0x3C
	::System::Boolean Field_4_9; // 0x3D
	::System::Boolean Field_4_3; // 0x3E
	::System::Boolean Field_4_16; // 0x3F
	::Class_4_EAF8E0104416EDDD_1_Struct_2_52AD02145F5FCE36_3 Field_4_0; // 0x40
	::System::Boolean Field_4_5; // 0xA0
	::System::Single Field_4_12; // 0xA4
	::UnityEngine::Vector4 Field_4_6; // 0xA8
	::UnityEngine::Vector4 Field_4_2; // 0xB8
	::System::Single Field_4_10; // 0xC8
	::UnityEngine::Vector4 Field_4_4; // 0xCC
	::System::Boolean Field_4_1; // 0xDC
	::System::Boolean Field_4_13; // 0xDD
	::System::Boolean Field_4_11; // 0xDE
	::System::Boolean Field_4_7; // 0xDF
	::System::Single Field_4_8; // 0xE0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_D737CD2779D51A4E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_1_METHOD_4_D737CD2779D51A4E_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_1_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_1_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_1_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_1_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_EBA44A5450C8B29F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_1_METHOD_4_EBA44A5450C8B29F_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_1_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};
