#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_165;
class Class_2_25B3E66D74D4E517;
class Class_2_AB0EB502868A1F2C;
namespace System { template <typename T1, typename T2> class Converter_2; }

#define CLASS_2_3076E7144CA9F588___C_METHOD_1_933713A4305E9272_OFFSET UNITYSDK_OFFSET(0x5E71020)
#define CLASS_2_3076E7144CA9F588___C_METHOD_1_BF022610ACA9AF24_OFFSET UNITYSDK_OFFSET(0x5E71040)
#define CLASS_2_3076E7144CA9F588___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x5E70FD0)
#define CLASS_2_3076E7144CA9F588___C__CTOR_OFFSET UNITYSDK_OFFSET(0x5E71010)

inline static constexpr unsigned int Class_2_3076E7144CA9F588___c_TypeDefinitionIndex = 70787;

class Class_2_3076E7144CA9F588___c : public ::System::Object
{
public:
	static ::Class_2_3076E7144CA9F588___c** StaticGet___9()
	{
		return (::Class_2_3076E7144CA9F588___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3076E7144CA9F588___c_TypeDefinitionIndex)->GetStaticField(0x33B50);
	}
	static ::System::Converter_2<::Class_2_25B3E66D74D4E517*, ::Class_2_208CC9941471731A_165*>** StaticGet___9__87_0()
	{
		return (::System::Converter_2<::Class_2_25B3E66D74D4E517*, ::Class_2_208CC9941471731A_165*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3076E7144CA9F588___c_TypeDefinitionIndex)->GetStaticField(0x33B58);
	}
	static ::System::Converter_2<::Class_2_AB0EB502868A1F2C*, ::System::Int32>** StaticGet___9__73_0()
	{
		return (::System::Converter_2<::Class_2_AB0EB502868A1F2C*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3076E7144CA9F588___c_TypeDefinitionIndex)->GetStaticField(0x33B60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3076E7144CA9F588___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3076E7144CA9F588___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_933713A4305E9272(::Class_2_AB0EB502868A1F2C* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_AB0EB502868A1F2C*))((::PBYTE)hIl2Cpp + CLASS_2_3076E7144CA9F588___C_METHOD_1_933713A4305E9272_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_165* Method_1_BF022610ACA9AF24(::Class_2_25B3E66D74D4E517* a1)
	{
		return ((::Class_2_208CC9941471731A_165*(*)(::PVOID, ::Class_2_25B3E66D74D4E517*))((::PBYTE)hIl2Cpp + CLASS_2_3076E7144CA9F588___C_METHOD_1_BF022610ACA9AF24_OFFSET))(this, a1);
	}
};
