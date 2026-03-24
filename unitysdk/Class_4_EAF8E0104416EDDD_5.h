#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_EAF8E0104416EDDD_5_Struct_2_52AD02145F5FCE36_22.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TonemappingMode.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class TonemappingBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class Tonemapping; }

#define CLASS_4_EAF8E0104416EDDD_5_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xA0BF6D0)
#define CLASS_4_EAF8E0104416EDDD_5_METHOD_4_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xA0BE210)
#define CLASS_4_EAF8E0104416EDDD_5_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xA0BF6B0)
#define CLASS_4_EAF8E0104416EDDD_5_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xA0BF6C0)
#define CLASS_4_EAF8E0104416EDDD_5_METHOD_4_EBA44A5450C8B29F_OFFSET UNITYSDK_OFFSET(0xA0BE4E0)
#define CLASS_4_EAF8E0104416EDDD_5_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xA0BE390)
#define CLASS_4_EAF8E0104416EDDD_5_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xA0BEE60)
#define CLASS_4_EAF8E0104416EDDD_5__CTOR_OFFSET UNITYSDK_OFFSET(0xA0BF680)

inline static constexpr unsigned int Class_4_EAF8E0104416EDDD_5_TypeDefinitionIndex = 61780;

class Class_4_EAF8E0104416EDDD_5 : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::Tonemapping*, ::MoleMole::Timeline::TonemappingBehaviour*>
{
public:
	::System::Boolean Field_4_16; // 0x38
	::System::Single Field_4_6; // 0x3C
	::System::Boolean Field_4_5; // 0x40
	::System::Boolean Field_4_1; // 0x41
	::System::Boolean Field_4_15; // 0x42
	::System::Boolean Field_4_7; // 0x43
	::System::Single Field_4_8; // 0x44
	::System::Single Field_4_14; // 0x48
	::Class_4_EAF8E0104416EDDD_5_Struct_2_52AD02145F5FCE36_22 Field_4_0; // 0x4C
	::System::Single Field_4_10; // 0x88
	::System::Single Field_4_12; // 0x8C
	::System::Single Field_4_4; // 0x90
	::UnityEngine::NAPRenderPipeline0::TonemappingMode Field_4_2; // 0x94
	::System::Boolean Field_4_13; // 0x98
	::System::Boolean Field_4_11; // 0x99
	::System::Boolean Field_4_3; // 0x9A
	::System::Boolean Field_4_9; // 0x9B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_5__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_5_METHOD_4_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_5_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_5_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_EBA44A5450C8B29F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_5_METHOD_4_EBA44A5450C8B29F_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_5_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_5_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_5_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
