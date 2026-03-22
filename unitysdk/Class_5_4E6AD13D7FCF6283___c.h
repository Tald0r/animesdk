#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_622;
namespace System { template <typename T> class Func_1; }

#define CLASS_5_4E6AD13D7FCF6283___C_METHOD_1_31BE53C689B5FD80_OFFSET UNITYSDK_OFFSET(0x7BD6810)
#define CLASS_5_4E6AD13D7FCF6283___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7BD67C0)
#define CLASS_5_4E6AD13D7FCF6283___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7BD6800)

inline static constexpr unsigned int Class_5_4E6AD13D7FCF6283___c_TypeDefinitionIndex = 74512;

class Class_5_4E6AD13D7FCF6283___c : public ::System::Object
{
public:
	static ::System::Func_1<::Il2CppArray<::Class_0_16E4307DCC419505_622*>*>** StaticGet___9__16_0()
	{
		return (::System::Func_1<::Il2CppArray<::Class_0_16E4307DCC419505_622*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_4E6AD13D7FCF6283___c_TypeDefinitionIndex)->GetStaticField(0x2BE20);
	}
	static ::Class_5_4E6AD13D7FCF6283___c** StaticGet___9()
	{
		return (::Class_5_4E6AD13D7FCF6283___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_4E6AD13D7FCF6283___c_TypeDefinitionIndex)->GetStaticField(0x2BE28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_4E6AD13D7FCF6283___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_4E6AD13D7FCF6283___C__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::Class_0_16E4307DCC419505_622*>* Method_1_31BE53C689B5FD80()
	{
		return ((::Il2CppArray<::Class_0_16E4307DCC419505_622*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_4E6AD13D7FCF6283___C_METHOD_1_31BE53C689B5FD80_OFFSET))(this);
	}
};
