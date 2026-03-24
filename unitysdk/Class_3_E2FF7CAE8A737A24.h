#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_E2FF7CAE8A737A24_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x771ECF0)
#define CLASS_3_E2FF7CAE8A737A24_METHOD_3_22BF706A189D417F_OFFSET UNITYSDK_OFFSET(0x771F310)
#define CLASS_3_E2FF7CAE8A737A24_METHOD_3_6950DFC9E62DCDC3_OFFSET UNITYSDK_OFFSET(0x771F620)
#define CLASS_3_E2FF7CAE8A737A24_METHOD_3_A5BDF5C904FDBB47_OFFSET UNITYSDK_OFFSET(0x771EF90)
#define CLASS_3_E2FF7CAE8A737A24_METHOD_3_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x771F220)
#define CLASS_3_E2FF7CAE8A737A24_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x771F8E0)
#define CLASS_3_E2FF7CAE8A737A24_METHOD_3_D4E92F2DE5F84390_OFFSET UNITYSDK_OFFSET(0x771F4D0)
#define CLASS_3_E2FF7CAE8A737A24__CTOR_OFFSET UNITYSDK_OFFSET(0x771EF70)

inline static constexpr unsigned int Class_3_E2FF7CAE8A737A24_TypeDefinitionIndex = 52063;

class Class_3_E2FF7CAE8A737A24 : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2FF7CAE8A737A24__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_E2FF7CAE8A737A24_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_A5BDF5C904FDBB47(::Class_3_F35B080B137ECC46* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E2FF7CAE8A737A24_METHOD_3_A5BDF5C904FDBB47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_22BF706A189D417F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E2FF7CAE8A737A24_METHOD_3_22BF706A189D417F_OFFSET))(a1);
	}

	static ::System::Void Method_3_D4E92F2DE5F84390(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E2FF7CAE8A737A24_METHOD_3_D4E92F2DE5F84390_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_6950DFC9E62DCDC3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E2FF7CAE8A737A24_METHOD_3_6950DFC9E62DCDC3_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_E2FF7CAE8A737A24_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_E2FF7CAE8A737A24_METHOD_3_A8F6F688241E6DBC_OFFSET))();
	}
};
