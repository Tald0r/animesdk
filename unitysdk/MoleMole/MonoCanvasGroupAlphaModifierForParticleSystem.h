#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoCanvasGroupAlphaModifierForParticleSystem_ParticleSystemInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class UIGlobalAlpha;
namespace System { class String; }
namespace UnityEngine { class CanvasRenderer; }

#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_METHOD_5_7F4D4B70081805B9_OFFSET UNITYSDK_OFFSET(0x8B20310)
#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_METHOD_5_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x8B1F870)
#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x8B1F800)
#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_RESET_OFFSET UNITYSDK_OFFSET(0x8B1F590)
#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_SETPARTICLESYSTEMALPHA_OFFSET UNITYSDK_OFFSET(0x8B1FAC0)
#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x8B1FA50)
#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x8B202F0)
#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x8B202D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCanvasGroupAlphaModifierForParticleSystem_TypeDefinitionIndex = 47078;

	class MonoCanvasGroupAlphaModifierForParticleSystem : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCanvasGroupAlphaModifierForParticleSystem_TypeDefinitionIndex)->GetStaticField(0xE6C0);
		}
		// static const ::System::String* Field_5_4; // 0x0
		::Il2CppArray<::MoleMole::MonoCanvasGroupAlphaModifierForParticleSystem_ParticleSystemInfo>* particleSystemInfoList; // 0x18
		::UnityEngine::CanvasRenderer* canvasRenderer; // 0x20
		::UIGlobalAlpha* Field_5_2; // 0x28
		::System::Single Field_5_3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM__CCTOR_OFFSET))();
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_RESET_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_UPDATE_OFFSET))(this);
		}

		::System::Void SetParticleSystemAlpha(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_SETPARTICLESYSTEMALPHA_OFFSET))(this, a1);
		}

		::UIGlobalAlpha* Method_5_7F4D4B70081805B9()
		{
			return ((::UIGlobalAlpha*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_METHOD_5_7F4D4B70081805B9_OFFSET))(this);
		}

		::System::Void Method_5_EAD10B3E55E2C4C5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_METHOD_5_EAD10B3E55E2C4C5_OFFSET))(this);
		}
	};
}
