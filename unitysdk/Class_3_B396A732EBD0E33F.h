#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_208CC9941471731A_962;
class Class_3_09C6D749A1B6BB3E;
class Class_3_C0D5B1A036ED00F0;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_B396A732EBD0E33F_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x6772BE0)
#define CLASS_3_B396A732EBD0E33F_METHOD_3_14588B9EF32611C7_OFFSET UNITYSDK_OFFSET(0x6776CF0)
#define CLASS_3_B396A732EBD0E33F_METHOD_3_418131801836D354_OFFSET UNITYSDK_OFFSET(0x67739A0)
#define CLASS_3_B396A732EBD0E33F_METHOD_3_6C96F7C0C1809564_OFFSET UNITYSDK_OFFSET(0x6773230)
#define CLASS_3_B396A732EBD0E33F_METHOD_3_807F2A52783217B1_OFFSET UNITYSDK_OFFSET(0x6775D00)
#define CLASS_3_B396A732EBD0E33F_METHOD_3_90FAC76749C7F5B5_OFFSET UNITYSDK_OFFSET(0x6775AE0)
#define CLASS_3_B396A732EBD0E33F_METHOD_3_A6B9637E8B82C0D3_OFFSET UNITYSDK_OFFSET(0x6774660)
#define CLASS_3_B396A732EBD0E33F_METHOD_3_B95AB671BE22D94D_OFFSET UNITYSDK_OFFSET(0x67755C0)
#define CLASS_3_B396A732EBD0E33F_METHOD_3_B9B2FC4F6DB802EB_OFFSET UNITYSDK_OFFSET(0x6774580)
#define CLASS_3_B396A732EBD0E33F_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x6773820)
#define CLASS_3_B396A732EBD0E33F_METHOD_3_BED82C557EE24F50_OFFSET UNITYSDK_OFFSET(0x6773C00)
#define CLASS_3_B396A732EBD0E33F_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6773BA0)
#define CLASS_3_B396A732EBD0E33F_METHOD_3_E05EBED2EFB81B7C_OFFSET UNITYSDK_OFFSET(0x6774970)
#define CLASS_3_B396A732EBD0E33F_METHOD_3_E394FF32D40D35D6_OFFSET UNITYSDK_OFFSET(0x6773890)
#define CLASS_3_B396A732EBD0E33F_METHOD_3_E52A85E9F69A491B_OFFSET UNITYSDK_OFFSET(0x6775A50)
#define CLASS_3_B396A732EBD0E33F_METHOD_3_F702E6651D2A079D_OFFSET UNITYSDK_OFFSET(0x67751B0)
#define CLASS_3_B396A732EBD0E33F_UPDATE_OFFSET UNITYSDK_OFFSET(0x67730B0)
#define CLASS_3_B396A732EBD0E33F__CTOR_OFFSET UNITYSDK_OFFSET(0x6773210)

inline static constexpr unsigned int Class_3_B396A732EBD0E33F_TypeDefinitionIndex = 73210;

class Class_3_B396A732EBD0E33F : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B396A732EBD0E33F__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_B396A732EBD0E33F_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B396A732EBD0E33F_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_6C96F7C0C1809564(::Class_3_09C6D749A1B6BB3E* a1, ::Class_3_C0D5B1A036ED00F0* a2, ::Class_3_F33F9DC5F4112336* a3)
	{
		return ((::System::Void(*)(::Class_3_09C6D749A1B6BB3E*, ::Class_3_C0D5B1A036ED00F0*, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + CLASS_3_B396A732EBD0E33F_METHOD_3_6C96F7C0C1809564_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_B396A732EBD0E33F_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_E394FF32D40D35D6(::Class_3_09C6D749A1B6BB3E* a1, ::System::UInt32 a2, ::UnityEngine::GameObject*& a3)
	{
		return ((::System::Boolean(*)(::Class_3_09C6D749A1B6BB3E*, ::System::UInt32, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + CLASS_3_B396A732EBD0E33F_METHOD_3_E394FF32D40D35D6_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_418131801836D354(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B396A732EBD0E33F_METHOD_3_418131801836D354_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B396A732EBD0E33F_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_BED82C557EE24F50(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B396A732EBD0E33F_METHOD_3_BED82C557EE24F50_OFFSET))(a1);
	}

	static ::System::String* Method_3_B9B2FC4F6DB802EB(::MoleMole::Battle::Entity* a1, ::Class_3_C0D5B1A036ED00F0* a2)
	{
		return ((::System::String*(*)(::MoleMole::Battle::Entity*, ::Class_3_C0D5B1A036ED00F0*))((::PBYTE)hIl2Cpp + CLASS_3_B396A732EBD0E33F_METHOD_3_B9B2FC4F6DB802EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A6B9637E8B82C0D3(::Class_3_09C6D749A1B6BB3E* a1, ::System::UInt32 a2, ::UnityEngine::GameObject* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_3_09C6D749A1B6BB3E*, ::System::UInt32, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_B396A732EBD0E33F_METHOD_3_A6B9637E8B82C0D3_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_E05EBED2EFB81B7C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B396A732EBD0E33F_METHOD_3_E05EBED2EFB81B7C_OFFSET))(a1);
	}

	static ::System::Void Method_3_F702E6651D2A079D(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B396A732EBD0E33F_METHOD_3_F702E6651D2A079D_OFFSET))(a1, a2);
	}

	static ::UnityEngine::GameObject* Method_3_B95AB671BE22D94D(::Class_3_09C6D749A1B6BB3E* a1, ::UnityEngine::Vector3 a2, ::System::String* a3)
	{
		return ((::UnityEngine::GameObject*(*)(::Class_3_09C6D749A1B6BB3E*, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_B396A732EBD0E33F_METHOD_3_B95AB671BE22D94D_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_E52A85E9F69A491B(::Class_2_208CC9941471731A_962* a1)
	{
		return ((::System::Boolean(*)(::Class_2_208CC9941471731A_962*))((::PBYTE)hIl2Cpp + CLASS_3_B396A732EBD0E33F_METHOD_3_E52A85E9F69A491B_OFFSET))(a1);
	}

	static ::System::Void Method_3_90FAC76749C7F5B5(::Class_3_09C6D749A1B6BB3E* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::Class_3_09C6D749A1B6BB3E*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B396A732EBD0E33F_METHOD_3_90FAC76749C7F5B5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_807F2A52783217B1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B396A732EBD0E33F_METHOD_3_807F2A52783217B1_OFFSET))(a1);
	}

	static ::System::Void Method_3_14588B9EF32611C7(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B396A732EBD0E33F_METHOD_3_14588B9EF32611C7_OFFSET))(a1);
	}
};
