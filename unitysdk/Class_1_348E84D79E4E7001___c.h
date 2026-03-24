#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_CA6834E3B431337F;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_348E84D79E4E7001___C_METHOD_1_9C849FBE042AD27E_OFFSET UNITYSDK_OFFSET(0x9756D00)
#define CLASS_1_348E84D79E4E7001___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9756CB0)
#define CLASS_1_348E84D79E4E7001___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9756CF0)

inline static constexpr unsigned int Class_1_348E84D79E4E7001___c_TypeDefinitionIndex = 47490;

class Class_1_348E84D79E4E7001___c : public ::System::Object
{
public:
	static ::Class_1_348E84D79E4E7001___c** StaticGet___9()
	{
		return (::Class_1_348E84D79E4E7001___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_348E84D79E4E7001___c_TypeDefinitionIndex)->GetStaticField(0x44990);
	}
	static ::System::Comparison_1<::Class_3_CA6834E3B431337F*>** StaticGet___9__11_0()
	{
		return (::System::Comparison_1<::Class_3_CA6834E3B431337F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_348E84D79E4E7001___c_TypeDefinitionIndex)->GetStaticField(0x44998);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_348E84D79E4E7001___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_348E84D79E4E7001___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_9C849FBE042AD27E(::Class_3_CA6834E3B431337F* a1, ::Class_3_CA6834E3B431337F* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_CA6834E3B431337F*, ::Class_3_CA6834E3B431337F*))((::PBYTE)hIl2Cpp + CLASS_1_348E84D79E4E7001___C_METHOD_1_9C849FBE042AD27E_OFFSET))(this, a1, a2);
	}
};
