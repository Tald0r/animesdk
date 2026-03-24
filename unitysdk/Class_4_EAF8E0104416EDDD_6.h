#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_EAF8E0104416EDDD_6_Struct_2_52AD02145F5FCE36_31.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Timeline { class AutoExposureBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class AutoExposure; }

#define CLASS_4_EAF8E0104416EDDD_6_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x6430D40)
#define CLASS_4_EAF8E0104416EDDD_6_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x6430D60)
#define CLASS_4_EAF8E0104416EDDD_6_METHOD_4_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x642F9B0)
#define CLASS_4_EAF8E0104416EDDD_6_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x6430D50)
#define CLASS_4_EAF8E0104416EDDD_6_METHOD_4_EBA44A5450C8B29F_OFFSET UNITYSDK_OFFSET(0x642FC80)
#define CLASS_4_EAF8E0104416EDDD_6_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x642FB60)
#define CLASS_4_EAF8E0104416EDDD_6_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x6430570)
#define CLASS_4_EAF8E0104416EDDD_6__CTOR_OFFSET UNITYSDK_OFFSET(0x6430D00)

inline static constexpr unsigned int Class_4_EAF8E0104416EDDD_6_TypeDefinitionIndex = 67602;

class Class_4_EAF8E0104416EDDD_6 : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::AutoExposure*, ::MoleMole::Timeline::AutoExposureBehaviour*>
{
public:
	::System::Boolean Field_4_14; // 0x38
	::System::Boolean Field_4_11; // 0x39
	::System::Boolean Field_4_13; // 0x3A
	::Class_4_EAF8E0104416EDDD_6_Struct_2_52AD02145F5FCE36_31 Field_4_0; // 0x3C
	::UnityEngine::Vector2 Field_4_2; // 0x74
	::System::Boolean Field_4_8; // 0x7C
	::System::Boolean Field_4_7; // 0x7D
	::System::Boolean Field_4_9; // 0x7E
	::System::Boolean Field_4_1; // 0x7F
	::System::Single Field_4_10; // 0x80
	::UnityEngine::Vector2 Field_4_4; // 0x84
	::System::Single Field_4_6; // 0x8C
	::System::Boolean Field_4_3; // 0x90
	::System::Boolean Field_4_5; // 0x91
	::System::Single Field_4_12; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_6__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_D737CD2779D51A4E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_6_METHOD_4_D737CD2779D51A4E_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_6_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_6_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_6_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_6_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_EBA44A5450C8B29F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_6_METHOD_4_EBA44A5450C8B29F_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_6_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};
