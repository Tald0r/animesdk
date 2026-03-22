#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_B1197A63FC972D37_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xB072C90)
#define CLASS_3_B1197A63FC972D37_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB073060)
#define CLASS_3_B1197A63FC972D37_METHOD_3_2F2E93838382645A_OFFSET UNITYSDK_OFFSET(0xB0737A0)
#define CLASS_3_B1197A63FC972D37_METHOD_3_46EB8F1325291579_OFFSET UNITYSDK_OFFSET(0xB073990)
#define CLASS_3_B1197A63FC972D37_METHOD_3_AA3A7001F3F01E27_OFFSET UNITYSDK_OFFSET(0xB073B20)
#define CLASS_3_B1197A63FC972D37_METHOD_3_B2B838485F76427D_OFFSET UNITYSDK_OFFSET(0xB073CC0)
#define CLASS_3_B1197A63FC972D37_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xB073550)
#define CLASS_3_B1197A63FC972D37_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB073200)
#define CLASS_3_B1197A63FC972D37_METHOD_3_D51E6853ECD5C052_OFFSET UNITYSDK_OFFSET(0xB073260)
#define CLASS_3_B1197A63FC972D37_METHOD_3_EDCFC0BBB514C617_1_OFFSET UNITYSDK_OFFSET(0xB073370)
#define CLASS_3_B1197A63FC972D37_METHOD_3_EDCFC0BBB514C617_OFFSET UNITYSDK_OFFSET(0xB0735C0)
#define CLASS_3_B1197A63FC972D37__CTOR_OFFSET UNITYSDK_OFFSET(0xB0731E0)

inline static constexpr unsigned int Class_3_B1197A63FC972D37_TypeDefinitionIndex = 48337;

class Class_3_B1197A63FC972D37 : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37_LATEUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_D51E6853ECD5C052(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37_METHOD_3_D51E6853ECD5C052_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_EDCFC0BBB514C617(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37_METHOD_3_EDCFC0BBB514C617_OFFSET))(a1);
	}

	static ::System::Void Method_3_EDCFC0BBB514C617_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37_METHOD_3_EDCFC0BBB514C617_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_2F2E93838382645A(::System::Boolean a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Vector2, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37_METHOD_3_2F2E93838382645A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_46EB8F1325291579(::System::Boolean a1, ::System::Single a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37_METHOD_3_46EB8F1325291579_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_AA3A7001F3F01E27(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37_METHOD_3_AA3A7001F3F01E27_OFFSET))(a1);
	}

	static ::System::Void Method_3_B2B838485F76427D(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37_METHOD_3_B2B838485F76427D_OFFSET))(a1);
	}
};
