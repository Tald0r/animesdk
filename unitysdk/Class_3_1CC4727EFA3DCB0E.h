#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_3_CB5FEA0F6B413476;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_1CC4727EFA3DCB0E_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x8225BE0)
#define CLASS_3_1CC4727EFA3DCB0E_METHOD_3_418131801836D354_OFFSET UNITYSDK_OFFSET(0x82262B0)
#define CLASS_3_1CC4727EFA3DCB0E_METHOD_3_45AA42371B78CD1B_1_OFFSET UNITYSDK_OFFSET(0x8226B70)
#define CLASS_3_1CC4727EFA3DCB0E_METHOD_3_45AA42371B78CD1B_OFFSET UNITYSDK_OFFSET(0x8226170)
#define CLASS_3_1CC4727EFA3DCB0E_METHOD_3_724D2338ACD3E8A3_OFFSET UNITYSDK_OFFSET(0x82266D0)
#define CLASS_3_1CC4727EFA3DCB0E_METHOD_3_7812F8878B7003E4_OFFSET UNITYSDK_OFFSET(0x8226F30)
#define CLASS_3_1CC4727EFA3DCB0E_METHOD_3_84D29FD846000139_OFFSET UNITYSDK_OFFSET(0x8226490)
#define CLASS_3_1CC4727EFA3DCB0E_METHOD_3_A4AD1CFCD48A2458_OFFSET UNITYSDK_OFFSET(0x82267B0)
#define CLASS_3_1CC4727EFA3DCB0E_METHOD_3_AA6AC38756233BD0_1_OFFSET UNITYSDK_OFFSET(0x8226B00)
#define CLASS_3_1CC4727EFA3DCB0E_METHOD_3_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x8226660)
#define CLASS_3_1CC4727EFA3DCB0E_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x8226740)
#define CLASS_3_1CC4727EFA3DCB0E_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8226600)
#define CLASS_3_1CC4727EFA3DCB0E_METHOD_3_CB680BB9241E6DE9_OFFSET UNITYSDK_OFFSET(0x8226CB0)
#define CLASS_3_1CC4727EFA3DCB0E_METHOD_3_F94FE4BEF0AC8EB2_OFFSET UNITYSDK_OFFSET(0x8227130)
#define CLASS_3_1CC4727EFA3DCB0E_UPDATE_OFFSET UNITYSDK_OFFSET(0x8225FD0)
#define CLASS_3_1CC4727EFA3DCB0E__CTOR_OFFSET UNITYSDK_OFFSET(0x8226150)

inline static constexpr unsigned int Class_3_1CC4727EFA3DCB0E_TypeDefinitionIndex = 55895;

class Class_3_1CC4727EFA3DCB0E : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CC4727EFA3DCB0E__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_1CC4727EFA3DCB0E_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CC4727EFA3DCB0E_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_45AA42371B78CD1B(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1CC4727EFA3DCB0E_METHOD_3_45AA42371B78CD1B_OFFSET))(this, a1);
	}

	::System::Void Method_3_418131801836D354(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1CC4727EFA3DCB0E_METHOD_3_418131801836D354_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CC4727EFA3DCB0E_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_84D29FD846000139(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1CC4727EFA3DCB0E_METHOD_3_84D29FD846000139_OFFSET))(this, a1);
	}

	::System::Void Method_3_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1CC4727EFA3DCB0E_METHOD_3_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3(::Class_3_CB5FEA0F6B413476* a1)
	{
		return ((::System::Void(*)(::Class_3_CB5FEA0F6B413476*))((::PBYTE)hIl2Cpp + CLASS_3_1CC4727EFA3DCB0E_METHOD_3_724D2338ACD3E8A3_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_1CC4727EFA3DCB0E_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_A4AD1CFCD48A2458(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1CC4727EFA3DCB0E_METHOD_3_A4AD1CFCD48A2458_OFFSET))(this, a1);
	}

	::System::Void Method_3_AA6AC38756233BD0_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1CC4727EFA3DCB0E_METHOD_3_AA6AC38756233BD0_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_45AA42371B78CD1B_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1CC4727EFA3DCB0E_METHOD_3_45AA42371B78CD1B_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_CB680BB9241E6DE9(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1CC4727EFA3DCB0E_METHOD_3_CB680BB9241E6DE9_OFFSET))(this, a1);
	}

	::System::Void Method_3_7812F8878B7003E4(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1CC4727EFA3DCB0E_METHOD_3_7812F8878B7003E4_OFFSET))(this, a1);
	}

	::System::Void Method_3_F94FE4BEF0AC8EB2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_1CC4727EFA3DCB0E_METHOD_3_F94FE4BEF0AC8EB2_OFFSET))(this, a1);
	}
};
