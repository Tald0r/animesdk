#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_1_5DA2E7556103D5A3_224;
class Class_3_009B1EA1B9F40FB2;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_E829DA1F014D6BC7_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x7E34350)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_180AB596178ABB61_OFFSET UNITYSDK_OFFSET(0x7E34DF0)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_331C06475E3F6942_OFFSET UNITYSDK_OFFSET(0x7E369F0)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_4057D796AB024FE2_OFFSET UNITYSDK_OFFSET(0x7E36370)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_40A429291FCE60C7_OFFSET UNITYSDK_OFFSET(0x7E35340)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_41C149BE8D128EA8_OFFSET UNITYSDK_OFFSET(0x7E35FE0)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_551F29BEE58161CF_OFFSET UNITYSDK_OFFSET(0x7E35E20)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x7E352E0)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_AF10B478EBB6E46A_OFFSET UNITYSDK_OFFSET(0x7E35EE0)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x7E36BC0)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_C0D69F22318C86FE_OFFSET UNITYSDK_OFFSET(0x7E361C0)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_D5CDC4693D064029_OFFSET UNITYSDK_OFFSET(0x7E355E0)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_EC2F00CC40178728_1_OFFSET UNITYSDK_OFFSET(0x7E358E0)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_EC2F00CC40178728_OFFSET UNITYSDK_OFFSET(0x7E34890)
#define CLASS_3_E829DA1F014D6BC7__CCTOR_OFFSET UNITYSDK_OFFSET(0x7E34880)
#define CLASS_3_E829DA1F014D6BC7__CTOR_OFFSET UNITYSDK_OFFSET(0x7E34860)

inline static constexpr unsigned int Class_3_E829DA1F014D6BC7_TypeDefinitionIndex = 53613;

class Class_3_E829DA1F014D6BC7 : public ::Class_2_F33340E023067DAF
{
public:
	static ::MoleMole::Battle::Entity** StaticGet_Field_3_2()
	{
		return (::MoleMole::Battle::Entity**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E829DA1F014D6BC7_TypeDefinitionIndex)->GetStaticField(0x42A70);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x28

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

	static ::System::Void Method_3_EC2F00CC40178728(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_EC2F00CC40178728_OFFSET))(a1);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Void Method_3_40A429291FCE60C7(::System::String* a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_40A429291FCE60C7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D5CDC4693D064029(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_D5CDC4693D064029_OFFSET))(a1);
	}

	static ::System::Void Method_3_AF10B478EBB6E46A(::Class_3_009B1EA1B9F40FB2* a1, ::Class_1_5DA2E7556103D5A3_224* a2)
	{
		return ((::System::Void(*)(::Class_3_009B1EA1B9F40FB2*, ::Class_1_5DA2E7556103D5A3_224*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_AF10B478EBB6E46A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_EC2F00CC40178728_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_EC2F00CC40178728_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_180AB596178ABB61(::Class_1_5DA2E7556103D5A3_224* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::Class_1_5DA2E7556103D5A3_224*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_180AB596178ABB61_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_41C149BE8D128EA8(::Class_1_5DA2E7556103D5A3_224* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::Class_1_5DA2E7556103D5A3_224*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_41C149BE8D128EA8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C0D69F22318C86FE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_C0D69F22318C86FE_OFFSET))(a1);
	}

	static ::System::Void Method_3_551F29BEE58161CF(::MoleMole::Battle::Entity* a1, ::Class_3_009B1EA1B9F40FB2* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_009B1EA1B9F40FB2*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_551F29BEE58161CF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4057D796AB024FE2(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_4057D796AB024FE2_OFFSET))(a1);
	}

	static ::System::Void Method_3_331C06475E3F6942(::MoleMole::Battle::Entity* a1, ::Class_1_5DA2E7556103D5A3_224* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_1_5DA2E7556103D5A3_224*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_331C06475E3F6942_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
