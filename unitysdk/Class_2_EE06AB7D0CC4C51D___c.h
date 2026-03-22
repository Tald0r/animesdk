#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_EE06AB7D0CC4C51D___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x5E298E0)
#define CLASS_2_EE06AB7D0CC4C51D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x5E29890)
#define CLASS_2_EE06AB7D0CC4C51D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x5E298D0)

inline static constexpr unsigned int Class_2_EE06AB7D0CC4C51D___c_TypeDefinitionIndex = 62921;

class Class_2_EE06AB7D0CC4C51D___c : public ::System::Object
{
public:
	static ::Class_2_EE06AB7D0CC4C51D___c** StaticGet___9()
	{
		return (::Class_2_EE06AB7D0CC4C51D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EE06AB7D0CC4C51D___c_TypeDefinitionIndex)->GetStaticField(0x3C790);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__37_12()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EE06AB7D0CC4C51D___c_TypeDefinitionIndex)->GetStaticField(0x3C798);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EE06AB7D0CC4C51D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE06AB7D0CC4C51D___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE06AB7D0CC4C51D___C_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
