#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_906601D3016C0790;
class Class_3_F35B080B137ECC46;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_0D063CC95FC6D760___C_METHOD_1_3F5EDC63A3258E1D_OFFSET UNITYSDK_OFFSET(0x7BFCF50)
#define CLASS_3_0D063CC95FC6D760___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7BFCF00)
#define CLASS_3_0D063CC95FC6D760___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7BFCF40)

inline static constexpr unsigned int Class_3_0D063CC95FC6D760___c_TypeDefinitionIndex = 71087;

class Class_3_0D063CC95FC6D760___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_906601D3016C0790*, ::Class_3_F35B080B137ECC46*>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::Class_3_906601D3016C0790*, ::Class_3_F35B080B137ECC46*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_0D063CC95FC6D760___c_TypeDefinitionIndex)->GetStaticField(0x39A80);
	}
	static ::Class_3_0D063CC95FC6D760___c** StaticGet___9()
	{
		return (::Class_3_0D063CC95FC6D760___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_0D063CC95FC6D760___c_TypeDefinitionIndex)->GetStaticField(0x39A88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_0D063CC95FC6D760___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D063CC95FC6D760___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3F5EDC63A3258E1D(::Class_3_906601D3016C0790* a1, ::Class_3_F35B080B137ECC46* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_906601D3016C0790*, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_0D063CC95FC6D760___C_METHOD_1_3F5EDC63A3258E1D_OFFSET))(this, a1, a2);
	}
};
