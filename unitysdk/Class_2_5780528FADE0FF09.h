#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Struct_2_0EA61705E6C719A1.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_2_5780528FADE0FF09_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB617C00)
#define CLASS_2_5780528FADE0FF09_METHOD_2_AA93829F41DD3093_OFFSET UNITYSDK_OFFSET(0xB617DF0)
#define CLASS_2_5780528FADE0FF09_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xB617D40)
#define CLASS_2_5780528FADE0FF09_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB617F90)
#define CLASS_2_5780528FADE0FF09_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB617F20)
#define CLASS_2_5780528FADE0FF09__CCTOR_OFFSET UNITYSDK_OFFSET(0xB617CC0)
#define CLASS_2_5780528FADE0FF09__CTOR_OFFSET UNITYSDK_OFFSET(0xB617D30)

inline static constexpr unsigned int Class_2_5780528FADE0FF09_TypeDefinitionIndex = 41904;

class Class_2_5780528FADE0FF09 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0x25; // 0x0
	::MoleMole::Battle::Entity* Field_2_0; // 0x20
	::MoleMole::Battle::Entity* Field_2_1; // 0x28
	::Struct_2_0EA61705E6C719A1 Field_2_2; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5780528FADE0FF09__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5780528FADE0FF09__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5780528FADE0FF09_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5780528FADE0FF09_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_AA93829F41DD3093(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::Struct_2_0EA61705E6C719A1 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Struct_2_0EA61705E6C719A1))((::PBYTE)hIl2Cpp + CLASS_2_5780528FADE0FF09_METHOD_2_AA93829F41DD3093_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5780528FADE0FF09_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5780528FADE0FF09_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
