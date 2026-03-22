#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20577CF7FC6B1263.h"
#include "unitysdk/Class_4_EAF8E0104416EDDD_7_Struct_2_52AD02145F5FCE36_31.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TonemappingMode.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class TonemappingBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class Tonemapping; }

#define CLASS_4_EAF8E0104416EDDD_7_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x80E9480)
#define CLASS_4_EAF8E0104416EDDD_7_METHOD_4_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x80E7FC0)
#define CLASS_4_EAF8E0104416EDDD_7_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x80E9470)
#define CLASS_4_EAF8E0104416EDDD_7_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x80E9490)
#define CLASS_4_EAF8E0104416EDDD_7_METHOD_4_EBA44A5450C8B29F_OFFSET UNITYSDK_OFFSET(0x80E8270)
#define CLASS_4_EAF8E0104416EDDD_7_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x80E8120)
#define CLASS_4_EAF8E0104416EDDD_7_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x80E8C00)
#define CLASS_4_EAF8E0104416EDDD_7__CTOR_OFFSET UNITYSDK_OFFSET(0x80E9440)

inline static constexpr unsigned int Class_4_EAF8E0104416EDDD_7_TypeDefinitionIndex = 65828;

class Class_4_EAF8E0104416EDDD_7 : public ::Class_3_20577CF7FC6B1263<::UnityEngine::Rendering::Universal::Tonemapping*, ::MoleMole::Timeline::TonemappingBehaviour*>
{
public:
	::System::Single Field_4_6; // 0x38
	::System::Single Field_4_8; // 0x3C
	::UnityEngine::NAPRenderPipeline0::TonemappingMode Field_4_2; // 0x40
	::System::Boolean Field_4_15; // 0x44
	::System::Boolean Field_4_16; // 0x45
	::System::Boolean Field_4_5; // 0x46
	::System::Boolean Field_4_13; // 0x47
	::System::Single Field_4_4; // 0x48
	::System::Single Field_4_14; // 0x4C
	::System::Boolean Field_4_9; // 0x50
	::System::Boolean Field_4_3; // 0x51
	::System::Single Field_4_10; // 0x54
	::System::Single Field_4_12; // 0x58
	::System::Boolean Field_4_7; // 0x5C
	::System::Boolean Field_4_1; // 0x5D
	::System::Boolean Field_4_11; // 0x5E
	::Class_4_EAF8E0104416EDDD_7_Struct_2_52AD02145F5FCE36_31 Field_4_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_7__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_7_METHOD_4_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_7_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_7_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_7_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_EBA44A5450C8B29F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_7_METHOD_4_EBA44A5450C8B29F_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_7_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_7_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
