#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_340DE32BA097F66C.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWindowController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_B33EF859826F940E___C_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xD5F0280)
#define CLASS_1_B33EF859826F940E___C_METHOD_1_692B01178CF611EF_OFFSET UNITYSDK_OFFSET(0xD5F01E0)
#define CLASS_1_B33EF859826F940E___C_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xD5F03C0)
#define CLASS_1_B33EF859826F940E___C_METHOD_1_D636A76BD979C2A4_OFFSET UNITYSDK_OFFSET(0xD5F0080)
#define CLASS_1_B33EF859826F940E___C_METHOD_1_EF33F656360DF279_OFFSET UNITYSDK_OFFSET(0xD5F05A0)
#define CLASS_1_B33EF859826F940E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD5F0030)
#define CLASS_1_B33EF859826F940E___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD5F0070)

inline static constexpr unsigned int Class_1_B33EF859826F940E___c_TypeDefinitionIndex = 39925;

class Class_1_B33EF859826F940E___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_0_16E4307DCC419505_5*>** StaticGet___9__7_3()
	{
		return (::System::Action_1<::Class_0_16E4307DCC419505_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B33EF859826F940E___c_TypeDefinitionIndex)->GetStaticField(0x446C0);
	}
	static ::System::Action** StaticGet___9__7_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B33EF859826F940E___c_TypeDefinitionIndex)->GetStaticField(0x446C8);
	}
	static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__7_10()
	{
		return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B33EF859826F940E___c_TypeDefinitionIndex)->GetStaticField(0x446D0);
	}
	static ::System::Action** StaticGet___9__7_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B33EF859826F940E___c_TypeDefinitionIndex)->GetStaticField(0x446D8);
	}
	static ::Class_1_B33EF859826F940E___c** StaticGet___9()
	{
		return (::Class_1_B33EF859826F940E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B33EF859826F940E___c_TypeDefinitionIndex)->GetStaticField(0x446E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B33EF859826F940E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B33EF859826F940E___C__CTOR_OFFSET))(this);
	}

	::MoleMole::UIWindowController* Method_1_D636A76BD979C2A4(::Enum_3_340DE32BA097F66C a1, ::MoleMole::UIControllerContextBase* a2)
	{
		return ((::MoleMole::UIWindowController*(*)(::PVOID, ::Enum_3_340DE32BA097F66C, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_1_B33EF859826F940E___C_METHOD_1_D636A76BD979C2A4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_692B01178CF611EF(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_1_B33EF859826F940E___C_METHOD_1_692B01178CF611EF_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B33EF859826F940E___C_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B33EF859826F940E___C_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::String* Method_1_EF33F656360DF279(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B33EF859826F940E___C_METHOD_1_EF33F656360DF279_OFFSET))(this, a1);
	}
};
