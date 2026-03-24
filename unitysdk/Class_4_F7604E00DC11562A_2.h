#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_F7604E00DC11562A_2_Struct_2_E658502528B7C034_5.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class FXComicDotBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class FXComicDot; }

#define CLASS_4_F7604E00DC11562A_2_METHOD_4_20A627803502A830_OFFSET UNITYSDK_OFFSET(0x63F1050)
#define CLASS_4_F7604E00DC11562A_2_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x63F1A90)
#define CLASS_4_F7604E00DC11562A_2_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x63F1AA0)
#define CLASS_4_F7604E00DC11562A_2_METHOD_4_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x63F0EE0)
#define CLASS_4_F7604E00DC11562A_2_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x63F1AB0)
#define CLASS_4_F7604E00DC11562A_2_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x63F0F90)
#define CLASS_4_F7604E00DC11562A_2_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x63F14F0)
#define CLASS_4_F7604E00DC11562A_2__CTOR_OFFSET UNITYSDK_OFFSET(0x63F1A70)

inline static constexpr unsigned int Class_4_F7604E00DC11562A_2_TypeDefinitionIndex = 67687;

class Class_4_F7604E00DC11562A_2 : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::FXComicDot*, ::MoleMole::Timeline::FXComicDotBehaviour*>
{
public:
	::System::Boolean Field_4_2; // 0x38
	::System::Boolean Field_4_5; // 0x39
	::System::Single Field_4_4; // 0x3C
	::System::Boolean Field_4_6; // 0x40
	::System::Boolean Field_4_1; // 0x41
	::System::Boolean Field_4_3; // 0x42
	::Class_4_F7604E00DC11562A_2_Struct_2_E658502528B7C034_5 Field_4_0; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A_2_METHOD_4_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A_2_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A_2_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A_2_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A_2_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A_2_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_20A627803502A830(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_F7604E00DC11562A_2_METHOD_4_20A627803502A830_OFFSET))(this, a1);
	}
};
