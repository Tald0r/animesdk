#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20577CF7FC6B1263.h"
#include "unitysdk/Class_4_EAF8E0104416EDDD_5_Struct_2_52AD02145F5FCE36_25.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DistortionQueueType.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Timeline { class DistortionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class Distortion; }

#define CLASS_4_EAF8E0104416EDDD_5_METHOD_4_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0xDDF14C0)
#define CLASS_4_EAF8E0104416EDDD_5_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xDDF2C70)
#define CLASS_4_EAF8E0104416EDDD_5_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xDDF2C50)
#define CLASS_4_EAF8E0104416EDDD_5_METHOD_4_90F55F3450AF41B6_OFFSET UNITYSDK_OFFSET(0xDDF1780)
#define CLASS_4_EAF8E0104416EDDD_5_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xDDF2C60)
#define CLASS_4_EAF8E0104416EDDD_5_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xDDF1640)
#define CLASS_4_EAF8E0104416EDDD_5_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xDDF2410)
#define CLASS_4_EAF8E0104416EDDD_5__CTOR_OFFSET UNITYSDK_OFFSET(0xDDF2C20)

inline static constexpr unsigned int Class_4_EAF8E0104416EDDD_5_TypeDefinitionIndex = 63415;

class Class_4_EAF8E0104416EDDD_5 : public ::Class_3_20577CF7FC6B1263<::UnityEngine::Rendering::Universal::Distortion*, ::MoleMole::Timeline::DistortionBehaviour*>
{
public:
	::Class_4_EAF8E0104416EDDD_5_Struct_2_52AD02145F5FCE36_25 Field_4_0; // 0x38
	::System::Int32 Field_4_4; // 0x70
	::System::Boolean Field_4_3; // 0x74
	::System::Boolean Field_4_12; // 0x75
	::System::Boolean Field_4_5; // 0x76
	::System::Boolean Field_4_2; // 0x77
	::UnityEngine::NAPRenderPipeline0::DistortionQueueType Field_4_14; // 0x78
	::System::Boolean Field_4_1; // 0x7C
	::System::Boolean Field_4_11; // 0x7D
	::System::Boolean Field_4_15; // 0x7E
	::System::Boolean Field_4_16; // 0x7F
	::System::Single Field_4_6; // 0x80
	::System::Single Field_4_10; // 0x84
	::System::Boolean Field_4_9; // 0x88
	::System::Boolean Field_4_13; // 0x89
	::System::Boolean Field_4_7; // 0x8A
	::UnityEngine::Vector3 Field_4_8; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_5__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_5_METHOD_4_0868EF727040C390_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_5_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_5_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_90F55F3450AF41B6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_5_METHOD_4_90F55F3450AF41B6_OFFSET))(this, a1);
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
