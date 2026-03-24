#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_C3BBA2B066959E6E.h"
#include "unitysdk/MoleMole/MonoConfigurableCollider.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace UnityEngine { class BoxCollider; }

#define MOLEMOLE_MONOBOXCOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x7A8B9A0)
#define MOLEMOLE_MONOBOXCOLLIDER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x7A8BC90)
#define MOLEMOLE_MONOBOXCOLLIDER_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x7A8BFF0)
#define MOLEMOLE_MONOBOXCOLLIDER_METHOD_6_06F625B586C4B600_OFFSET UNITYSDK_OFFSET(0x7A8BD30)
#define MOLEMOLE_MONOBOXCOLLIDER_METHOD_6_24EC7787E7AF3793_OFFSET UNITYSDK_OFFSET(0x7A8BE10)
#define MOLEMOLE_MONOBOXCOLLIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x7A8BBB0)
#define MOLEMOLE_MONOBOXCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x7A8C1D0)
#define MOLEMOLE_MONOBOXCOLLIDER___BASE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x7A8C1F0)
#define MOLEMOLE_MONOBOXCOLLIDER___BASE_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x7A8C250)
#define MOLEMOLE_MONOBOXCOLLIDER___BASE_SETUPCOLLIDER_OFFSET UNITYSDK_OFFSET(0x7A8C2C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBoxCollider_TypeDefinitionIndex = 75262;

	class MonoBoxCollider : public ::MoleMole::MonoConfigurableCollider
	{
	public:
		::UnityEngine::BoxCollider* Field_6_0; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_6_06F625B586C4B600(::MoleMole::Config::ConfigTimeDrivenAttackCollider* a1, ::UnityEngine::LayerMask a2, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER_METHOD_6_06F625B586C4B600_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER_CLEANUP_OFFSET))(this);
		}

		::System::Void DrawLine(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER_DRAWLINE_OFFSET))(this, a1);
		}

		::System::Void __base_CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER___BASE_CLEANUP_OFFSET))(this);
		}

		::System::Void __base_DrawLine(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER___BASE_DRAWLINE_OFFSET))(this, a1);
		}

		::System::Void __base_SetupCollider(::MoleMole::Config::ConfigTimeDrivenAttackCollider* a1, ::UnityEngine::LayerMask a2, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER___BASE_SETUPCOLLIDER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_24EC7787E7AF3793(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER_METHOD_6_24EC7787E7AF3793_OFFSET))(this, a1, a2, a3);
		}
	};
}
