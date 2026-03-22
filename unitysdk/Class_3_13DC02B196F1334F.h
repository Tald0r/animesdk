#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_2B5C3D9688202862;
class Class_2_874AD1BB59BFEABD;
class Class_2_FC836877E452E6AE;
class Class_3_C109CA982236435D;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_13DC02B196F1334F_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x85EC110)
#define CLASS_3_13DC02B196F1334F_METHOD_3_04437470B889FCAB_OFFSET UNITYSDK_OFFSET(0x85EE150)
#define CLASS_3_13DC02B196F1334F_METHOD_3_12E2584290784D11_OFFSET UNITYSDK_OFFSET(0x85EC7F0)
#define CLASS_3_13DC02B196F1334F_METHOD_3_15BA09B213C6A566_OFFSET UNITYSDK_OFFSET(0x85EDE50)
#define CLASS_3_13DC02B196F1334F_METHOD_3_1CF675F1A69603D1_OFFSET UNITYSDK_OFFSET(0x85EE320)
#define CLASS_3_13DC02B196F1334F_METHOD_3_1D93B6C03FF06521_OFFSET UNITYSDK_OFFSET(0x85EFAA0)
#define CLASS_3_13DC02B196F1334F_METHOD_3_268330D7C4D0C313_OFFSET UNITYSDK_OFFSET(0x85EFEF0)
#define CLASS_3_13DC02B196F1334F_METHOD_3_2D06A13AF82B03B1_OFFSET UNITYSDK_OFFSET(0x85ED280)
#define CLASS_3_13DC02B196F1334F_METHOD_3_49581DC19BD3C45B_OFFSET UNITYSDK_OFFSET(0x85EC910)
#define CLASS_3_13DC02B196F1334F_METHOD_3_4B123B063B456239_OFFSET UNITYSDK_OFFSET(0x85EEB30)
#define CLASS_3_13DC02B196F1334F_METHOD_3_4BCEE542E57059FC_OFFSET UNITYSDK_OFFSET(0x85EEF20)
#define CLASS_3_13DC02B196F1334F_METHOD_3_4C03A7DAA633EEBB_OFFSET UNITYSDK_OFFSET(0x85ED760)
#define CLASS_3_13DC02B196F1334F_METHOD_3_799AB3BA296A2576_OFFSET UNITYSDK_OFFSET(0x85EF130)
#define CLASS_3_13DC02B196F1334F_METHOD_3_875763D9FADCD5CC_OFFSET UNITYSDK_OFFSET(0x85EF900)
#define CLASS_3_13DC02B196F1334F_METHOD_3_8C9D922DA2922EDF_OFFSET UNITYSDK_OFFSET(0x85EF570)
#define CLASS_3_13DC02B196F1334F_METHOD_3_8EBDE95FF2D89FF4_OFFSET UNITYSDK_OFFSET(0x85ED080)
#define CLASS_3_13DC02B196F1334F_METHOD_3_91D97064765DCBF1_OFFSET UNITYSDK_OFFSET(0x85EC9A0)
#define CLASS_3_13DC02B196F1334F_METHOD_3_9D6D482D0D66151C_1_OFFSET UNITYSDK_OFFSET(0x85F04C0)
#define CLASS_3_13DC02B196F1334F_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x85F0460)
#define CLASS_3_13DC02B196F1334F_METHOD_3_A8E32A6E7543F8F2_1_OFFSET UNITYSDK_OFFSET(0x85F01C0)
#define CLASS_3_13DC02B196F1334F_METHOD_3_A8E32A6E7543F8F2_OFFSET UNITYSDK_OFFSET(0x85EDB00)
#define CLASS_3_13DC02B196F1334F_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x85EFA30)
#define CLASS_3_13DC02B196F1334F_METHOD_3_C456DA8D21F058D6_OFFSET UNITYSDK_OFFSET(0x85EC6F0)
#define CLASS_3_13DC02B196F1334F_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x85EDDF0)
#define CLASS_3_13DC02B196F1334F_METHOD_3_D3F337291E08D220_OFFSET UNITYSDK_OFFSET(0x85EE700)
#define CLASS_3_13DC02B196F1334F_METHOD_3_D7EC6EA1892FBC2A_OFFSET UNITYSDK_OFFSET(0x85EE0B0)
#define CLASS_3_13DC02B196F1334F_METHOD_3_DFE9C06DFC50DB35_OFFSET UNITYSDK_OFFSET(0x85ECAD0)
#define CLASS_3_13DC02B196F1334F_UPDATE_OFFSET UNITYSDK_OFFSET(0x85EC550)
#define CLASS_3_13DC02B196F1334F__CTOR_OFFSET UNITYSDK_OFFSET(0x85EC6D0)

