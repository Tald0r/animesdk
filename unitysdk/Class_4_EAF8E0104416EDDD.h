#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_EAF8E0104416EDDD_Struct_2_52AD02145F5FCE36_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DistortionQueueType.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Timeline { class DistortionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class Distortion; }

#define CLASS_4_EAF8E0104416EDDD_METHOD_4_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x76F0270)
#define CLASS_4_EAF8E0104416EDDD_METHOD_4_08F456DAF4329D84_OFFSET UNITYSDK_OFFSET(0x76F0540)
#define CLASS_4_EAF8E0104416EDDD_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x76F1A60)
#define CLASS_4_EAF8E0104416EDDD_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x76F1A50)
#define CLASS_4_EAF8E0104416EDDD_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x76F1A40)
#define CLASS_4_EAF8E0104416EDDD_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x76F0400)
#define CLASS_4_EAF8E0104416EDDD_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x76F11C0)
#define CLASS_4_EAF8E0104416EDDD__CTOR_OFFSET UNITYSDK_OFFSET(0x76F1A10)

inline static constexpr unsigned int Class_4_EAF8E0104416EDDD_TypeDefinitionIndex = 38289;

class Class_4_EAF8E0104416EDDD : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::Distortion*, ::MoleMole::Timeline::DistortionBehaviour*>
{
public:
	::System::Boolean Field_4_10; // 0x38
	::System::Boolean Field_4_14; // 0x39
	::System::Boolean Field_4_1; // 0x3A
	::Class_4_EAF8E0104416EDDD_Struct_2_52AD02145F5FCE36_1 Field_4_0; // 0x3C
	::System::Boolean Field_4_13; // 0x78
	::System::Boolean Field_4_7; // 0x79
	::System::Boolean Field_4_15; // 0x7A
	::System::Boolean Field_4_3; // 0x7B
	::System::Single Field_4_8; // 0x7C
	::System::Int32 Field_4_2; // 0x80
	::System::Single Field_4_4; // 0x84
	::UnityEngine::NAPRenderPipeline0::DistortionQueueType Field_4_12; // 0x88
	::UnityEngine::Vector3 Field_4_6; // 0x8C
	::System::Boolean Field_4_11; // 0x98
	::System::Boolean Field_4_5; // 0x99
	::System::Boolean Field_4_9; // 0x9A
	::System::Boolean Field_4_16; // 0x9B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_METHOD_4_0868EF727040C390_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_08F456DAF4329D84(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_METHOD_4_08F456DAF4329D84_OFFSET))(this, a1);
	}
};
