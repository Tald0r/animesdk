#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_69DAA12DBAB4BAB6___C_METHOD_1_1DE17664FA74E4E4_OFFSET UNITYSDK_OFFSET(0xDC2C520)
#define CLASS_2_69DAA12DBAB4BAB6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDC2C4D0)
#define CLASS_2_69DAA12DBAB4BAB6___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDC2C510)

inline static constexpr unsigned int Class_2_69DAA12DBAB4BAB6___c_TypeDefinitionIndex = 41467;

class Class_2_69DAA12DBAB4BAB6___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::MoleMole::UIWindowController*>** StaticGet___9__0_0()
	{
		return (::System::Comparison_1<::MoleMole::UIWindowController*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_69DAA12DBAB4BAB6___c_TypeDefinitionIndex)->GetStaticField(0x3CC00);
	}
	static ::Class_2_69DAA12DBAB4BAB6___c** StaticGet___9()
	{
		return (::Class_2_69DAA12DBAB4BAB6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_69DAA12DBAB4BAB6___c_TypeDefinitionIndex)->GetStaticField(0x3CC08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_69DAA12DBAB4BAB6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69DAA12DBAB4BAB6___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_1DE17664FA74E4E4(::MoleMole::UIWindowController* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_69DAA12DBAB4BAB6___C_METHOD_1_1DE17664FA74E4E4_OFFSET))(this, a1, a2);
	}
};
