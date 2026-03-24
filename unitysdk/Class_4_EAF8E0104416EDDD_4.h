#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_EAF8E0104416EDDD_4_Struct_2_52AD02145F5FCE36_14.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurDirection.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurQuality.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class MotionBlurBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class MotionBlur; }

#define CLASS_4_EAF8E0104416EDDD_4_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x98C08A0)
#define CLASS_4_EAF8E0104416EDDD_4_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x98C08B0)
#define CLASS_4_EAF8E0104416EDDD_4_METHOD_4_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x98BF630)
#define CLASS_4_EAF8E0104416EDDD_4_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x98C08C0)
#define CLASS_4_EAF8E0104416EDDD_4_METHOD_4_EBA44A5450C8B29F_OFFSET UNITYSDK_OFFSET(0x98BF880)
#define CLASS_4_EAF8E0104416EDDD_4_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x98BF770)
#define CLASS_4_EAF8E0104416EDDD_4_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x98C00F0)
#define CLASS_4_EAF8E0104416EDDD_4__CTOR_OFFSET UNITYSDK_OFFSET(0x98C0870)

inline static constexpr unsigned int Class_4_EAF8E0104416EDDD_4_TypeDefinitionIndex = 48486;

class Class_4_EAF8E0104416EDDD_4 : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::MotionBlur*, ::MoleMole::Timeline::MotionBlurBehaviour*>
{
public:
	::System::Boolean Field_4_9; // 0x38
	::System::Boolean Field_4_3; // 0x39
	::System::Boolean Field_4_14; // 0x3A
	::System::Boolean Field_4_13; // 0x3B
	::UnityEngine::NAPRenderPipeline0::MotionBlurMode Field_4_2; // 0x3C
	::Class_4_EAF8E0104416EDDD_4_Struct_2_52AD02145F5FCE36_14 Field_4_0; // 0x40
	::UnityEngine::NAPRenderPipeline0::MotionBlurQuality Field_4_8; // 0x74
	::System::Boolean Field_4_11; // 0x78
	::System::Boolean Field_4_1; // 0x79
	::System::Boolean Field_4_5; // 0x7A
	::System::Boolean Field_4_7; // 0x7B
	::System::Single Field_4_4; // 0x7C
	::System::Single Field_4_6; // 0x80
	::System::Single Field_4_12; // 0x84
	::UnityEngine::NAPRenderPipeline0::MotionBlurDirection Field_4_10; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_4_METHOD_4_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_4_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_4_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_4_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_4_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_4_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_EBA44A5450C8B29F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_4_METHOD_4_EBA44A5450C8B29F_OFFSET))(this, a1);
	}
};
