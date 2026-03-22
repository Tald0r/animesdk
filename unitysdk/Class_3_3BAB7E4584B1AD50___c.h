#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F35B080B137ECC46;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_3BAB7E4584B1AD50___C_METHOD_1_1B63D3FBE7ECAA0A_OFFSET UNITYSDK_OFFSET(0x63BEAD0)
#define CLASS_3_3BAB7E4584B1AD50___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x63BEA80)
#define CLASS_3_3BAB7E4584B1AD50___C__CTOR_OFFSET UNITYSDK_OFFSET(0x63BEAC0)

inline static constexpr unsigned int Class_3_3BAB7E4584B1AD50___c_TypeDefinitionIndex = 60509;

class Class_3_3BAB7E4584B1AD50___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_F35B080B137ECC46*>** StaticGet___9__8_0()
	{
		return (::System::Action_1<::Class_3_F35B080B137ECC46*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3BAB7E4584B1AD50___c_TypeDefinitionIndex)->GetStaticField(0x3E4A0);
	}
	static ::Class_3_3BAB7E4584B1AD50___c** StaticGet___9()
	{
		return (::Class_3_3BAB7E4584B1AD50___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3BAB7E4584B1AD50___c_TypeDefinitionIndex)->GetStaticField(0x3E4A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3BAB7E4584B1AD50___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3BAB7E4584B1AD50___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1B63D3FBE7ECAA0A(::Class_3_F35B080B137ECC46* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_3BAB7E4584B1AD50___C_METHOD_1_1B63D3FBE7ECAA0A_OFFSET))(this, a1);
	}
};
