#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_F7604E00DC11562A_1_Struct_2_E658502528B7C034_3.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class CharacterVolumeProxyBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class CharacterVolumeProxy; }

#define CLASS_4_F7604E00DC11562A_1_METHOD_4_1AFECFC1476AD233_OFFSET UNITYSDK_OFFSET(0x6472580)
#define CLASS_4_F7604E00DC11562A_1_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x6472D70)
#define CLASS_4_F7604E00DC11562A_1_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x6472D50)
#define CLASS_4_F7604E00DC11562A_1_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x6472440)
#define CLASS_4_F7604E00DC11562A_1_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x6472D60)
#define CLASS_4_F7604E00DC11562A_1_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x64724D0)
#define CLASS_4_F7604E00DC11562A_1_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x6472850)
#define CLASS_4_F7604E00DC11562A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x6472D40)

inline static constexpr unsigned int Class_4_F7604E00DC11562A_1_TypeDefinitionIndex = 56642;

class Class_4_F7604E00DC11562A_1 : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::CharacterVolumeProxy*, ::MoleMole::Timeline::CharacterVolumeProxyBehaviour*>
{
public:
	::Class_4_F7604E00DC11562A_1_Struct_2_E658502528B7C034_3 Field_4_0; // 0x38
	::System::Boolean Field_4_3; // 0x44
	::System::Boolean Field_4_4; // 0x45
	::System::Boolean Field_4_1; // 0x46
	::System::Single Field_4_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A_1_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A_1_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A_1_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_1AFECFC1476AD233(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A_1_METHOD_4_1AFECFC1476AD233_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A_1_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A_1_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A_1_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
