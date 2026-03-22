#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EAvatarCameraShotType.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_05BFAB15000D9DD3;
class Class_2_3EB92686D65E00AD;
class Class_3_E86D9308E1AD317D;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_ED4AABB83F94EAD4_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x923FE60)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_13B01B1084F76626_OFFSET UNITYSDK_OFFSET(0x9242160)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_179ACB135BB3FC5C_OFFSET UNITYSDK_OFFSET(0x9247410)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_1A964BF5BE6EB44B_OFFSET UNITYSDK_OFFSET(0x92457B0)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_1DF1FA98B6A6B5EE_OFFSET UNITYSDK_OFFSET(0x92482A0)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_2450C21B267142D4_OFFSET UNITYSDK_OFFSET(0x9241850)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_29326BC74A0B98F2_OFFSET UNITYSDK_OFFSET(0x92445A0)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_2A9F88A7EDE77E43_OFFSET UNITYSDK_OFFSET(0x9244B90)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_328FA30273EE6423_OFFSET UNITYSDK_OFFSET(0x9246F60)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_38618B427CBC1790_OFFSET UNITYSDK_OFFSET(0x9247C80)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_3FB3D01F50FC6D4E_OFFSET UNITYSDK_OFFSET(0x9247A90)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_4805283D59625FD9_1_OFFSET UNITYSDK_OFFSET(0x92432D0)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0x9242DF0)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_5C7720473B5EA7A0_OFFSET UNITYSDK_OFFSET(0x9241D00)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_5CD5385DAD34A4A6_OFFSET UNITYSDK_OFFSET(0x9245300)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_5E54F7C7A174AC22_OFFSET UNITYSDK_OFFSET(0x9241220)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_60ABCD55D7383B8E_OFFSET UNITYSDK_OFFSET(0x9247220)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_62B7EE56EC91F365_OFFSET UNITYSDK_OFFSET(0x9242380)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_7C6D43BCF1E36803_OFFSET UNITYSDK_OFFSET(0x9247D50)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_8B5E3014AFF7F8EA_OFFSET UNITYSDK_OFFSET(0x9245E50)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_8C0E3211A8AE23ED_OFFSET UNITYSDK_OFFSET(0x9240870)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_976C621979798627_1_OFFSET UNITYSDK_OFFSET(0x92428A0)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_976C621979798627_OFFSET UNITYSDK_OFFSET(0x92407C0)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_97E312D50078A9C8_OFFSET UNITYSDK_OFFSET(0x92480A0)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_A52ACB285ECE1A55_1_OFFSET UNITYSDK_OFFSET(0x9248320)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_A52ACB285ECE1A55_OFFSET UNITYSDK_OFFSET(0x9242950)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_AE568C88450D29E6_OFFSET UNITYSDK_OFFSET(0x9242AE0)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_B657C97BCCA720F2_OFFSET UNITYSDK_OFFSET(0x9246DC0)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x9248030)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_BF92D9BA68404FCC_OFFSET UNITYSDK_OFFSET(0x9245130)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_C4944CF8B0C158A6_OFFSET UNITYSDK_OFFSET(0x9245600)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9247FD0)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x92411C0)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_D0DF0505F244B465_OFFSET UNITYSDK_OFFSET(0x9240C90)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_D1F58F43028CCAD0_OFFSET UNITYSDK_OFFSET(0x92474B0)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_D528B6AC38B34D15_OFFSET UNITYSDK_OFFSET(0x92436A0)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_E4639B0B169E44BE_OFFSET UNITYSDK_OFFSET(0x9240E70)
#define CLASS_3_ED4AABB83F94EAD4_METHOD_3_E496D1F522F071ED_OFFSET UNITYSDK_OFFSET(0x9243200)
#define CLASS_3_ED4AABB83F94EAD4_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x92404A0)
#define CLASS_3_ED4AABB83F94EAD4_UPDATE_OFFSET UNITYSDK_OFFSET(0x9240620)
#define CLASS_3_ED4AABB83F94EAD4__CTOR_OFFSET UNITYSDK_OFFSET(0x92407A0)

inline static constexpr unsigned int Class_3_ED4AABB83F94EAD4_TypeDefinitionIndex = 39571;

