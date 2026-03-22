#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20577CF7FC6B1263.h"
#include "unitysdk/Class_4_47AEEC32FD8638AD_Struct_2_52AD02145F5FCE36_6.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Timeline { class DirectionalBlurBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class DirectionalBlur; }

#define CLASS_4_47AEEC32FD8638AD_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x908CB50)
#define CLASS_4_47AEEC32FD8638AD_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x908CB40)
#define CLASS_4_47AEEC32FD8638AD_METHOD_4_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x908B8C0)
#define CLASS_4_47AEEC32FD8638AD_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x908CB30)
#define CLASS_4_47AEEC32FD8638AD_METHOD_4_EBA44A5450C8B29F_OFFSET UNITYSDK_OFFSET(0x908BAF0)
#define CLASS_4_47AEEC32FD8638AD_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x908B9F0)
#define CLASS_4_47AEEC32FD8638AD_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x908C3C0)
#define CLASS_4_47AEEC32FD8638AD__CTOR_OFFSET UNITYSDK_OFFSET(0x908CB00)

inline static constexpr unsigned int Class_4_47AEEC32FD8638AD_TypeDefinitionIndex = 41575;

class Class_4_47AEEC32FD8638AD : public ::Class_3_20577CF7FC6B1263<::UnityEngine::Rendering::Universal::DirectionalBlur*, ::MoleMole::Timeline::DirectionalBlurBehaviour*>
{
public:
	::System::Boolean Field_4_11; // 0x38
	::System::Boolean Field_4_1; // 0x39
	::System::Boolean Field_4_7; // 0x3A
	::UnityEngine::Rendering::Universal::SampleDistanceMode Field_4_4; // 0x3C
	::UnityEngine::Vector2 Field_4_10; // 0x40
	::Class_4_47AEEC32FD8638AD_Struct_2_52AD02145F5FCE36_6 Field_4_0; // 0x48
	::System::Single Field_4_8; // 0x78
	::UnityEngine::Rendering::Universal::DownSampleLevel Field_4_2; // 0x7C
	::System::Int32 Field_4_6; // 0x80
	::System::Boolean Field_4_12; // 0x84
	::System::Boolean Field_4_5; // 0x85
	::System::Boolean Field_4_3; // 0x86
	::System::Boolean Field_4_9; // 0x87

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

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_47AEEC32FD8638AD_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_EBA44A5450C8B29F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_47AEEC32FD8638AD_METHOD_4_EBA44A5450C8B29F_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_47AEEC32FD8638AD_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
