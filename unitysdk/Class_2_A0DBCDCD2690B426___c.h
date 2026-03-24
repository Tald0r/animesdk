#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1;

#define CLASS_2_A0DBCDCD2690B426___C_METHOD_1_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0xA9BA0C0)
#define CLASS_2_A0DBCDCD2690B426___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA9BA070)
#define CLASS_2_A0DBCDCD2690B426___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA9BA0B0)

inline static constexpr unsigned int Class_2_A0DBCDCD2690B426___c_TypeDefinitionIndex = 75791;

class Class_2_A0DBCDCD2690B426___c : public ::System::Object
{
public:
	static ::Class_2_A0DBCDCD2690B426___c** StaticGet___9()
	{
		return (::Class_2_A0DBCDCD2690B426___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A0DBCDCD2690B426___c_TypeDefinitionIndex)->GetStaticField(0x2F770);
	}
	static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1** StaticGet___9__96_2()
	{
		return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A0DBCDCD2690B426___c_TypeDefinitionIndex)->GetStaticField(0x2F778);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A0DBCDCD2690B426___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0DBCDCD2690B426___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_2_A0DBCDCD2690B426___C_METHOD_1_7DAF5B3ADF494895_OFFSET))(this, a1);
	}
};
