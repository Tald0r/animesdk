#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A76F1E7974674667;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_AAB024DAC549A2AF___C_METHOD_1_76E1B02A8FC35BD9_OFFSET UNITYSDK_OFFSET(0x64803D0)
#define CLASS_1_AAB024DAC549A2AF___C_METHOD_1_8B26E3FEBA1ECFC8_OFFSET UNITYSDK_OFFSET(0x64803F0)
#define CLASS_1_AAB024DAC549A2AF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6480380)
#define CLASS_1_AAB024DAC549A2AF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x64803C0)

inline static constexpr unsigned int Class_1_AAB024DAC549A2AF___c_TypeDefinitionIndex = 79688;

class Class_1_AAB024DAC549A2AF___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_A76F1E7974674667*>** StaticGet___9__8_0()
	{
		return (::System::Comparison_1<::Class_1_A76F1E7974674667*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAB024DAC549A2AF___c_TypeDefinitionIndex)->GetStaticField(0x3FA40);
	}
	static ::Class_1_AAB024DAC549A2AF___c** StaticGet___9()
	{
		return (::Class_1_AAB024DAC549A2AF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAB024DAC549A2AF___c_TypeDefinitionIndex)->GetStaticField(0x3FA48);
	}
	static ::System::Func_2<::Class_1_A76F1E7974674667*, ::System::Boolean>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::Class_1_A76F1E7974674667*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAB024DAC549A2AF___c_TypeDefinitionIndex)->GetStaticField(0x3FA50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAB024DAC549A2AF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAB024DAC549A2AF___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_76E1B02A8FC35BD9(::Class_1_A76F1E7974674667* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A76F1E7974674667*))((::PBYTE)hIl2Cpp + CLASS_1_AAB024DAC549A2AF___C_METHOD_1_76E1B02A8FC35BD9_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_8B26E3FEBA1ECFC8(::Class_1_A76F1E7974674667* a1, ::Class_1_A76F1E7974674667* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_A76F1E7974674667*, ::Class_1_A76F1E7974674667*))((::PBYTE)hIl2Cpp + CLASS_1_AAB024DAC549A2AF___C_METHOD_1_8B26E3FEBA1ECFC8_OFFSET))(this, a1, a2);
	}
};
