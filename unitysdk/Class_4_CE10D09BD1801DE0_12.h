#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_CE10D09BD1801DE0_12_Struct_2_52AD02145F5FCE3A_19.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Timeline { class LensDirtBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class LensDirt; }

#define CLASS_4_CE10D09BD1801DE0_12_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x742B9A0)
#define CLASS_4_CE10D09BD1801DE0_12_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x742B980)
#define CLASS_4_CE10D09BD1801DE0_12_METHOD_4_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0x742A2A0)
#define CLASS_4_CE10D09BD1801DE0_12_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x742B990)
#define CLASS_4_CE10D09BD1801DE0_12_METHOD_4_EBA44A5450C8B29F_OFFSET UNITYSDK_OFFSET(0x742A620)
#define CLASS_4_CE10D09BD1801DE0_12_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x742A4C0)
#define CLASS_4_CE10D09BD1801DE0_12_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x742B060)
#define CLASS_4_CE10D09BD1801DE0_12__CTOR_OFFSET UNITYSDK_OFFSET(0x742B950)

inline static constexpr unsigned int Class_4_CE10D09BD1801DE0_12_TypeDefinitionIndex = 57787;

class Class_4_CE10D09BD1801DE0_12 : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::LensDirt*, ::MoleMole::Timeline::LensDirtBehaviour*>
{
public:
	::UnityEngine::Texture* Field_4_10; // 0x38
	::Class_4_CE10D09BD1801DE0_12_Struct_2_52AD02145F5FCE3A_19 Field_4_0; // 0x40
	::UnityEngine::Texture* Field_4_2; // 0xA0
	::System::Single Field_4_14; // 0xA8
	::System::Single Field_4_6; // 0xAC
	::System::Boolean Field_4_16; // 0xB0
	::System::Boolean Field_4_7; // 0xB1
	::System::Boolean Field_4_1; // 0xB2
	::System::Boolean Field_4_15; // 0xB3
	::System::Boolean Field_4_4; // 0xB4
	::System::Boolean Field_4_9; // 0xB5
	::System::Boolean Field_4_11; // 0xB6
	::System::Boolean Field_4_5; // 0xB7
	::UnityEngine::Vector4 Field_4_12; // 0xB8
	::System::Boolean Field_4_13; // 0xC8
	::System::Boolean Field_4_3; // 0xC9
	::UnityEngine::Vector4 Field_4_8; // 0xCC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_12__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_12_METHOD_4_9D8CB5E47C1952BD_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_12_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_12_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_12_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_EBA44A5450C8B29F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_12_METHOD_4_EBA44A5450C8B29F_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_12_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_12_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
