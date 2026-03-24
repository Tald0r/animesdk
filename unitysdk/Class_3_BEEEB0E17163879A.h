#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Class_3_BEEEB0E17163879A_Enum_3_01E26C57B6422167.h"
#include "unitysdk/MoleMole/Config/AnimMoveState.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_3_757A5862D4BBEE41_1;
class Class_3_883E597458B91E77;
class Class_3_AB70F28E05C9F5C5;
class Class_3_BD1C1745FBC83F51;
class Class_3_F33F9DC5F4112336;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_BEEEB0E17163879A_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x8A49B70)
#define CLASS_3_BEEEB0E17163879A_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x8A4A050)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_0452A295FE653F33_OFFSET UNITYSDK_OFFSET(0x8A4D580)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_1B22FFA778343375_OFFSET UNITYSDK_OFFSET(0x8A4C5B0)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_20E903521A30139B_OFFSET UNITYSDK_OFFSET(0x8A4B8E0)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_29F0C501FEEE7583_1_OFFSET UNITYSDK_OFFSET(0x8A4C4C0)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_29F0C501FEEE7583_OFFSET UNITYSDK_OFFSET(0x8A4B570)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_2B911D62C1CCCB88_OFFSET UNITYSDK_OFFSET(0x8A4CE60)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_3D98DB7DD083F480_OFFSET UNITYSDK_OFFSET(0x8A4B2C0)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_488ACBB39B5E6D73_OFFSET UNITYSDK_OFFSET(0x8A4A3E0)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_4929308C231986EB_OFFSET UNITYSDK_OFFSET(0x8A4C100)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_572C872A7AC127C9_OFFSET UNITYSDK_OFFSET(0x8A4D840)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_69F9975CDFA0163D_OFFSET UNITYSDK_OFFSET(0x8A4BA40)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_6FA6A27ACE40FFDC_OFFSET UNITYSDK_OFFSET(0x8A4B660)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_9A56E9B05E5A1CF2_OFFSET UNITYSDK_OFFSET(0x8A4AD30)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_ACA274F9A9FB6060_OFFSET UNITYSDK_OFFSET(0x8A4CC70)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_B90A5FD1506E2F48_OFFSET UNITYSDK_OFFSET(0x8A4A250)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x8A4D510)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_C1D823BE89AD517A_OFFSET UNITYSDK_OFFSET(0x8A4D2F0)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8A4D290)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8A4D230)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_D0BCC415DC40C016_OFFSET UNITYSDK_OFFSET(0x8A4A8F0)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_D51E6853ECD5C052_OFFSET UNITYSDK_OFFSET(0x8A4B3C0)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_D653D08E1B95EA18_OFFSET UNITYSDK_OFFSET(0x8A4A760)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_E111A33127A10574_OFFSET UNITYSDK_OFFSET(0x8A4BC70)
#define CLASS_3_BEEEB0E17163879A_METHOD_3_E33F53EB083F6486_OFFSET UNITYSDK_OFFSET(0x8A4C3F0)
#define CLASS_3_BEEEB0E17163879A_UPDATE_OFFSET UNITYSDK_OFFSET(0x8A49E80)
#define CLASS_3_BEEEB0E17163879A__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A4A210)
#define CLASS_3_BEEEB0E17163879A__CTOR_OFFSET UNITYSDK_OFFSET(0x8A4A1F0)

inline static constexpr unsigned int Class_3_BEEEB0E17163879A_TypeDefinitionIndex = 53087;

