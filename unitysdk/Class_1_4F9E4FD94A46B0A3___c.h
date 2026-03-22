#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_4F9E4FD94A46B0A3___C_METHOD_1_7D201B4343E63821_1_OFFSET UNITYSDK_OFFSET(0xD2311E0)
#define CLASS_1_4F9E4FD94A46B0A3___C_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0xD2311D0)
#define CLASS_1_4F9E4FD94A46B0A3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD231180)
#define CLASS_1_4F9E4FD94A46B0A3___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD2311C0)

inline static constexpr unsigned int Class_1_4F9E4FD94A46B0A3___c_TypeDefinitionIndex = 45207;

class Class_1_4F9E4FD94A46B0A3___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::String*>** StaticGet___9__81_1()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4F9E4FD94A46B0A3___c_TypeDefinitionIndex)->GetStaticField(0x31080);
	}
	static ::System::Action_1<::System::String*>** StaticGet___9__81_0()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4F9E4FD94A46B0A3___c_TypeDefinitionIndex)->GetStaticField(0x31088);
	}
	static ::Class_1_4F9E4FD94A46B0A3___c** StaticGet___9()
	{
		return (::Class_1_4F9E4FD94A46B0A3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4F9E4FD94A46B0A3___c_TypeDefinitionIndex)->GetStaticField(0x31090);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4F9E4FD94A46B0A3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F9E4FD94A46B0A3___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4F9E4FD94A46B0A3___C_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D201B4343E63821_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4F9E4FD94A46B0A3___C_METHOD_1_7D201B4343E63821_1_OFFSET))(this, a1);
	}
};
