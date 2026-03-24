#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_A7F4B182949AA159_Struct_2_52AD02145F5FCE3A_20.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class GaussianBlurBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class GaussianBlur; }

#define CLASS_4_A7F4B182949AA159_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x937C900)
#define CLASS_4_A7F4B182949AA159_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x937C8F0)
#define CLASS_4_A7F4B182949AA159_METHOD_4_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x937B4C0)
#define CLASS_4_A7F4B182949AA159_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x937C8E0)
#define CLASS_4_A7F4B182949AA159_METHOD_4_EBA44A5450C8B29F_OFFSET UNITYSDK_OFFSET(0x937B740)
#define CLASS_4_A7F4B182949AA159_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x937B620)
#define CLASS_4_A7F4B182949AA159_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x937C0D0)
#define CLASS_4_A7F4B182949AA159__CTOR_OFFSET UNITYSDK_OFFSET(0x937C8C0)

inline static constexpr unsigned int Class_4_A7F4B182949AA159_TypeDefinitionIndex = 58028;

class Class_4_A7F4B182949AA159 : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::GaussianBlur*, ::MoleMole::Timeline::GaussianBlurBehaviour*>
{
public:
	::UnityEngine::Texture* Field_4_6; // 0x38
	::Class_4_A7F4B182949AA159_Struct_2_52AD02145F5FCE3A_20 Field_4_0; // 0x40
	::System::Boolean Field_4_9; // 0x78
	::System::Boolean Field_4_14; // 0x79
	::System::Single Field_4_8; // 0x7C
	::System::Single Field_4_4; // 0x80
	::System::Int32 Field_4_2; // 0x84
	::System::Boolean Field_4_3; // 0x88
	::System::Boolean Field_4_11; // 0x89
	::System::Boolean Field_4_12; // 0x8A
	::System::Boolean Field_4_13; // 0x8B
	::System::Boolean Field_4_5; // 0x8C
	::System::Boolean Field_4_7; // 0x8D
	::System::Boolean Field_4_1; // 0x8E
	::System::Single Field_4_10; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159_METHOD_4_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_EBA44A5450C8B29F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159_METHOD_4_EBA44A5450C8B29F_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
