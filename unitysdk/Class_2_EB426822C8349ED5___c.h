#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;

#define CLASS_2_EB426822C8349ED5___C_METHOD_1_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0xD58C750)
#define CLASS_2_EB426822C8349ED5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD58C700)
#define CLASS_2_EB426822C8349ED5___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD58C740)

inline static constexpr unsigned int Class_2_EB426822C8349ED5___c_TypeDefinitionIndex = 73229;

class Class_2_EB426822C8349ED5___c : public ::System::Object
{
public:
	static ::Class_2_EB426822C8349ED5___c** StaticGet___9()
	{
		return (::Class_2_EB426822C8349ED5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EB426822C8349ED5___c_TypeDefinitionIndex)->GetStaticField(0x42AC0);
	}
	static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C** StaticGet___9__6_0()
	{
		return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EB426822C8349ED5___c_TypeDefinitionIndex)->GetStaticField(0x42AC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EB426822C8349ED5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB426822C8349ED5___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_EB426822C8349ED5___C_METHOD_1_7DAF5B3ADF494895_OFFSET))(this, a1);
	}
};
