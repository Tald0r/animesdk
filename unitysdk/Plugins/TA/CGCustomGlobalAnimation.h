#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Plugins/TA/CGCustomGlobalAnimation_AnimationType.h"
#include "unitysdk/Plugins/TA/CGCustomGlobalAnimation_CustomDataType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering::Universal { class VisualEnvironmentE; }

#define PLUGINS_TA_CGCUSTOMGLOBALANIMATION_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1AB506A0)
#define PLUGINS_TA_CGCUSTOMGLOBALANIMATION_GETTIME_OFFSET UNITYSDK_OFFSET(0x1AB50670)
#define PLUGINS_TA_CGCUSTOMGLOBALANIMATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1AB507B0)
#define PLUGINS_TA_CGCUSTOMGLOBALANIMATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1AB507C0)
#define PLUGINS_TA_CGCUSTOMGLOBALANIMATION_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1AB50EB0)
#define PLUGINS_TA_CGCUSTOMGLOBALANIMATION_PLAYWITHTIME_OFFSET UNITYSDK_OFFSET(0x1AB50850)
#define PLUGINS_TA_CGCUSTOMGLOBALANIMATION_REFRESH_OFFSET UNITYSDK_OFFSET(0x1AB50790)
#define PLUGINS_TA_CGCUSTOMGLOBALANIMATION_START_OFFSET UNITYSDK_OFFSET(0x1AB507A0)
#define PLUGINS_TA_CGCUSTOMGLOBALANIMATION_STOP_OFFSET UNITYSDK_OFFSET(0x1AB50780)
#define PLUGINS_TA_CGCUSTOMGLOBALANIMATION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AB507D0)
#define PLUGINS_TA_CGCUSTOMGLOBALANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB50EC0)

namespace Plugins::TA
{
	inline static constexpr unsigned int CGCustomGlobalAnimation_TypeDefinitionIndex = 34903;

	class CGCustomGlobalAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single animationTime; // 0x18
		::Plugins::TA::CGCustomGlobalAnimation_AnimationType presetDataType; // 0x1C
		::Plugins::TA::CGCustomGlobalAnimation_CustomDataType customDataType; // 0x20
		::System::String* customValueName; // 0x28
		::UnityEngine::AnimationCurve* curve; // 0x30
		::System::Single normalizedTime; // 0x38
		::System::Boolean useInitData; // 0x3C
		::UnityEngine::Color initColorData; // 0x40
		::System::Single initFloatData; // 0x50
		::System::Boolean autoBind; // 0x54
		::UnityEngine::Renderer* render; // 0x58
		::UnityEngine::Rendering::Universal::VisualEnvironmentE* ve; // 0x60
		::System::Int32 materialIndex; // 0x68
		::UnityEngine::Material* targetMaterial; // 0x70
		::UnityEngine::Light* light; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_TA_CGCUSTOMGLOBALANIMATION__CTOR_OFFSET))(this);
		}

		::System::Single GetTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_TA_CGCUSTOMGLOBALANIMATION_GETTIME_OFFSET))(this);
		}

		::UnityEngine::Material* GetMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_TA_CGCUSTOMGLOBALANIMATION_GETMATERIAL_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_TA_CGCUSTOMGLOBALANIMATION_STOP_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_TA_CGCUSTOMGLOBALANIMATION_REFRESH_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_TA_CGCUSTOMGLOBALANIMATION_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_TA_CGCUSTOMGLOBALANIMATION_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_TA_CGCUSTOMGLOBALANIMATION_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_TA_CGCUSTOMGLOBALANIMATION_UPDATE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_TA_CGCUSTOMGLOBALANIMATION_ONVALIDATE_OFFSET))(this);
		}

		::System::Void PlayWithTime(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PLUGINS_TA_CGCUSTOMGLOBALANIMATION_PLAYWITHTIME_OFFSET))(this, time);
		}
	};
}
