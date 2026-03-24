#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_67ED94F7335E584B_Struct_2_E9B2CF29B4D7A350_1.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Timeline { class LiftGammaGainBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class LiftGammaGain; }

#define CLASS_4_67ED94F7335E584B_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xAF48A00)
#define CLASS_4_67ED94F7335E584B_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xAF489E0)
#define CLASS_4_67ED94F7335E584B_METHOD_4_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xAF47C90)
#define CLASS_4_67ED94F7335E584B_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xAF489F0)
#define CLASS_4_67ED94F7335E584B_METHOD_4_EBA44A5450C8B29F_OFFSET UNITYSDK_OFFSET(0xAF47E80)
#define CLASS_4_67ED94F7335E584B_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xAF47DA0)
#define CLASS_4_67ED94F7335E584B_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAF483A0)
#define CLASS_4_67ED94F7335E584B__CTOR_OFFSET UNITYSDK_OFFSET(0xAF489B0)

inline static constexpr unsigned int Class_4_67ED94F7335E584B_TypeDefinitionIndex = 59464;

class Class_4_67ED94F7335E584B : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::LiftGammaGain*, ::MoleMole::Timeline::LiftGammaGainBehaviour*>
{
public:
	::System::Boolean Field_4_1; // 0x38
	::System::Boolean Field_4_3; // 0x39
	::UnityEngine::Vector4 Field_4_6; // 0x3C
	::Class_4_67ED94F7335E584B_Struct_2_E9B2CF29B4D7A350_1 Field_4_0; // 0x4C
	::UnityEngine::Vector4 Field_4_2; // 0x8C
	::UnityEngine::Vector4 Field_4_4; // 0x9C
	::System::Boolean Field_4_8; // 0xAC
	::System::Boolean Field_4_7; // 0xAD
	::System::Boolean Field_4_5; // 0xAE

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_67ED94F7335E584B__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_67ED94F7335E584B_METHOD_4_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_67ED94F7335E584B_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_67ED94F7335E584B_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_67ED94F7335E584B_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_67ED94F7335E584B_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_67ED94F7335E584B_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_EBA44A5450C8B29F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_67ED94F7335E584B_METHOD_4_EBA44A5450C8B29F_OFFSET))(this, a1);
	}
};