class Class_3_BEEEB0E17163879A : public ::Class_2_F33340E023067DAF
{
public:
	static ::Class_3_BEEEB0E17163879A_Enum_3_01E26C57B6422167* StaticGet_Field_3_3()
	{
		return (::Class_3_BEEEB0E17163879A_Enum_3_01E26C57B6422167*)Il2CppClass::FromTypeDefinitionIndex(Class_3_BEEEB0E17163879A_TypeDefinitionIndex)->GetStaticField(0xDC80);
	}
	static ::System::Boolean* StaticGet_Field_3_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_BEEEB0E17163879A_TypeDefinitionIndex)->GetStaticField(0xDC81);
	}
	static ::System::Boolean* StaticGet_Field_3_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_BEEEB0E17163879A_TypeDefinitionIndex)->GetStaticField(0xDC82);
	}
	static ::System::Single* StaticGet_Field_3_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_BEEEB0E17163879A_TypeDefinitionIndex)->GetStaticField(0xDC84);
	}
	::Nap::NapECS::EcsFilter* Field_3_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_B90A5FD1506E2F48(::Class_3_AB70F28E05C9F5C5* a1, ::Class_3_F33F9DC5F4112336* a2)
	{
		return ((::System::Void(*)(::Class_3_AB70F28E05C9F5C5*, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_B90A5FD1506E2F48_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_488ACBB39B5E6D73(::Class_3_AB70F28E05C9F5C5* a1, ::MoleMole::Config::AnimMoveState a2, ::System::String* a3)
	{
		return ((::System::Int32(*)(::Class_3_AB70F28E05C9F5C5*, ::MoleMole::Config::AnimMoveState, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_488ACBB39B5E6D73_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_9A56E9B05E5A1CF2(::Class_3_F35B080B137ECC46* a1, ::Class_3_AB70F28E05C9F5C5* a2, ::Class_3_757A5862D4BBEE41_1* a3)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::Class_3_AB70F28E05C9F5C5*, ::Class_3_757A5862D4BBEE41_1*))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_9A56E9B05E5A1CF2_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_D51E6853ECD5C052(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_D51E6853ECD5C052_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_6FA6A27ACE40FFDC(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_6FA6A27ACE40FFDC_OFFSET))(a1);
	}

	static ::System::Void Method_3_69F9975CDFA0163D(::Class_3_AB70F28E05C9F5C5* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_3_AB70F28E05C9F5C5*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_69F9975CDFA0163D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_29F0C501FEEE7583(::Class_3_BD1C1745FBC83F51* a1)
	{
		return ((::System::Void(*)(::Class_3_BD1C1745FBC83F51*))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_29F0C501FEEE7583_OFFSET))(a1);
	}

	static ::System::Void Method_3_E111A33127A10574(::Class_3_AB70F28E05C9F5C5* a1, ::Class_3_BD1C1745FBC83F51* a2, ::Class_3_883E597458B91E77* a3)
	{
		return ((::System::Void(*)(::Class_3_AB70F28E05C9F5C5*, ::Class_3_BD1C1745FBC83F51*, ::Class_3_883E597458B91E77*))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_E111A33127A10574_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_D0BCC415DC40C016(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_D0BCC415DC40C016_OFFSET))(a1);
	}

	static ::System::Void Method_3_29F0C501FEEE7583_1(::Class_3_BD1C1745FBC83F51* a1)
	{
		return ((::System::Void(*)(::Class_3_BD1C1745FBC83F51*))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_29F0C501FEEE7583_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_1B22FFA778343375(::System::Boolean a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Vector2, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_1B22FFA778343375_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_E33F53EB083F6486(::Class_3_AB70F28E05C9F5C5* a1)
	{
		return ((::System::Void(*)(::Class_3_AB70F28E05C9F5C5*))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_E33F53EB083F6486_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_3D98DB7DD083F480(::Class_3_AB70F28E05C9F5C5* a1)
	{
		return ((::System::Boolean(*)(::Class_3_AB70F28E05C9F5C5*))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_3D98DB7DD083F480_OFFSET))(a1);
	}

	static ::System::Single Method_3_4929308C231986EB(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Single a2, ::Class_3_AB70F28E05C9F5C5* a3)
	{
		return ((::System::Single(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single, ::Class_3_AB70F28E05C9F5C5*))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_4929308C231986EB_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_ACA274F9A9FB6060(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_ACA274F9A9FB6060_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::String* Method_3_20E903521A30139B(::Class_3_AB70F28E05C9F5C5* a1)
	{
		return ((::System::String*(*)(::Class_3_AB70F28E05C9F5C5*))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_20E903521A30139B_OFFSET))(a1);
	}

	static ::System::Int32 Method_3_C1D823BE89AD517A(::Class_3_AB70F28E05C9F5C5* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::Class_3_AB70F28E05C9F5C5*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_C1D823BE89AD517A_OFFSET))(a1, a2);
	}

	static ::System::String* Method_3_D653D08E1B95EA18(::Class_3_AB70F28E05C9F5C5* a1, ::MoleMole::Config::AnimMoveState a2)
	{
		return ((::System::String*(*)(::Class_3_AB70F28E05C9F5C5*, ::MoleMole::Config::AnimMoveState))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_D653D08E1B95EA18_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_0452A295FE653F33(::Class_3_AB70F28E05C9F5C5* a1, ::MoleMole::Config::AnimMoveState a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_3_AB70F28E05C9F5C5*, ::MoleMole::Config::AnimMoveState, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_0452A295FE653F33_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_2B911D62C1CCCB88(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_2B911D62C1CCCB88_OFFSET))(a1);
	}

	static ::System::Void Method_3_572C872A7AC127C9(::Class_3_AB70F28E05C9F5C5* a1)
	{
		return ((::System::Void(*)(::Class_3_AB70F28E05C9F5C5*))((::PBYTE)hIl2Cpp + CLASS_3_BEEEB0E17163879A_METHOD_3_572C872A7AC127C9_OFFSET))(a1);
	}
};
