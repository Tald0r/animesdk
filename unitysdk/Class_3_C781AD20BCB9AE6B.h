#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_26.h"

class Class_1_B7E341C5F1A6F199;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_C781AD20BCB9AE6B_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xD2929F0)
#define CLASS_3_C781AD20BCB9AE6B_METHOD_3_0F2138E056F9294A_OFFSET UNITYSDK_OFFSET(0xD293270)
#define CLASS_3_C781AD20BCB9AE6B_METHOD_3_3C665D8363859B91_OFFSET UNITYSDK_OFFSET(0xD293480)
#define CLASS_3_C781AD20BCB9AE6B_METHOD_3_60DB8351F32E9ECC_OFFSET UNITYSDK_OFFSET(0xD292FF0)
#define CLASS_3_C781AD20BCB9AE6B_METHOD_3_6EE6A27960654DB8_OFFSET UNITYSDK_OFFSET(0xD293960)
#define CLASS_3_C781AD20BCB9AE6B_METHOD_3_A7D2BDFA1FA2DBBE_1_OFFSET UNITYSDK_OFFSET(0xD293B90)
#define CLASS_3_C781AD20BCB9AE6B_METHOD_3_A7D2BDFA1FA2DBBE_OFFSET UNITYSDK_OFFSET(0xD292E00)
#define CLASS_3_C781AD20BCB9AE6B_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xD293D20)
#define CLASS_3_C781AD20BCB9AE6B_METHOD_3_E3B592547FB706FD_OFFSET UNITYSDK_OFFSET(0xD292D10)
#define CLASS_3_C781AD20BCB9AE6B_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xD292F90)
#define CLASS_3_C781AD20BCB9AE6B__CTOR_OFFSET UNITYSDK_OFFSET(0xD292CF0)

inline static constexpr unsigned int Class_3_C781AD20BCB9AE6B_TypeDefinitionIndex = 56330;

class Class_3_C781AD20BCB9AE6B : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C781AD20BCB9AE6B__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_C781AD20BCB9AE6B_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_E3B592547FB706FD(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_C781AD20BCB9AE6B_METHOD_3_E3B592547FB706FD_OFFSET))(a1);
	}

	::System::Void Method_3_A7D2BDFA1FA2DBBE(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_C781AD20BCB9AE6B_METHOD_3_A7D2BDFA1FA2DBBE_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_C781AD20BCB9AE6B_METHOD_3_F0E307B84478A272_OFFSET))();
	}

	static ::Enum_3_0A3761FE34514D6C_26 Method_3_60DB8351F32E9ECC()
	{
		return ((::Enum_3_0A3761FE34514D6C_26(*)())((::PBYTE)hIl2Cpp + CLASS_3_C781AD20BCB9AE6B_METHOD_3_60DB8351F32E9ECC_OFFSET))();
	}

	static ::System::Void Method_3_0F2138E056F9294A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C781AD20BCB9AE6B_METHOD_3_0F2138E056F9294A_OFFSET))();
	}

	::System::Void Method_3_3C665D8363859B91(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_C781AD20BCB9AE6B_METHOD_3_3C665D8363859B91_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_6EE6A27960654DB8(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_C781AD20BCB9AE6B_METHOD_3_6EE6A27960654DB8_OFFSET))(a1);
	}

	::System::Void Method_3_A7D2BDFA1FA2DBBE_1(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_C781AD20BCB9AE6B_METHOD_3_A7D2BDFA1FA2DBBE_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_C781AD20BCB9AE6B_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
