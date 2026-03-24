#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1;

#define CLASS_2_293B23618CFCC726___C_METHOD_1_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0xEB35920)
#define CLASS_2_293B23618CFCC726___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEB358D0)
#define CLASS_2_293B23618CFCC726___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEB35910)

inline static constexpr unsigned int Class_2_293B23618CFCC726___c_TypeDefinitionIndex = 52919;

class Class_2_293B23618CFCC726___c : public ::System::Object
{
public:
	static ::Class_2_293B23618CFCC726___c** StaticGet___9()
	{
		return (::Class_2_293B23618CFCC726___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_293B23618CFCC726___c_TypeDefinitionIndex)->GetStaticField(0x3C6A0);
	}
	static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1** StaticGet___9__104_1()
	{
		return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(Class_2_293B23618CFCC726___c_TypeDefinitionIndex)->GetStaticField(0x3C6A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_293B23618CFCC726___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_293B23618CFCC726___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_2_293B23618CFCC726___C_METHOD_1_7DAF5B3ADF494895_OFFSET))(this, a1);
	}
};
