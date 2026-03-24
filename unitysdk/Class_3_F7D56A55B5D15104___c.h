#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_8F2DCA7AAF39C360;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F7D56A55B5D15104___C_METHOD_1_7EF33C5E64D3580D_OFFSET UNITYSDK_OFFSET(0xD5E9840)
#define CLASS_3_F7D56A55B5D15104___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD5E97F0)
#define CLASS_3_F7D56A55B5D15104___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD5E9830)

inline static constexpr unsigned int Class_3_F7D56A55B5D15104___c_TypeDefinitionIndex = 38948;

class Class_3_F7D56A55B5D15104___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_8F2DCA7AAF39C360*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_8F2DCA7AAF39C360*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F7D56A55B5D15104___c_TypeDefinitionIndex)->GetStaticField(0x446B0);
	}
	static ::Class_3_F7D56A55B5D15104___c** StaticGet___9()
	{
		return (::Class_3_F7D56A55B5D15104___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F7D56A55B5D15104___c_TypeDefinitionIndex)->GetStaticField(0x446B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F7D56A55B5D15104___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F7D56A55B5D15104___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7EF33C5E64D3580D(::Class_3_8F2DCA7AAF39C360* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_8F2DCA7AAF39C360*))((::PBYTE)hIl2Cpp + CLASS_3_F7D56A55B5D15104___C_METHOD_1_7EF33C5E64D3580D_OFFSET))(this, a1);
	}
};
