#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_49344B42CF4C8CAD_Struct_2_4D9DAE3E910E138B_1.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Timeline { class OldCRTBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class OldCRT; }

#define CLASS_4_49344B42CF4C8CAD_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x66D3E70)
#define CLASS_4_49344B42CF4C8CAD_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x66D3E60)
#define CLASS_4_49344B42CF4C8CAD_METHOD_4_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x66D2E90)
#define CLASS_4_49344B42CF4C8CAD_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x66D3E50)
#define CLASS_4_49344B42CF4C8CAD_METHOD_4_EBA44A5450C8B29F_OFFSET UNITYSDK_OFFSET(0x66D3090)
#define CLASS_4_49344B42CF4C8CAD_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x66D2FA0)
#define CLASS_4_49344B42CF4C8CAD_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x66D3760)
#define CLASS_4_49344B42CF4C8CAD__CTOR_OFFSET UNITYSDK_OFFSET(0x66D3E20)

inline static constexpr unsigned int Class_4_49344B42CF4C8CAD_TypeDefinitionIndex = 80120;

class Class_4_49344B42CF4C8CAD : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::OldCRT*, ::MoleMole::Timeline::OldCRTBehaviour*>
{
public:
	::Class_4_49344B42CF4C8CAD_Struct_2_4D9DAE3E910E138B_1 Field_4_0; // 0x38
	::UnityEngine::Texture* Field_4_2; // 0x68
	::System::Single Field_4_8; // 0x70
	::System::Boolean Field_4_7; // 0x74
	::System::Boolean Field_4_1; // 0x75
	::System::Boolean Field_4_3; // 0x76
	::System::Boolean Field_4_10; // 0x77
	::System::Boolean Field_4_5; // 0x78
	::System::Boolean Field_4_9; // 0x79
	::UnityEngine::Vector2 Field_4_4; // 0x7C
	::System::Single Field_4_6; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_49344B42CF4C8CAD__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_49344B42CF4C8CAD_METHOD_4_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_49344B42CF4C8CAD_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_49344B42CF4C8CAD_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_49344B42CF4C8CAD_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_49344B42CF4C8CAD_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_49344B42CF4C8CAD_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_EBA44A5450C8B29F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_49344B42CF4C8CAD_METHOD_4_EBA44A5450C8B29F_OFFSET))(this, a1);
	}
};
