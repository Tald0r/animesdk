#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F85B24841F00817E_2;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }

#define CLASS_1_697F316590647033_METHOD_1_096D063DBFBC481A_OFFSET UNITYSDK_OFFSET(0xB166EB0)
#define CLASS_1_697F316590647033_METHOD_1_C563BDE29D4CE5A5_OFFSET UNITYSDK_OFFSET(0xB166C50)
#define CLASS_1_697F316590647033__CCTOR_OFFSET UNITYSDK_OFFSET(0xB166C10)
#define CLASS_1_697F316590647033__CTOR_OFFSET UNITYSDK_OFFSET(0xB166C00)

inline static constexpr unsigned int Class_1_697F316590647033_TypeDefinitionIndex = 44148;

class Class_1_697F316590647033 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_697F316590647033_TypeDefinitionIndex)->GetStaticField(0x3E2B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_697F316590647033__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_697F316590647033__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_C563BDE29D4CE5A5(::MoleMole::HollowChessboard::HollowEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_697F316590647033_METHOD_1_C563BDE29D4CE5A5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_096D063DBFBC481A(::Class_3_F85B24841F00817E_2* a1)
	{
		return ((::System::Void(*)(::Class_3_F85B24841F00817E_2*))((::PBYTE)hIl2Cpp + CLASS_1_697F316590647033_METHOD_1_096D063DBFBC481A_OFFSET))(a1);
	}
};
