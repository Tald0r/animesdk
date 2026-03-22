#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_1_3B91E8B5FF29338A;
class Class_1_B7E341C5F1A6F199;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_0123D169092FE48C_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x8D110C0)
#define CLASS_3_0123D169092FE48C_METHOD_3_5932CC4E78256ED5_OFFSET UNITYSDK_OFFSET(0x8D11D80)
#define CLASS_3_0123D169092FE48C_METHOD_3_929DD16AD3D83902_OFFSET UNITYSDK_OFFSET(0x8D113F0)
#define CLASS_3_0123D169092FE48C_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x8D11D20)
#define CLASS_3_0123D169092FE48C_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x8D11380)
#define CLASS_3_0123D169092FE48C_METHOD_3_EA06FF4FB4FA463E_OFFSET UNITYSDK_OFFSET(0x8D115F0)
#define CLASS_3_0123D169092FE48C__CTOR_OFFSET UNITYSDK_OFFSET(0x8D11360)

inline static constexpr unsigned int Class_3_0123D169092FE48C_TypeDefinitionIndex = 76444;

class Class_3_0123D169092FE48C : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0123D169092FE48C__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_0123D169092FE48C_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_0123D169092FE48C_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_929DD16AD3D83902(::Class_1_3B91E8B5FF29338A* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_3B91E8B5FF29338A*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_0123D169092FE48C_METHOD_3_929DD16AD3D83902_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_EA06FF4FB4FA463E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_0123D169092FE48C_METHOD_3_EA06FF4FB4FA463E_OFFSET))(a1);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_0123D169092FE48C_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Void Method_3_5932CC4E78256ED5(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_0123D169092FE48C_METHOD_3_5932CC4E78256ED5_OFFSET))(a1, a2);
	}
};
