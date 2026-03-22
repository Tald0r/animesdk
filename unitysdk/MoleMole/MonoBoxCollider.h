#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_BA21CC391326FDD3.h"
#include "unitysdk/MoleMole/MonoConfigurableCollider.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace UnityEngine { class BoxCollider; }

#define MOLEMOLE_MONOBOXCOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0xA484C60)
#define MOLEMOLE_MONOBOXCOLLIDER_CLEANUP_OFFSET UNITYSDK_OFFSET(0xA484F50)
#define MOLEMOLE_MONOBOXCOLLIDER_DRAWLINE_OFFSET UNITYSDK_OFFSET(0xA4852B0)
#define MOLEMOLE_MONOBOXCOLLIDER_METHOD_6_06F625B586C4B600_OFFSET UNITYSDK_OFFSET(0xA484FF0)
#define MOLEMOLE_MONOBOXCOLLIDER_METHOD_6_24EC7787E7AF3793_OFFSET UNITYSDK_OFFSET(0xA4850D0)
#define MOLEMOLE_MONOBOXCOLLIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA484E70)
#define MOLEMOLE_MONOBOXCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xA485490)
#define MOLEMOLE_MONOBOXCOLLIDER___BASE_CLEANUP_OFFSET UNITYSDK_OFFSET(0xA4854B0)
#define MOLEMOLE_MONOBOXCOLLIDER___BASE_DRAWLINE_OFFSET UNITYSDK_OFFSET(0xA485510)
#define MOLEMOLE_MONOBOXCOLLIDER___BASE_SETUPCOLLIDER_OFFSET UNITYSDK_OFFSET(0xA485580)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBoxCollider_TypeDefinitionIndex = 71889;

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

		::System::Void Method_6_06F625B586C4B600(::MoleMole::Config::ConfigTimeDrivenAttackCollider* a1, ::UnityEngine::LayerMask a2, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER_METHOD_6_06F625B586C4B600_OFFSET))(this, a1, a2, a3);
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

		::System::Void __base_SetupCollider(::MoleMole::Config::ConfigTimeDrivenAttackCollider* a1, ::UnityEngine::LayerMask a2, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER___BASE_SETUPCOLLIDER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_24EC7787E7AF3793(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER_METHOD_6_24EC7787E7AF3793_OFFSET))(this, a1, a2, a3);
		}
	};
}
