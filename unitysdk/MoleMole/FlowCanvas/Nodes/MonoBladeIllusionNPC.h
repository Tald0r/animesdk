#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_DAB41DAFBDB7AAF8_Class_3_50D343C44D28BEFB_7;
namespace MoleMole { class BladeIllusionNPCDisplayConfig; }
namespace RootMotion::FinalIK { class LookController; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_AWAKE_OFFSET UNITYSDK_OFFSET(0x8F0E150)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_HIDE_OFFSET UNITYSDK_OFFSET(0x8F0EEC0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_INITCONFIG_OFFSET UNITYSDK_OFFSET(0x8F0E700)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x8F0EFA0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_METHOD_5_151F18E94867FFE1_1_OFFSET UNITYSDK_OFFSET(0x8F0ED40)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_METHOD_5_151F18E94867FFE1_OFFSET UNITYSDK_OFFSET(0x8F0EE00)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_METHOD_5_527E2BCA827A1A8D_OFFSET UNITYSDK_OFFSET(0x8F0F790)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_METHOD_5_52CA0F45BC3414DC_OFFSET UNITYSDK_OFFSET(0x8F0F110)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_METHOD_5_7223CD34BEFCBF48_OFFSET UNITYSDK_OFFSET(0x8F0E2E0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_METHOD_5_847FE1E8693369EC_OFFSET UNITYSDK_OFFSET(0x8F0F8D0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_METHOD_5_CF359EFC8665BA3E_OFFSET UNITYSDK_OFFSET(0x8F0F4F0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8F0F380)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x8F0F230)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8F0E780)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC__CCTOR_OFFSET UNITYSDK_OFFSET(0x8F0F490)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x8F0F470)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int MonoBladeIllusionNPC_TypeDefinitionIndex = 67745;

	class MonoBladeIllusionNPC : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_13()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoBladeIllusionNPC_TypeDefinitionIndex)->GetStaticField(0xD910);
		}
		static ::System::Int32* StaticGet_Field_5_12()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoBladeIllusionNPC_TypeDefinitionIndex)->GetStaticField(0xD914);
		}
		static ::System::Int32* StaticGet_Field_5_11()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoBladeIllusionNPC_TypeDefinitionIndex)->GetStaticField(0xD918);
		}
		::UnityEngine::ParticleSystem* Field_5_0; // 0x18
		::RootMotion::FinalIK::LookController* Field_5_1; // 0x20
		::Il2CppArray<::UnityEngine::Material*>* Field_5_2; // 0x28
		::UnityEngine::Animator* Field_5_3; // 0x30
		::MoleMole::BladeIllusionNPCDisplayConfig* Field_5_4; // 0x38
		::System::Boolean Field_5_5; // 0x40
		::System::Boolean Field_5_6; // 0x41
		::System::Single Field_5_7; // 0x44
		::System::Boolean Field_5_8; // 0x48
		::System::Single Field_5_9; // 0x4C
		::Class_1_DAB41DAFBDB7AAF8_Class_3_50D343C44D28BEFB_7* Field_5_10; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_AWAKE_OFFSET))(this);
		}

		::System::Void InitConfig(::MoleMole::BladeIllusionNPCDisplayConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::BladeIllusionNPCDisplayConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_INITCONFIG_OFFSET))(this, a1);
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_ONSHOW_OFFSET))(this);
		}

		::System::Void Hide(::Class_1_DAB41DAFBDB7AAF8_Class_3_50D343C44D28BEFB_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DAB41DAFBDB7AAF8_Class_3_50D343C44D28BEFB_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_HIDE_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void Method_5_151F18E94867FFE1(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_METHOD_5_151F18E94867FFE1_OFFSET))(a1);
		}

		static ::System::Void Method_5_151F18E94867FFE1_1(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_METHOD_5_151F18E94867FFE1_1_OFFSET))(a1);
		}

		static ::System::Void Method_5_CF359EFC8665BA3E(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_METHOD_5_CF359EFC8665BA3E_OFFSET))(a1);
		}

		::System::Void Method_5_52CA0F45BC3414DC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_METHOD_5_52CA0F45BC3414DC_OFFSET))(this, a1);
		}

		::System::Void Method_5_7223CD34BEFCBF48()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_METHOD_5_7223CD34BEFCBF48_OFFSET))(this);
		}

		static ::System::Void Method_5_847FE1E8693369EC(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_METHOD_5_847FE1E8693369EC_OFFSET))(a1);
		}

		static ::System::Void Method_5_527E2BCA827A1A8D(::System::Single a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::System::Single, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_METHOD_5_527E2BCA827A1A8D_OFFSET))(a1, a2);
		}
	};
}
