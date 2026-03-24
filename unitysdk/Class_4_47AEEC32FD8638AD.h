#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_47AEEC32FD8638AD_Struct_2_52AD02145F5FCE36_7.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Timeline { class DirectionalBlurBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class DirectionalBlur; }

#define CLASS_4_47AEEC32FD8638AD_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x8AA34A0)
#define CLASS_4_47AEEC32FD8638AD_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x8AA34B0)
#define CLASS_4_47AEEC32FD8638AD_METHOD_4_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x8AA2220)
#define CLASS_4_47AEEC32FD8638AD_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x8AA3490)
#define CLASS_4_47AEEC32FD8638AD_METHOD_4_EBA44A5450C8B29F_OFFSET UNITYSDK_OFFSET(0x8AA2450)
#define CLASS_4_47AEEC32FD8638AD_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x8AA2350)
#define CLASS_4_47AEEC32FD8638AD_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x8AA2D20)
#define CLASS_4_47AEEC32FD8638AD__CTOR_OFFSET UNITYSDK_OFFSET(0x8AA3460)

inline static constexpr unsigned int Class_4_47AEEC32FD8638AD_TypeDefinitionIndex = 41635;

class Class_4_47AEEC32FD8638AD : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::DirectionalBlur*, ::MoleMole::Timeline::DirectionalBlurBehaviour*>
{
public:
	::Class_4_47AEEC32FD8638AD_Struct_2_52AD02145F5FCE36_7 Field_4_0; // 0x38
	::System::Boolean Field_4_3; // 0x68
	::System::Boolean Field_4_12; // 0x69
	::System::Boolean Field_4_9; // 0x6A
	::System::Boolean Field_4_1; // 0x6B
	::System::Single Field_4_8; // 0x6C
	::System::Int32 Field_4_6; // 0x70
	::UnityEngine::Rendering::Universal::SampleDistanceMode Field_4_4; // 0x74
	::UnityEngine::Vector2 Field_4_10; // 0x78
	::UnityEngine::Rendering::Universal::DownSampleLevel Field_4_2; // 0x80
	::System::Boolean Field_4_7; // 0x84
	::System::Boolean Field_4_11; // 0x85
	::System::Boolean Field_4_5; // 0x86

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_47AEEC32FD8638AD__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_47AEEC32FD8638AD_METHOD_4_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_47AEEC32FD8638AD_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_47AEEC32FD8638AD_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_47AEEC32FD8638AD_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_47AEEC32FD8638AD_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_EBA44A5450C8B29F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_47AEEC32FD8638AD_METHOD_4_EBA44A5450C8B29F_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_47AEEC32FD8638AD_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};
