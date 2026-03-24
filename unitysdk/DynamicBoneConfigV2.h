#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define DYNAMICBONECONFIGV2_DEEPCOPY_OFFSET UNITYSDK_OFFSET(0x1B1764F0)
#define DYNAMICBONECONFIGV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1767D0)
#define DYNAMICBONECONFIGV2__DEEPCOPY_G__COPY_16_0_OFFSET UNITYSDK_OFFSET(0x1B1768C0)

inline static constexpr unsigned int DynamicBoneConfigV2_TypeDefinitionIndex = 32536;

class DynamicBoneConfigV2 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* m_StiffnessDistrib; // 0x10
	::UnityEngine::AnimationCurve* m_InertDistrib; // 0x18
	::UnityEngine::AnimationCurve* m_ElasticityDistrib; // 0x20
	::UnityEngine::AnimationCurve* m_DampingDistrib; // 0x28
	::UnityEngine::AnimationCurve* m_RadiusDistrib; // 0x30
	::UnityEngine::AnimationCurve* m_FrictionDistrib; // 0x38
	::System::Single m_Inert; // 0x40
	::UnityEngine::Vector3 m_Force; // 0x44
	::System::Single m_Damping; // 0x50
	::System::Single m_Stiffness; // 0x54
	::UnityEngine::Vector3 m_EndOffset; // 0x58
	::System::Single m_EndLength; // 0x64
	::System::Single m_Elasticity; // 0x68
	::System::Single m_Friction; // 0x6C
	::UnityEngine::Vector3 m_Gravity; // 0x70
	::System::Single m_Radius; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONECONFIGV2__CTOR_OFFSET))(this);
	}

	::DynamicBoneConfigV2* DeepCopy()
	{
		return ((::DynamicBoneConfigV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONECONFIGV2_DEEPCOPY_OFFSET))(this);
	}

	static ::UnityEngine::AnimationCurve* _DeepCopy_g__Copy_16_0(::UnityEngine::AnimationCurve* animationCurve)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + DYNAMICBONECONFIGV2__DEEPCOPY_G__COPY_16_0_OFFSET))(animationCurve);
	}
};
