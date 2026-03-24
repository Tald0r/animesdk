#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_328;
namespace System { template <typename T> class Func_1; }

#define CLASS_5_0A8A59ADAC5CDE67___C_METHOD_1_1CC681B944A1572C_OFFSET UNITYSDK_OFFSET(0xAE9F4E0)
#define CLASS_5_0A8A59ADAC5CDE67___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAE9F490)
#define CLASS_5_0A8A59ADAC5CDE67___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAE9F4D0)

inline static constexpr unsigned int Class_5_0A8A59ADAC5CDE67___c_TypeDefinitionIndex = 43608;

class Class_5_0A8A59ADAC5CDE67___c : public ::System::Object
{
public:
	static ::System::Func_1<::Il2CppArray<::Class_0_16E4307DCC419505_328*>*>** StaticGet___9__19_0()
	{
		return (::System::Func_1<::Il2CppArray<::Class_0_16E4307DCC419505_328*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_0A8A59ADAC5CDE67___c_TypeDefinitionIndex)->GetStaticField(0x35110);
	}
	static ::Class_5_0A8A59ADAC5CDE67___c** StaticGet___9()
	{
		return (::Class_5_0A8A59ADAC5CDE67___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_0A8A59ADAC5CDE67___c_TypeDefinitionIndex)->GetStaticField(0x35118);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_0A8A59ADAC5CDE67___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0A8A59ADAC5CDE67___C__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::Class_0_16E4307DCC419505_328*>* Method_1_1CC681B944A1572C()
	{
		return ((::Il2CppArray<::Class_0_16E4307DCC419505_328*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0A8A59ADAC5CDE67___C_METHOD_1_1CC681B944A1572C_OFFSET))(this);
	}
};
