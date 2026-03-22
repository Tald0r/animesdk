#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_0A7E1C949F3AB732_CLASS_1_BDE38B470BF193E3_METHOD_1_3A227AA2927FC2AE_1_OFFSET UNITYSDK_OFFSET(0x6C2AE90)
#define CLASS_1_0A7E1C949F3AB732_CLASS_1_BDE38B470BF193E3_METHOD_1_3A227AA2927FC2AE_OFFSET UNITYSDK_OFFSET(0x6C2AE80)
#define CLASS_1_0A7E1C949F3AB732_CLASS_1_BDE38B470BF193E3__CTOR_OFFSET UNITYSDK_OFFSET(0x6C2AE70)

inline static constexpr unsigned int Class_1_0A7E1C949F3AB732_Class_1_BDE38B470BF193E3_TypeDefinitionIndex = 73252;

class Class_1_0A7E1C949F3AB732_Class_1_BDE38B470BF193E3 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7E1C949F3AB732_CLASS_1_BDE38B470BF193E3__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_3A227AA2927FC2AE(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_0A7E1C949F3AB732_CLASS_1_BDE38B470BF193E3_METHOD_1_3A227AA2927FC2AE_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_3A227AA2927FC2AE_1(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_0A7E1C949F3AB732_CLASS_1_BDE38B470BF193E3_METHOD_1_3A227AA2927FC2AE_1_OFFSET))(this, a1);
	}
};
