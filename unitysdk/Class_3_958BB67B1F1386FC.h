#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_1_B7E341C5F1A6F199;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_958BB67B1F1386FC_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xB316D90)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_25F3139CC6B2877A_OFFSET UNITYSDK_OFFSET(0xB318670)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_39468678C9BF10F3_OFFSET UNITYSDK_OFFSET(0xB318580)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_6A8BC08449E36907_OFFSET UNITYSDK_OFFSET(0xB3174B0)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_7EE99EE6AA394745_OFFSET UNITYSDK_OFFSET(0xB318380)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_92EEB198074DA183_1_OFFSET UNITYSDK_OFFSET(0xB317A50)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_92EEB198074DA183_OFFSET UNITYSDK_OFFSET(0xB3179F0)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_A4AD1CFCD48A2458_OFFSET UNITYSDK_OFFSET(0xB317DC0)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_ABFF84F08E943DB9_1_OFFSET UNITYSDK_OFFSET(0xB317630)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_ABFF84F08E943DB9_OFFSET UNITYSDK_OFFSET(0xB317810)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xB3173E0)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB317450)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_D87CB08AB764EA70_OFFSET UNITYSDK_OFFSET(0xB317AB0)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_E0078F6C95D82674_1_OFFSET UNITYSDK_OFFSET(0xB3181E0)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_E0078F6C95D82674_OFFSET UNITYSDK_OFFSET(0xB317C20)
#define CLASS_3_958BB67B1F1386FC_UPDATE_OFFSET UNITYSDK_OFFSET(0xB317240)
#define CLASS_3_958BB67B1F1386FC__CTOR_OFFSET UNITYSDK_OFFSET(0xB3173C0)

inline static constexpr unsigned int Class_3_958BB67B1F1386FC_TypeDefinitionIndex = 39185;

class Class_3_958BB67B1F1386FC : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_6A8BC08449E36907(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_6A8BC08449E36907_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_92EEB198074DA183(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_92EEB198074DA183_OFFSET))(a1);
	}

	static ::System::Void Method_3_ABFF84F08E943DB9(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_ABFF84F08E943DB9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_ABFF84F08E943DB9_1(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_ABFF84F08E943DB9_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_92EEB198074DA183_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_92EEB198074DA183_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_D87CB08AB764EA70(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_D87CB08AB764EA70_OFFSET))(a1);
	}

	::System::Void Method_3_E0078F6C95D82674(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_E0078F6C95D82674_OFFSET))(this, a1);
	}

	::System::Void Method_3_A4AD1CFCD48A2458(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_A4AD1CFCD48A2458_OFFSET))(this, a1);
	}

	::System::Void Method_3_E0078F6C95D82674_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_E0078F6C95D82674_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_7EE99EE6AA394745(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_7EE99EE6AA394745_OFFSET))(this, a1);
	}

	::System::Void Method_3_39468678C9BF10F3(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_39468678C9BF10F3_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_25F3139CC6B2877A(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_25F3139CC6B2877A_OFFSET))(a1, a2);
	}
};
