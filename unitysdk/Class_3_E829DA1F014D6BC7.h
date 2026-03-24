#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_1_5DA2E7556103D5A3_198;
class Class_3_009B1EA1B9F40FB2;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_E829DA1F014D6BC7_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x613AA50)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_0922FB28CD6C931A_OFFSET UNITYSDK_OFFSET(0x613CC90)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_180AB596178ABB61_OFFSET UNITYSDK_OFFSET(0x613B5B0)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_2111CC3CBBA1080E_OFFSET UNITYSDK_OFFSET(0x613AF90)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_331C06475E3F6942_OFFSET UNITYSDK_OFFSET(0x613D0F0)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_4057D796AB024FE2_OFFSET UNITYSDK_OFFSET(0x613BC50)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_40A429291FCE60C7_OFFSET UNITYSDK_OFFSET(0x613C2D0)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_41C149BE8D128EA8_OFFSET UNITYSDK_OFFSET(0x613CAB0)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x613CF90)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_AF10B478EBB6E46A_OFFSET UNITYSDK_OFFSET(0x613CFF0)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x613D2B0)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_C0D69F22318C86FE_OFFSET UNITYSDK_OFFSET(0x613BAA0)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_EC2F00CC40178728_1_OFFSET UNITYSDK_OFFSET(0x613C570)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_EC2F00CC40178728_OFFSET UNITYSDK_OFFSET(0x613B050)
#define CLASS_3_E829DA1F014D6BC7__CCTOR_OFFSET UNITYSDK_OFFSET(0x613AF80)
#define CLASS_3_E829DA1F014D6BC7__CTOR_OFFSET UNITYSDK_OFFSET(0x613AF60)

inline static constexpr unsigned int Class_3_E829DA1F014D6BC7_TypeDefinitionIndex = 41366;

class Class_3_E829DA1F014D6BC7 : public ::Class_2_F33340E023067DAF
{
public:
	static ::MoleMole::Battle::Entity** StaticGet_Field_3_2()
	{
		return (::MoleMole::Battle::Entity**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E829DA1F014D6BC7_TypeDefinitionIndex)->GetStaticField(0x3E840);
	}
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_2111CC3CBBA1080E(::MoleMole::Battle::Entity* a1, ::Class_3_009B1EA1B9F40FB2* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_009B1EA1B9F40FB2*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_2111CC3CBBA1080E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_EC2F00CC40178728(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_EC2F00CC40178728_OFFSET))(a1);
	}

	static ::System::Void Method_3_C0D69F22318C86FE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_C0D69F22318C86FE_OFFSET))(a1);
	}

	static ::System::Void Method_3_40A429291FCE60C7(::System::String* a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_40A429291FCE60C7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_EC2F00CC40178728_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_EC2F00CC40178728_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_0922FB28CD6C931A(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_0922FB28CD6C931A_OFFSET))(a1);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_41C149BE8D128EA8(::Class_1_5DA2E7556103D5A3_198* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::Class_1_5DA2E7556103D5A3_198*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_41C149BE8D128EA8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AF10B478EBB6E46A(::Class_3_009B1EA1B9F40FB2* a1, ::Class_1_5DA2E7556103D5A3_198* a2)
	{
		return ((::System::Void(*)(::Class_3_009B1EA1B9F40FB2*, ::Class_1_5DA2E7556103D5A3_198*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_AF10B478EBB6E46A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4057D796AB024FE2(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_4057D796AB024FE2_OFFSET))(a1);
	}

	static ::System::Void Method_3_331C06475E3F6942(::MoleMole::Battle::Entity* a1, ::Class_1_5DA2E7556103D5A3_198* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_1_5DA2E7556103D5A3_198*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_331C06475E3F6942_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_180AB596178ABB61(::Class_1_5DA2E7556103D5A3_198* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::Class_1_5DA2E7556103D5A3_198*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_180AB596178ABB61_OFFSET))(a1, a2);
	}
};
