#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_69DAA12DBAB4BAB6_1___C_METHOD_1_1DE17664FA74E4E4_OFFSET UNITYSDK_OFFSET(0x6FCE4D0)
#define CLASS_2_69DAA12DBAB4BAB6_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6FCE480)
#define CLASS_2_69DAA12DBAB4BAB6_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6FCE4C0)

inline static constexpr unsigned int Class_2_69DAA12DBAB4BAB6_1___c_TypeDefinitionIndex = 53123;

class Class_2_69DAA12DBAB4BAB6_1___c : public ::System::Object
{
public:
	static ::Class_2_69DAA12DBAB4BAB6_1___c** StaticGet___9()
	{
		return (::Class_2_69DAA12DBAB4BAB6_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_69DAA12DBAB4BAB6_1___c_TypeDefinitionIndex)->GetStaticField(0x3B320);
	}
	static ::System::Comparison_1<::MoleMole::UIWindowController*>** StaticGet___9__0_0()
	{
		return (::System::Comparison_1<::MoleMole::UIWindowController*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_69DAA12DBAB4BAB6_1___c_TypeDefinitionIndex)->GetStaticField(0x3B328);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_69DAA12DBAB4BAB6_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69DAA12DBAB4BAB6_1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_1DE17664FA74E4E4(::MoleMole::UIWindowController* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_69DAA12DBAB4BAB6_1___C_METHOD_1_1DE17664FA74E4E4_OFFSET))(this, a1, a2);
	}
};
