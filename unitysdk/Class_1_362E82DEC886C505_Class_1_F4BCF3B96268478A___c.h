#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_469;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_362E82DEC886C505_CLASS_1_F4BCF3B96268478A___C_METHOD_1_643C609A658E9A6C_OFFSET UNITYSDK_OFFSET(0x6B8E6F0)
#define CLASS_1_362E82DEC886C505_CLASS_1_F4BCF3B96268478A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6B8E6A0)
#define CLASS_1_362E82DEC886C505_CLASS_1_F4BCF3B96268478A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6B8E6E0)

inline static constexpr unsigned int Class_1_362E82DEC886C505_Class_1_F4BCF3B96268478A___c_TypeDefinitionIndex = 66740;

class Class_1_362E82DEC886C505_Class_1_F4BCF3B96268478A___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_208CC9941471731A_469*, ::System::Boolean>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::Class_2_208CC9941471731A_469*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_362E82DEC886C505_Class_1_F4BCF3B96268478A___c_TypeDefinitionIndex)->GetStaticField(0x44D00);
	}
	static ::Class_1_362E82DEC886C505_Class_1_F4BCF3B96268478A___c** StaticGet___9()
	{
		return (::Class_1_362E82DEC886C505_Class_1_F4BCF3B96268478A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_362E82DEC886C505_Class_1_F4BCF3B96268478A___c_TypeDefinitionIndex)->GetStaticField(0x44D08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_362E82DEC886C505_CLASS_1_F4BCF3B96268478A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_362E82DEC886C505_CLASS_1_F4BCF3B96268478A___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_643C609A658E9A6C(::Class_2_208CC9941471731A_469* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_469*))((::PBYTE)hIl2Cpp + CLASS_1_362E82DEC886C505_CLASS_1_F4BCF3B96268478A___C_METHOD_1_643C609A658E9A6C_OFFSET))(this, a1);
	}
};
