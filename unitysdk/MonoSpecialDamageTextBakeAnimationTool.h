#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define MONOSPECIALDAMAGETEXTBAKEANIMATIONTOOL_RESET_OFFSET UNITYSDK_OFFSET(0x7559740)
#define MONOSPECIALDAMAGETEXTBAKEANIMATIONTOOL_SETCURVE_OFFSET UNITYSDK_OFFSET(0x7559C20)
#define MONOSPECIALDAMAGETEXTBAKEANIMATIONTOOL_START_OFFSET UNITYSDK_OFFSET(0x7559680)
#define MONOSPECIALDAMAGETEXTBAKEANIMATIONTOOL_UPDATE_OFFSET UNITYSDK_OFFSET(0x75596E0)
#define MONOSPECIALDAMAGETEXTBAKEANIMATIONTOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x7559D00)

inline static constexpr unsigned int MonoSpecialDamageTextBakeAnimationTool_TypeDefinitionIndex = 47721;

class MonoSpecialDamageTextBakeAnimationTool : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
{
public:
	::UnityEngine::AnimationClip* ExportAnim; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* ToBakeParticleRootList; // 0x60
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::UnityEngine::AnimationCurve*>>* ResultAnimCurveDict; // 0x68
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::UnityEngine::ParticleSystem*>>* _particleSystemDict; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSPECIALDAMAGETEXTBAKEANIMATIONTOOL__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSPECIALDAMAGETEXTBAKEANIMATIONTOOL_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSPECIALDAMAGETEXTBAKEANIMATIONTOOL_UPDATE_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSPECIALDAMAGETEXTBAKEANIMATIONTOOL_RESET_OFFSET))(this);
	}

	::System::Void SetCurve(::System::String* path, ::UnityEngine::AnimationCurve* curve)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MONOSPECIALDAMAGETEXTBAKEANIMATIONTOOL_SETCURVE_OFFSET))(this, path, curve);
	}
};
