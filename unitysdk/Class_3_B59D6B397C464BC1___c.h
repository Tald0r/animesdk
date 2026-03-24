#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F35B080B137ECC46;
class Class_3_F432524C1ED76C82;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_B59D6B397C464BC1___C_METHOD_1_2066B693D3D0F431_OFFSET UNITYSDK_OFFSET(0x71A3490)
#define CLASS_3_B59D6B397C464BC1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x71A3440)
#define CLASS_3_B59D6B397C464BC1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x71A3480)

inline static constexpr unsigned int Class_3_B59D6B397C464BC1___c_TypeDefinitionIndex = 63917;

class Class_3_B59D6B397C464BC1___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_F35B080B137ECC46*, ::Class_3_F432524C1ED76C82*>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::Class_3_F35B080B137ECC46*, ::Class_3_F432524C1ED76C82*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B59D6B397C464BC1___c_TypeDefinitionIndex)->GetStaticField(0x304D0);
	}
	static ::Class_3_B59D6B397C464BC1___c** StaticGet___9()
	{
		return (::Class_3_B59D6B397C464BC1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B59D6B397C464BC1___c_TypeDefinitionIndex)->GetStaticField(0x304D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B59D6B397C464BC1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B59D6B397C464BC1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2066B693D3D0F431(::Class_3_F35B080B137ECC46* a1, ::Class_3_F432524C1ED76C82* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::Class_3_F432524C1ED76C82*))((::PBYTE)hIl2Cpp + CLASS_3_B59D6B397C464BC1___C_METHOD_1_2066B693D3D0F431_OFFSET))(this, a1, a2);
	}
};
