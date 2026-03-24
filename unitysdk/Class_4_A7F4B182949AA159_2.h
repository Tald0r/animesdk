#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_A7F4B182949AA159_2_Struct_2_52AD02145F5FCE36_42.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostLight_RenderLayerMask.h"

namespace MoleMole::Timeline { class ScreenSpacePlanarReflectionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ScreenSpacePlanarReflection; }

#define CLASS_4_A7F4B182949AA159_2_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x8FD45C0)
#define CLASS_4_A7F4B182949AA159_2_METHOD_4_336B51EF746572BB_OFFSET UNITYSDK_OFFSET(0x8FD2960)
#define CLASS_4_A7F4B182949AA159_2_METHOD_4_3E23A2EE3F65066B_OFFSET UNITYSDK_OFFSET(0x8FD24D0)
#define CLASS_4_A7F4B182949AA159_2_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x8FD45D0)
#define CLASS_4_A7F4B182949AA159_2_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x8FD45E0)
#define CLASS_4_A7F4B182949AA159_2_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x8FD2780)
#define CLASS_4_A7F4B182949AA159_2_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x8FD39F0)
#define CLASS_4_A7F4B182949AA159_2__CTOR_OFFSET UNITYSDK_OFFSET(0x8FD4570)

inline static constexpr unsigned int Class_4_A7F4B182949AA159_2_TypeDefinitionIndex = 80114;

class Class_4_A7F4B182949AA159_2 : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*, ::MoleMole::Timeline::ScreenSpacePlanarReflectionBehaviour*>
{
public:
	::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask Field_4_24; // 0x38
	::System::Single Field_4_10; // 0x3C
	::System::Single Field_4_18; // 0x40
	::System::Single Field_4_8; // 0x44
	::System::Boolean Field_4_26; // 0x48
	::System::Boolean Field_4_19; // 0x49
	::System::Boolean Field_4_17; // 0x4A
	::System::Boolean Field_4_7; // 0x4B
	::Class_4_A7F4B182949AA159_2_Struct_2_52AD02145F5FCE36_42 Field_4_0; // 0x4C
	::System::Single Field_4_16; // 0xA4
	::System::Single Field_4_6; // 0xA8
	::UnityEngine::LayerMask Field_4_20; // 0xAC
	::System::Boolean Field_4_9; // 0xB0
	::System::Boolean Field_4_2; // 0xB1
	::System::Boolean Field_4_15; // 0xB2
	::System::Boolean Field_4_12; // 0xB3
	::System::Boolean Field_4_23; // 0xB4
	::System::Boolean Field_4_1; // 0xB5
	::System::Boolean Field_4_21; // 0xB6
	::System::Boolean Field_4_11; // 0xB7
	::System::Single Field_4_14; // 0xB8
	::UnityEngine::LayerMask Field_4_22; // 0xBC
	::System::Single Field_4_4; // 0xC0
	::System::Boolean Field_4_3; // 0xC4
	::System::Boolean Field_4_25; // 0xC5
	::System::Boolean Field_4_5; // 0xC6
	::System::Boolean Field_4_13; // 0xC7

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_3E23A2EE3F65066B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159_2_METHOD_4_3E23A2EE3F65066B_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159_2_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159_2_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159_2_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159_2_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_336B51EF746572BB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159_2_METHOD_4_336B51EF746572BB_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_A7F4B182949AA159_2_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
