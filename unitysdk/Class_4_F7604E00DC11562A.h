#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_F7604E00DC11562A_Struct_2_E658502528B7C034_2.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class PaniniProjectionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class PaniniProjection; }

#define CLASS_4_F7604E00DC11562A_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xA3FD820)
#define CLASS_4_F7604E00DC11562A_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xA3FD830)
#define CLASS_4_F7604E00DC11562A_METHOD_4_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA3FCD60)
#define CLASS_4_F7604E00DC11562A_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xA3FD810)
#define CLASS_4_F7604E00DC11562A_METHOD_4_EBA44A5450C8B29F_OFFSET UNITYSDK_OFFSET(0xA3FCED0)
#define CLASS_4_F7604E00DC11562A_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xA3FCE10)
#define CLASS_4_F7604E00DC11562A_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xA3FD2B0)
#define CLASS_4_F7604E00DC11562A__CTOR_OFFSET UNITYSDK_OFFSET(0xA3FD7F0)

inline static constexpr unsigned int Class_4_F7604E00DC11562A_TypeDefinitionIndex = 55194;

class Class_4_F7604E00DC11562A : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::PaniniProjection*, ::MoleMole::Timeline::PaniniProjectionBehaviour*>
{
public:
	::Class_4_F7604E00DC11562A_Struct_2_E658502528B7C034_2 Field_4_0; // 0x38
	::System::Single Field_4_4; // 0x4C
	::System::Single Field_4_2; // 0x50
	::System::Boolean Field_4_6; // 0x54
	::System::Boolean Field_4_5; // 0x55
	::System::Boolean Field_4_1; // 0x56
	::System::Boolean Field_4_3; // 0x57

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A_METHOD_4_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_EBA44A5450C8B29F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A_METHOD_4_EBA44A5450C8B29F_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};
