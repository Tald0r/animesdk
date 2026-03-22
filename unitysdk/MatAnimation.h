#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_A8F5ABF31E066ED4;
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Image; }

#define MATANIMATION_AWAKE_OFFSET UNITYSDK_OFFSET(0xC307D80)
#define MATANIMATION_GET_TARGETMATERIAL_OFFSET UNITYSDK_OFFSET(0xC307C80)
#define MATANIMATION_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC307F20)
#define MATANIMATION_RECOVERMATPROPERTY_OFFSET UNITYSDK_OFFSET(0xC307FE0)
#define MATANIMATION_SETMAT_OFFSET UNITYSDK_OFFSET(0xC3080A0)
#define MATANIMATION_STARTANIMATION_OFFSET UNITYSDK_OFFSET(0xC307E00)
#define MATANIMATION_STOPANIMATION_OFFSET UNITYSDK_OFFSET(0xC308160)
#define MATANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0xC3081D0)

inline static constexpr unsigned int MatAnimation_TypeDefinitionIndex = 69712;

class MatAnimation : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Color clampA; // 0x18
	::UnityEngine::Color clampB; // 0x28
	::System::Boolean startDoing; // 0x38
	::System::Single duration; // 0x3C
	::System::Single timeCount; // 0x40
	::UnityEngine::Color cacheClampA; // 0x44
	::UnityEngine::Color cacheClampB; // 0x54
	::UnityEngine::UI::Image* target; // 0x68
	::Class_2_A8F5ABF31E066ED4* uiControlImage; // 0x70
	::System::Int32 RampColorAShaderParamID; // 0x78
	::System::Int32 RampColorBShaderParamID; // 0x7C
	::System::Boolean doLast; // 0x80
	::System::Boolean playAni; // 0x81
	::System::String* ColorA; // 0x88
	::System::String* ColorB; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATANIMATION__CTOR_OFFSET))(this);
	}

	::UnityEngine::Material* get_targetMaterial()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATANIMATION_GET_TARGETMATERIAL_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATANIMATION_AWAKE_OFFSET))(this);
	}

	::System::Void StartAnimation(::System::Single duration)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MATANIMATION_STARTANIMATION_OFFSET))(this, duration);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATANIMATION_LATEUPDATE_OFFSET))(this);
	}

	::System::Void StopAnimation()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATANIMATION_STOPANIMATION_OFFSET))(this);
	}

	::System::Void SetMat()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATANIMATION_SETMAT_OFFSET))(this);
	}

	::System::Void RecoverMatProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATANIMATION_RECOVERMATPROPERTY_OFFSET))(this);
	}
};
