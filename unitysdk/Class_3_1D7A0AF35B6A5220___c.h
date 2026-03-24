#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_6A6ED67B92DC299D;
class Class_3_F35B080B137ECC46;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_1D7A0AF35B6A5220___C_METHOD_1_7AB9DA741212CD9F_OFFSET UNITYSDK_OFFSET(0x6B8A600)
#define CLASS_3_1D7A0AF35B6A5220___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6B8A5B0)
#define CLASS_3_1D7A0AF35B6A5220___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6B8A5F0)

inline static constexpr unsigned int Class_3_1D7A0AF35B6A5220___c_TypeDefinitionIndex = 56597;

class Class_3_1D7A0AF35B6A5220___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_F35B080B137ECC46*, ::Class_3_6A6ED67B92DC299D*>** StaticGet___9__3_0()
	{
		return (::System::Action_2<::Class_3_F35B080B137ECC46*, ::Class_3_6A6ED67B92DC299D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1D7A0AF35B6A5220___c_TypeDefinitionIndex)->GetStaticField(0x42BD0);
	}
	static ::Class_3_1D7A0AF35B6A5220___c** StaticGet___9()
	{
		return (::Class_3_1D7A0AF35B6A5220___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1D7A0AF35B6A5220___c_TypeDefinitionIndex)->GetStaticField(0x42BD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_1D7A0AF35B6A5220___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1D7A0AF35B6A5220___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7AB9DA741212CD9F(::Class_3_F35B080B137ECC46* a1, ::Class_3_6A6ED67B92DC299D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::Class_3_6A6ED67B92DC299D*))((::PBYTE)hIl2Cpp + CLASS_3_1D7A0AF35B6A5220___C_METHOD_1_7AB9DA741212CD9F_OFFSET))(this, a1, a2);
	}
};
