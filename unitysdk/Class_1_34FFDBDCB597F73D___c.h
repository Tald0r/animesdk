#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_750C45F06470C198;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_34FFDBDCB597F73D___C_METHOD_1_1DA046EF3AB7EF36_OFFSET UNITYSDK_OFFSET(0x9F13990)
#define CLASS_1_34FFDBDCB597F73D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F13940)
#define CLASS_1_34FFDBDCB597F73D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9F13980)

inline static constexpr unsigned int Class_1_34FFDBDCB597F73D___c_TypeDefinitionIndex = 66573;

class Class_1_34FFDBDCB597F73D___c : public ::System::Object
{
public:
	static ::Class_1_34FFDBDCB597F73D___c** StaticGet___9()
	{
		return (::Class_1_34FFDBDCB597F73D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_34FFDBDCB597F73D___c_TypeDefinitionIndex)->GetStaticField(0x42B80);
	}
	static ::System::Action_1<::Class_1_750C45F06470C198*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_1_750C45F06470C198*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_34FFDBDCB597F73D___c_TypeDefinitionIndex)->GetStaticField(0x42B88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_34FFDBDCB597F73D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34FFDBDCB597F73D___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1DA046EF3AB7EF36(::Class_1_750C45F06470C198* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_750C45F06470C198*))((::PBYTE)hIl2Cpp + CLASS_1_34FFDBDCB597F73D___C_METHOD_1_1DA046EF3AB7EF36_OFFSET))(this, a1);
	}
};
