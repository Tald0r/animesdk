#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneFootPrint_FootType.h"
#include "unitysdk/MoleMole/Config/ShoesType.h"
#include "unitysdk/MoleMole/Config/TerrainMatType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_B62C942A2774BBB8;
class Class_3_D360C43AE45B97C2;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_AABB325E0C213A37_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x8D6E4B0)
#define CLASS_3_AABB325E0C213A37_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x8D6E7E0)
#define CLASS_3_AABB325E0C213A37_METHOD_3_0FEF192E5797A1AB_OFFSET UNITYSDK_OFFSET(0x8D70C00)
#define CLASS_3_AABB325E0C213A37_METHOD_3_2099EB6E3F908273_OFFSET UNITYSDK_OFFSET(0x8D71250)
#define CLASS_3_AABB325E0C213A37_METHOD_3_2D58832A36FF5158_OFFSET UNITYSDK_OFFSET(0x8D6FC10)
#define CLASS_3_AABB325E0C213A37_METHOD_3_325AEF0B8A6B46C1_OFFSET UNITYSDK_OFFSET(0x8D6E980)
#define CLASS_3_AABB325E0C213A37_METHOD_3_47A62F348FC86425_OFFSET UNITYSDK_OFFSET(0x8D70E30)
#define CLASS_3_AABB325E0C213A37_METHOD_3_566C2E8654887332_OFFSET UNITYSDK_OFFSET(0x8D70070)
#define CLASS_3_AABB325E0C213A37_METHOD_3_664325B5AE1E4262_OFFSET UNITYSDK_OFFSET(0x8D701B0)
#define CLASS_3_AABB325E0C213A37_METHOD_3_97CE2960F95C54E3_OFFSET UNITYSDK_OFFSET(0x8D71310)
#define CLASS_3_AABB325E0C213A37_METHOD_3_99B9E4B0F691CB63_OFFSET UNITYSDK_OFFSET(0x8D6F5C0)
#define CLASS_3_AABB325E0C213A37_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0x8D6FCC0)
#define CLASS_3_AABB325E0C213A37_METHOD_3_B2B838485F76427D_OFFSET UNITYSDK_OFFSET(0x8D6FEE0)
#define CLASS_3_AABB325E0C213A37_METHOD_3_B8AEFD851885E959_OFFSET UNITYSDK_OFFSET(0x8D6F0E0)
#define CLASS_3_AABB325E0C213A37_METHOD_3_B9DBDE04CF8F2F91_OFFSET UNITYSDK_OFFSET(0x8D70730)
#define CLASS_3_AABB325E0C213A37_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x8D6FBA0)
#define CLASS_3_AABB325E0C213A37_METHOD_3_C913C3061DE574D4_OFFSET UNITYSDK_OFFSET(0x8D70140)
#define CLASS_3_AABB325E0C213A37_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8D700E0)
#define CLASS_3_AABB325E0C213A37_METHOD_3_CCB20081EC209298_1_OFFSET UNITYSDK_OFFSET(0x8D70350)
#define CLASS_3_AABB325E0C213A37_METHOD_3_CCB20081EC209298_OFFSET UNITYSDK_OFFSET(0x8D6F730)
#define CLASS_3_AABB325E0C213A37_METHOD_3_F45E327CA02D53E6_OFFSET UNITYSDK_OFFSET(0x8D6FD30)
#define CLASS_3_AABB325E0C213A37_METHOD_3_FF9C6ADE9461FC2E_OFFSET UNITYSDK_OFFSET(0x8D70DB0)
#define CLASS_3_AABB325E0C213A37__CTOR_OFFSET UNITYSDK_OFFSET(0x8D6E960)

inline static constexpr unsigned int Class_3_AABB325E0C213A37_TypeDefinitionIndex = 67897;

class Class_3_AABB325E0C213A37 : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_325AEF0B8A6B46C1(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_325AEF0B8A6B46C1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_99B9E4B0F691CB63(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_99B9E4B0F691CB63_OFFSET))(a1);
	}

	static ::System::Void Method_3_CCB20081EC209298(::MoleMole::Config::TerrainMatType a1, ::System::String*& a2, ::System::String*& a3)
	{
		return ((::System::Void(*)(::MoleMole::Config::TerrainMatType, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_CCB20081EC209298_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_2D58832A36FF5158(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_2D58832A36FF5158_OFFSET))(this, a1);
	}

	::System::Void Method_3_F45E327CA02D53E6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_F45E327CA02D53E6_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_566C2E8654887332(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_566C2E8654887332_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_C913C3061DE574D4(::Class_2_B62C942A2774BBB8* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B62C942A2774BBB8*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_C913C3061DE574D4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_664325B5AE1E4262(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_664325B5AE1E4262_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_CCB20081EC209298_1(::MoleMole::Config::TerrainMatType a1, ::System::String*& a2, ::System::String*& a3)
	{
		return ((::System::Void(*)(::MoleMole::Config::TerrainMatType, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_CCB20081EC209298_1_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_B9DBDE04CF8F2F91(::UnityEngine::Vector3 a1, ::MoleMole::Config::TerrainMatType& a2, ::MoleMole::Config::TerrainMatType& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::MoleMole::Config::TerrainMatType&, ::MoleMole::Config::TerrainMatType&))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_B9DBDE04CF8F2F91_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_0FEF192E5797A1AB(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_0FEF192E5797A1AB_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_FF9C6ADE9461FC2E(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_FF9C6ADE9461FC2E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_47A62F348FC86425(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_47A62F348FC86425_OFFSET))(a1);
	}

	static ::System::String* Method_3_2099EB6E3F908273(::MoleMole::Config::ShoesType a1)
	{
		return ((::System::String*(*)(::MoleMole::Config::ShoesType))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_2099EB6E3F908273_OFFSET))(a1);
	}

	static ::System::Void Method_3_B8AEFD851885E959(::Class_3_D360C43AE45B97C2* a1, ::Class_3_F35B080B137ECC46* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_D360C43AE45B97C2*, ::Class_3_F35B080B137ECC46*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_B8AEFD851885E959_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_B2B838485F76427D(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_B2B838485F76427D_OFFSET))(a1);
	}

	static ::System::Void Method_3_97CE2960F95C54E3(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::AnimatorZoneFootPrint_FootType a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::AnimatorZoneFootPrint_FootType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_97CE2960F95C54E3_OFFSET))(a1, a2, a3, a4);
	}
};
