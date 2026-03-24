#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_552ECB8041B24863;
class Class_2_8092EF5027021CFC;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B4DEAABEF268324D_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xF380DB0)
#define CLASS_3_B4DEAABEF268324D_METHOD_3_0B2B28E0154FE3FE_OFFSET UNITYSDK_OFFSET(0xF382430)
#define CLASS_3_B4DEAABEF268324D_METHOD_3_39468678C9BF10F3_OFFSET UNITYSDK_OFFSET(0xF381B00)
#define CLASS_3_B4DEAABEF268324D_METHOD_3_436D887688692A9F_OFFSET UNITYSDK_OFFSET(0xF382050)
#define CLASS_3_B4DEAABEF268324D_METHOD_3_55EF60F8D33FFB41_OFFSET UNITYSDK_OFFSET(0xF381D10)
#define CLASS_3_B4DEAABEF268324D_METHOD_3_AA6AC38756233BD0_1_OFFSET UNITYSDK_OFFSET(0xF382870)
#define CLASS_3_B4DEAABEF268324D_METHOD_3_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0xF381030)
#define CLASS_3_B4DEAABEF268324D_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xF3810A0)
#define CLASS_3_B4DEAABEF268324D_METHOD_3_D1F3C6E09B0DFE6F_OFFSET UNITYSDK_OFFSET(0xF381110)
#define CLASS_3_B4DEAABEF268324D_METHOD_3_EB020A7ED3DF7E78_OFFSET UNITYSDK_OFFSET(0xF381460)
#define CLASS_3_B4DEAABEF268324D_METHOD_3_F836E2FA1BCB50B4_OFFSET UNITYSDK_OFFSET(0xF3828E0)
#define CLASS_3_B4DEAABEF268324D_METHOD_3_FF03B43CB29E20D8_OFFSET UNITYSDK_OFFSET(0xF381BE0)
#define CLASS_3_B4DEAABEF268324D__CTOR_OFFSET UNITYSDK_OFFSET(0xF381010)

inline static constexpr unsigned int Class_3_B4DEAABEF268324D_TypeDefinitionIndex = 79065;

class Class_3_B4DEAABEF268324D : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_METHOD_3_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_D1F3C6E09B0DFE6F(::Class_2_8092EF5027021CFC* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::Class_2_8092EF5027021CFC*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_METHOD_3_D1F3C6E09B0DFE6F_OFFSET))(a1, a2);
	}

	::System::Void Method_3_39468678C9BF10F3(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_METHOD_3_39468678C9BF10F3_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_FF03B43CB29E20D8(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_METHOD_3_FF03B43CB29E20D8_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_436D887688692A9F(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::UInt32, ::System::UInt32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_METHOD_3_436D887688692A9F_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_0B2B28E0154FE3FE(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_METHOD_3_0B2B28E0154FE3FE_OFFSET))(this, a1);
	}

	::System::Void Method_3_AA6AC38756233BD0_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_METHOD_3_AA6AC38756233BD0_1_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_F836E2FA1BCB50B4(::System::Collections::Generic::List_1<::System::String*>* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_METHOD_3_F836E2FA1BCB50B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_EB020A7ED3DF7E78(::System::UInt32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_METHOD_3_EB020A7ED3DF7E78_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_55EF60F8D33FFB41(::Class_2_552ECB8041B24863* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::Class_2_552ECB8041B24863*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_METHOD_3_55EF60F8D33FFB41_OFFSET))(a1, a2);
	}
};
