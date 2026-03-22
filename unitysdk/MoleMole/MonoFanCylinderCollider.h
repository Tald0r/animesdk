#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_BA21CC391326FDD3.h"
#include "unitysdk/MoleMole/MonoConfigurableCollider.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshCollider; }

#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x82E9E80)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x82EA1D0)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x82EA280)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_INITCOLLIDER_OFFSET UNITYSDK_OFFSET(0x82EAB60)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_6A042D020D7DEEED_OFFSET UNITYSDK_OFFSET(0x82EAD30)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_78C082F46860C41E_OFFSET UNITYSDK_OFFSET(0x82EA870)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_B01B8F4A53E6BC48_OFFSET UNITYSDK_OFFSET(0x82EA790)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x82EA950)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x82E9EF0)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x82EA0D0)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x82EAC40)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x82EAC20)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER___BASE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x82EAC50)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER___BASE_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x82EACB0)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER___BASE_SETUPCOLLIDER_OFFSET UNITYSDK_OFFSET(0x82EAD20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoFanCylinderCollider_TypeDefinitionIndex = 66591;

	class MonoFanCylinderCollider : public ::MoleMole::MonoConfigurableCollider
	{
	public:
		static ::System::Int32* StaticGet_Field_6_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoFanCylinderCollider_TypeDefinitionIndex)->GetStaticField(0xED10);
		}
		::UnityEngine::MeshCollider* Field_6_0; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_ONDESTROY_OFFSET))(this);
		}

		::System::Void DrawLine(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_DRAWLINE_OFFSET))(this, a1);
		}

		::System::Void Method_6_B01B8F4A53E6BC48(::MoleMole::Config::ConfigTimeDrivenAttackCollider* a1, ::UnityEngine::LayerMask a2, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_B01B8F4A53E6BC48_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_CLEANUP_OFFSET))(this);
		}

		::System::Void InitCollider(::UnityEngine::LayerMask a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_INITCOLLIDER_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void __base_CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER___BASE_CLEANUP_OFFSET))(this);
		}

		::System::Void __base_DrawLine(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER___BASE_DRAWLINE_OFFSET))(this, a1);
		}

		::System::Void __base_SetupCollider(::MoleMole::Config::ConfigTimeDrivenAttackCollider* a1, ::UnityEngine::LayerMask a2, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER___BASE_SETUPCOLLIDER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Mesh* Method_6_6A042D020D7DEEED(::System::Single a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_6A042D020D7DEEED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Void Method_6_78C082F46860C41E(::System::Single a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_78C082F46860C41E_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_D7852DE078ACC1F1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_D7852DE078ACC1F1_OFFSET))(this);
		}
	};
}
