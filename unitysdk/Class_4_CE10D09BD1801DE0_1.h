#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_CE10D09BD1801DE0_1_Struct_2_52AD02145F5FCE36_4.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Timeline { class ChromaticAberrationBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ChromaticAberration; }

#define CLASS_4_CE10D09BD1801DE0_1_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xF390E60)
#define CLASS_4_CE10D09BD1801DE0_1_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xF390E50)
#define CLASS_4_CE10D09BD1801DE0_1_METHOD_4_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0xF38F340)
#define CLASS_4_CE10D09BD1801DE0_1_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xF390E40)
#define CLASS_4_CE10D09BD1801DE0_1_METHOD_4_EBA44A5450C8B29F_OFFSET UNITYSDK_OFFSET(0xF38F710)
#define CLASS_4_CE10D09BD1801DE0_1_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xF38F560)
#define CLASS_4_CE10D09BD1801DE0_1_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xF390390)
#define CLASS_4_CE10D09BD1801DE0_1__CTOR_OFFSET UNITYSDK_OFFSET(0xF390DD0)

inline static constexpr unsigned int Class_4_CE10D09BD1801DE0_1_TypeDefinitionIndex = 40016;

class Class_4_CE10D09BD1801DE0_1 : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::ChromaticAberration*, ::MoleMole::Timeline::ChromaticAberrationBehaviour*>
{
public:
	::System::Single Field_4_10; // 0x38
	::UnityEngine::Color Field_4_8; // 0x3C
	::Class_4_CE10D09BD1801DE0_1_Struct_2_52AD02145F5FCE36_4 Field_4_0; // 0x4C
	::UnityEngine::Vector2 Field_4_4; // 0xC0
	::System::Boolean Field_4_11; // 0xC8
	::System::Boolean Field_4_13; // 0xC9
	::System::Boolean Field_4_9; // 0xCA
	::System::Boolean Field_4_20; // 0xCB
	::System::Single Field_4_14; // 0xCC
	::System::Boolean Field_4_3; // 0xD0
	::System::Boolean Field_4_19; // 0xD1
	::System::Boolean Field_4_17; // 0xD2
	::System::Boolean Field_4_15; // 0xD3
	::System::Single Field_4_18; // 0xD4
	::UnityEngine::Color Field_4_12; // 0xD8
	::System::Single Field_4_2; // 0xE8
	::System::Boolean Field_4_5; // 0xEC
	::System::Boolean Field_4_1; // 0xED
	::System::Boolean Field_4_7; // 0xEE
	::UnityEngine::Color Field_4_16; // 0xF0
	::System::Single Field_4_6; // 0x100

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_1_METHOD_4_9D8CB5E47C1952BD_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_1_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_1_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_1_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_EBA44A5450C8B29F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_1_METHOD_4_EBA44A5450C8B29F_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_1_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_1_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
