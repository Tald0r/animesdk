#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A3658A741325FC2.h"
#include "unitysdk/Enum_3_96F6662CA3713095_1.h"

class Class_0_16E4307DCC419505_158;
class Class_1_1695DFA91537D693;
class Class_2_208CC9941471731A_430;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F9F5F3C264E38EE3_METHOD_2_6246203AE6F42E6A_OFFSET UNITYSDK_OFFSET(0x77DEDF0)
#define CLASS_2_F9F5F3C264E38EE3_METHOD_2_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x77DF000)
#define CLASS_2_F9F5F3C264E38EE3_METHOD_2_AF11EB02CE78B812_OFFSET UNITYSDK_OFFSET(0x77DF230)
#define CLASS_2_F9F5F3C264E38EE3_METHOD_2_B41BAB4E26F7C186_OFFSET UNITYSDK_OFFSET(0x77DEF40)
#define CLASS_2_F9F5F3C264E38EE3_METHOD_2_BAA282619898CA62_OFFSET UNITYSDK_OFFSET(0x77DF750)
#define CLASS_2_F9F5F3C264E38EE3_METHOD_2_FCE2E60E8DBEC61E_OFFSET UNITYSDK_OFFSET(0x77DF4D0)
#define CLASS_2_F9F5F3C264E38EE3__CTOR_OFFSET UNITYSDK_OFFSET(0x77DEDE0)

inline static constexpr unsigned int Class_2_F9F5F3C264E38EE3_TypeDefinitionIndex = 52165;

class Class_2_F9F5F3C264E38EE3 : public ::Class_1_8A3658A741325FC2
{
public:
	::System::Collections::Generic::List_1<::Class_1_1695DFA91537D693*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9F5F3C264E38EE3__CTOR_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_430* Method_2_6246203AE6F42E6A()
	{
		return ((::Class_2_208CC9941471731A_430*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9F5F3C264E38EE3_METHOD_2_6246203AE6F42E6A_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_1695DFA91537D693*>* Method_2_B41BAB4E26F7C186()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1695DFA91537D693*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9F5F3C264E38EE3_METHOD_2_B41BAB4E26F7C186_OFFSET))(this);
	}

	static ::System::Void Method_2_AF11EB02CE78B812(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F9F5F3C264E38EE3_METHOD_2_AF11EB02CE78B812_OFFSET))(a1);
	}

	::System::Void Method_2_FCE2E60E8DBEC61E(::Class_0_16E4307DCC419505_158* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_158*))((::PBYTE)hIl2Cpp + CLASS_2_F9F5F3C264E38EE3_METHOD_2_FCE2E60E8DBEC61E_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1C7122184516C18()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9F5F3C264E38EE3_METHOD_2_A1C7122184516C18_OFFSET))(this);
	}

	::System::Void Method_2_BAA282619898CA62(::System::Int32 a1, ::Enum_3_96F6662CA3713095_1 a2, ::System::Action* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_96F6662CA3713095_1, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_F9F5F3C264E38EE3_METHOD_2_BAA282619898CA62_OFFSET))(this, a1, a2, a3, a4);
	}
};
