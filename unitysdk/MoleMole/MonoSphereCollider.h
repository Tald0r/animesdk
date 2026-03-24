#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_C3BBA2B066959E6E.h"
#include "unitysdk/MoleMole/MonoConfigurableCollider.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace UnityEngine { class SphereCollider; }

#define MOLEMOLE_MONOSPHERECOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x7A93EB0)
#define MOLEMOLE_MONOSPHERECOLLIDER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x7A94170)
#define MOLEMOLE_MONOSPHERECOLLIDER_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x7A94210)
#define MOLEMOLE_MONOSPHERECOLLIDER_METHOD_6_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x7A94370)
#define MOLEMOLE_MONOSPHERECOLLIDER_METHOD_6_D2248BC0C7880C3E_OFFSET UNITYSDK_OFFSET(0x7A942A0)
#define MOLEMOLE_MONOSPHERECOLLIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x7A94090)
#define MOLEMOLE_MONOSPHERECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x7A94480)
#define MOLEMOLE_MONOSPHERECOLLIDER___BASE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x7A944A0)
#define MOLEMOLE_MONOSPHERECOLLIDER___BASE_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x7A94500)
#define MOLEMOLE_MONOSPHERECOLLIDER___BASE_SETUPCOLLIDER_OFFSET UNITYSDK_OFFSET(0x7A94570)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSphereCollider_TypeDefinitionIndex = 38011;

	class MonoSphereCollider : public ::MoleMole::MonoConfigurableCollider
	{
	public:
		::UnityEngine::SphereCollider* Field_6_0; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER_ONDESTROY_OFFSET))(this);
		}

		::System::Void DrawLine(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER_DRAWLINE_OFFSET))(this, a1);
		}

		::System::Void Method_6_D2248BC0C7880C3E(::MoleMole::Config::ConfigTimeDrivenAttackCollider* a1, ::UnityEngine::LayerMask a2, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER_METHOD_6_D2248BC0C7880C3E_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER_CLEANUP_OFFSET))(this);
		}

		::System::Void __base_CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER___BASE_CLEANUP_OFFSET))(this);
		}

		::System::Void __base_DrawLine(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER___BASE_DRAWLINE_OFFSET))(this, a1);
		}

		::System::Void __base_SetupCollider(::MoleMole::Config::ConfigTimeDrivenAttackCollider* a1, ::UnityEngine::LayerMask a2, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER___BASE_SETUPCOLLIDER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER_METHOD_6_25CD86BF8626C8D9_OFFSET))(this, a1);
		}
	};
}
