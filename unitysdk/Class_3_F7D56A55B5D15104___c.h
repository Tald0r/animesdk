#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_8F2DCA7AAF39C360;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F7D56A55B5D15104___C_METHOD_1_7EF33C5E64D3580D_OFFSET UNITYSDK_OFFSET(0x9F530F0)
#define CLASS_3_F7D56A55B5D15104___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F530A0)
#define CLASS_3_F7D56A55B5D15104___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9F530E0)

inline static constexpr unsigned int Class_3_F7D56A55B5D15104___c_TypeDefinitionIndex = 77704;

class Class_3_F7D56A55B5D15104___c : public ::System::Object
{
public:
	static ::Class_3_F7D56A55B5D15104___c** StaticGet___9()
	{
		return (::Class_3_F7D56A55B5D15104___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F7D56A55B5D15104___c_TypeDefinitionIndex)->GetStaticField(0x37430);
	}
	static ::System::Action_1<::Class_3_8F2DCA7AAF39C360*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_8F2DCA7AAF39C360*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F7D56A55B5D15104___c_TypeDefinitionIndex)->GetStaticField(0x37438);
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
