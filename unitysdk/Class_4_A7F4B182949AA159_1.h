#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_A7F4B182949AA159_1_Struct_2_52AD02145F5FCE36_39.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Timeline { class LensDistortionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class LensDistortion; }

#define CLASS_4_A7F4B182949AA159_1_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xC8B31B0)
#define CLASS_4_A7F4B182949AA159_1_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xC8B31D0)
#define CLASS_4_A7F4B182949AA159_1_METHOD_4_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0xC8B1DD0)
#define CLASS_4_A7F4B182949AA159_1_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xC8B31C0)
#define CLASS_4_A7F4B182949AA159_1_METHOD_4_EBA44A5450C8B29F_OFFSET UNITYSDK_OFFSET(0xC8B20A0)
#define CLASS_4_A7F4B182949AA159_1_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xC8B1F70)
#define CLASS_4_A7F4B182949AA159_1_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xC8B29B0)
#define CLASS_4_A7F4B182949AA159_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC8B3170)

inline static constexpr unsigned int Class_4_A7F4B182949AA159_1_TypeDefinitionIndex = 77331;

class Class_4_A7F4B182949AA159_1 : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::LensDistortion*, ::MoleMole::Timeline::LensDistortionBehaviour*>
{
public:
	::System::Single Field_4_6; // 0x38
	::System::Single Field_4_4; // 0x3C
	::System::Single Field_4_12; // 0x40
	::Class_4_A7F4B182949AA159_1_Struct_2_52AD02145F5FCE36_39 Field_4_0; // 0x44
	::System::Boolean Field_4_1; // 0x7C
	::System::Boolean Field_4_11; // 0x7D
	::System::Boolean Field_4_14; // 0x7E
	::System::Boolean Field_4_9; // 0x7F
	::System::Single Field_4_10; // 0x80
	::System::Single Field_4_2; // 0x84
	::System::Boolean Field_4_3; // 0x88
	::System::Boolean Field_4_5; // 0x89
	::System::Boolean Field_4_13; // 0x8A
	::System::Boolean Field_4_7; // 0x8B
	::UnityEngine::Vector2 Field_4_8; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159_1_METHOD_4_B768DA94E3FD91D9_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159_1_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159_1_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_EBA44A5450C8B29F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159_1_METHOD_4_EBA44A5450C8B29F_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159_1_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159_1_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159_1_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};