inline static constexpr unsigned int Class_3_13DC02B196F1334F_TypeDefinitionIndex = 61840;

class Class_3_13DC02B196F1334F : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_UPDATE_OFFSET))(this);
	}

	static ::System::Boolean Method_3_C456DA8D21F058D6(::Class_3_C109CA982236435D* a1, ::MoleMole::Config::DamageElementType a2, ::MoleMole::Config::EVariantElement a3)
	{
		return ((::System::Boolean(*)(::Class_3_C109CA982236435D*, ::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_C456DA8D21F058D6_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_12E2584290784D11(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_12E2584290784D11_OFFSET))(a1);
	}

	static ::System::Void Method_3_91D97064765DCBF1(::Class_3_C109CA982236435D* a1)
	{
		return ((::System::Void(*)(::Class_3_C109CA982236435D*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_91D97064765DCBF1_OFFSET))(a1);
	}

	static ::System::Void Method_3_DFE9C06DFC50DB35(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_DFE9C06DFC50DB35_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_49581DC19BD3C45B(::Class_3_C109CA982236435D* a1)
	{
		return ((::System::Boolean(*)(::Class_3_C109CA982236435D*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_49581DC19BD3C45B_OFFSET))(a1);
	}

	static ::System::Void Method_3_8EBDE95FF2D89FF4(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_8EBDE95FF2D89FF4_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_15BA09B213C6A566(::Class_3_C109CA982236435D* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_C109CA982236435D*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_15BA09B213C6A566_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_D7EC6EA1892FBC2A(::Class_3_C109CA982236435D* a1, ::MoleMole::Config::DamageElementType a2, ::MoleMole::Config::EVariantElement a3)
	{
		return ((::System::Boolean(*)(::Class_3_C109CA982236435D*, ::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_D7EC6EA1892FBC2A_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_D3F337291E08D220(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2B5C3D9688202862* a2, ::System::Int32 a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::Class_3_F41D242A20F8FE06*, ::Class_2_2B5C3D9688202862*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_D3F337291E08D220_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_04437470B889FCAB(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::DamageElementType a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_04437470B889FCAB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A8E32A6E7543F8F2(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::DamageElementType a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_A8E32A6E7543F8F2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4B123B063B456239(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::DamageElementType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::DamageElementType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_4B123B063B456239_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_4BCEE542E57059FC(::Class_3_C109CA982236435D* a1, ::MoleMole::Config::DamageElementType a2, ::MoleMole::Config::EVariantElement a3)
	{
		return ((::System::Void(*)(::Class_3_C109CA982236435D*, ::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_4BCEE542E57059FC_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_1CF675F1A69603D1(::Class_3_C109CA982236435D* a1, ::MoleMole::Config::DamageElementType a2, ::MoleMole::Config::EVariantElement a3)
	{
		return ((::System::Boolean(*)(::Class_3_C109CA982236435D*, ::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_1CF675F1A69603D1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_799AB3BA296A2576(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::DamageElementType a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::DamageElementType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_799AB3BA296A2576_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_8C9D922DA2922EDF(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::DamageElementType a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_8C9D922DA2922EDF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_875763D9FADCD5CC(::Class_3_C109CA982236435D* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_C109CA982236435D*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_875763D9FADCD5CC_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_4C03A7DAA633EEBB(::MoleMole::Battle::Entity* a1, ::Class_2_FC836877E452E6AE* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_FC836877E452E6AE*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_4C03A7DAA633EEBB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1D93B6C03FF06521(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EVariantElement a2, ::Class_2_874AD1BB59BFEABD* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EVariantElement, ::Class_2_874AD1BB59BFEABD*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_1D93B6C03FF06521_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_268330D7C4D0C313(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_268330D7C4D0C313_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A8E32A6E7543F8F2_1(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::DamageElementType a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_A8E32A6E7543F8F2_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2D06A13AF82B03B1(::MoleMole::Battle::Entity* a1, ::Class_2_874AD1BB59BFEABD* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_874AD1BB59BFEABD*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_2D06A13AF82B03B1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Void Method_3_9D6D482D0D66151C_1(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_9D6D482D0D66151C_1_OFFSET))(a1);
	}
};
