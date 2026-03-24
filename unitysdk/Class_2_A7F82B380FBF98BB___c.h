#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_158;
class Class_0_16E4307DCC419505_241;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_A7F82B380FBF98BB___C_METHOD_1_219D28DAF44B740D_OFFSET UNITYSDK_OFFSET(0xE791760)
#define CLASS_2_A7F82B380FBF98BB___C_METHOD_1_843B7D96C733C5B5_OFFSET UNITYSDK_OFFSET(0xE791730)
#define CLASS_2_A7F82B380FBF98BB___C_METHOD_1_9696A0594E32F567_OFFSET UNITYSDK_OFFSET(0xE791710)
#define CLASS_2_A7F82B380FBF98BB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE7916C0)
#define CLASS_2_A7F82B380FBF98BB___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE791700)

inline static constexpr unsigned int Class_2_A7F82B380FBF98BB___c_TypeDefinitionIndex = 65512;

class Class_2_A7F82B380FBF98BB___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_0_16E4307DCC419505_158*, ::System::Int32>** StaticGet___9__30_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_158*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A7F82B380FBF98BB___c_TypeDefinitionIndex)->GetStaticField(0x2B0C0);
	}
	static ::Class_2_A7F82B380FBF98BB___c** StaticGet___9()
	{
		return (::Class_2_A7F82B380FBF98BB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A7F82B380FBF98BB___c_TypeDefinitionIndex)->GetStaticField(0x2B0C8);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_158*, ::System::UInt32>** StaticGet___9__31_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_158*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A7F82B380FBF98BB___c_TypeDefinitionIndex)->GetStaticField(0x2B0D0);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_241*, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_158*>*>** StaticGet___9__29_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_241*, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_158*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A7F82B380FBF98BB___c_TypeDefinitionIndex)->GetStaticField(0x2B0D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A7F82B380FBF98BB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7F82B380FBF98BB___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_158*>* Method_1_9696A0594E32F567(::Class_0_16E4307DCC419505_241* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_158*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_241*))((::PBYTE)hIl2Cpp + CLASS_2_A7F82B380FBF98BB___C_METHOD_1_9696A0594E32F567_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_843B7D96C733C5B5(::Class_0_16E4307DCC419505_158* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_158*))((::PBYTE)hIl2Cpp + CLASS_2_A7F82B380FBF98BB___C_METHOD_1_843B7D96C733C5B5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_219D28DAF44B740D(::Class_0_16E4307DCC419505_158* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_0_16E4307DCC419505_158*))((::PBYTE)hIl2Cpp + CLASS_2_A7F82B380FBF98BB___C_METHOD_1_219D28DAF44B740D_OFFSET))(this, a1);
	}
};
