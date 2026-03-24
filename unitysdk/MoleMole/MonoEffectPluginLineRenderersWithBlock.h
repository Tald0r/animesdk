#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_METHOD_6_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xB99D550)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_METHOD_6_3416FD11DD9200F8_OFFSET UNITYSDK_OFFSET(0xB99D750)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_METHOD_6_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0xB99E320)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_METHOD_6_DB4F3E95D7CE1950_OFFSET UNITYSDK_OFFSET(0xB99E100)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB99D620)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB99D490)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0xB99D680)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK__CCTOR_OFFSET UNITYSDK_OFFSET(0xB99E0B0)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xB99E080)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginLineRenderersWithBlock_TypeDefinitionIndex = 62906;

	class MonoEffectPluginLineRenderersWithBlock : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_6_10()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginLineRenderersWithBlock_TypeDefinitionIndex)->GetStaticField(0x42FC0);
		}
		// static const ::System::Int32 Field_6_11 = 0x40; // 0x0
		::System::Single maxLength; // 0x18
		::UnityEngine::Transform* outgoingTransform; // 0x20
		::UnityEngine::LayerMask layerMask; // 0x28
		::System::Boolean updateOnStart; // 0x2C
		::System::Single updateInterval; // 0x30
		::System::Single Field_6_5; // 0x34
		::System::Boolean Field_6_6; // 0x38
		::UnityEngine::Transform* endEffect; // 0x40
		::UnityEngine::Transform* blockEffect; // 0x48
		::Il2CppArray<::UnityEngine::LineRenderer*>* lineRenderers; // 0x50
		::System::Boolean Field_6_12; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_UPDATE_OFFSET))(this);
		}

		::System::Void Method_6_3416FD11DD9200F8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_METHOD_6_3416FD11DD9200F8_OFFSET))(this);
		}

		::System::Void Method_6_DB4F3E95D7CE1950(::System::Boolean a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_METHOD_6_DB4F3E95D7CE1950_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_56CE4AFC5339F746()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_METHOD_6_56CE4AFC5339F746_OFFSET))(this);
		}

		::System::Void Method_6_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_METHOD_6_151E25A63D14DDB0_OFFSET))(this);
		}
	};
}