class Class_3_ED4AABB83F94EAD4 : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_POSTLATEUPDATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_976C621979798627(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_976C621979798627_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_D0DF0505F244B465()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_D0DF0505F244B465_OFFSET))();
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_5E54F7C7A174AC22(::Class_3_E86D9308E1AD317D* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_E86D9308E1AD317D*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_5E54F7C7A174AC22_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C0E3211A8AE23ED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_8C0E3211A8AE23ED_OFFSET))(a1);
	}

	static ::System::Void Method_3_13B01B1084F76626(::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType a1)
	{
		return ((::System::Void(*)(::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_13B01B1084F76626_OFFSET))(a1);
	}

	static ::System::Void Method_3_62B7EE56EC91F365(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_62B7EE56EC91F365_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_3_A52ACB285ECE1A55(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_A52ACB285ECE1A55_OFFSET))(a1);
	}

	::System::Void Method_3_AE568C88450D29E6(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_AE568C88450D29E6_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_E496D1F522F071ED(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_E496D1F522F071ED_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_D528B6AC38B34D15(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_D528B6AC38B34D15_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1A964BF5BE6EB44B(::MoleMole::Battle::Entity* a1, ::Class_3_E86D9308E1AD317D* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_E86D9308E1AD317D*))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_1A964BF5BE6EB44B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_976C621979798627_1(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_976C621979798627_1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_4805283D59625FD9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_4805283D59625FD9_OFFSET))();
	}

	static ::System::Single Method_3_D1F58F43028CCAD0(::Class_3_E86D9308E1AD317D* a1)
	{
		return ((::System::Single(*)(::Class_3_E86D9308E1AD317D*))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_D1F58F43028CCAD0_OFFSET))(a1);
	}

	static ::System::Void Method_3_29326BC74A0B98F2(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_29326BC74A0B98F2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_60ABCD55D7383B8E(::MoleMole::Battle::Entity* a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_60ABCD55D7383B8E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_3FB3D01F50FC6D4E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_3FB3D01F50FC6D4E_OFFSET))(a1);
	}

	static ::System::Void Method_3_2450C21B267142D4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_2450C21B267142D4_OFFSET))(a1);
	}

	static ::System::Void Method_3_E4639B0B169E44BE(::Class_3_E86D9308E1AD317D* a1)
	{
		return ((::System::Void(*)(::Class_3_E86D9308E1AD317D*))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_E4639B0B169E44BE_OFFSET))(a1);
	}

	static ::System::Void Method_3_7C6D43BCF1E36803(::Class_3_E86D9308E1AD317D* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_E86D9308E1AD317D*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_7C6D43BCF1E36803_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B657C97BCCA720F2(::Class_3_E86D9308E1AD317D* a1)
	{
		return ((::System::Void(*)(::Class_3_E86D9308E1AD317D*))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_B657C97BCCA720F2_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_97E312D50078A9C8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_97E312D50078A9C8_OFFSET))(a1);
	}

	static ::System::Void Method_3_BF92D9BA68404FCC(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_BF92D9BA68404FCC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_328FA30273EE6423(::Class_3_E86D9308E1AD317D* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_3_E86D9308E1AD317D*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_328FA30273EE6423_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C4944CF8B0C158A6(::Class_3_E86D9308E1AD317D* a1)
	{
		return ((::System::Void(*)(::Class_3_E86D9308E1AD317D*))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_C4944CF8B0C158A6_OFFSET))(a1);
	}

	static ::System::Void Method_3_4805283D59625FD9_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_4805283D59625FD9_1_OFFSET))();
	}

	static ::System::Void Method_3_1DF1FA98B6A6B5EE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_1DF1FA98B6A6B5EE_OFFSET))(a1);
	}

	static ::System::Void Method_3_2A9F88A7EDE77E43(::Class_2_3EB92686D65E00AD* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_3EB92686D65E00AD*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_2A9F88A7EDE77E43_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_179ACB135BB3FC5C(::Class_3_E86D9308E1AD317D* a1, ::MoleMole::Config::MonsterStrengthType a2)
	{
		return ((::System::Void(*)(::Class_3_E86D9308E1AD317D*, ::MoleMole::Config::MonsterStrengthType))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_179ACB135BB3FC5C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8B5E3014AFF7F8EA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_8B5E3014AFF7F8EA_OFFSET))();
	}

	static ::System::Single Method_3_38618B427CBC1790(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_38618B427CBC1790_OFFSET))(a1);
	}

	static ::System::Void Method_3_5C7720473B5EA7A0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_5C7720473B5EA7A0_OFFSET))(a1);
	}

	static ::System::Single Method_3_A52ACB285ECE1A55_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_A52ACB285ECE1A55_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_5CD5385DAD34A4A6(::Class_2_05BFAB15000D9DD3* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_05BFAB15000D9DD3*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_ED4AABB83F94EAD4_METHOD_3_5CD5385DAD34A4A6_OFFSET))(a1, a2);
	}
};
