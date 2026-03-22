#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AvatarScriptAndAnimOverrideConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_A5E122FE28B8DB39_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0xA952CD0)
#define CLASS_1_A5E122FE28B8DB39_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0xA952BC0)
#define CLASS_1_A5E122FE28B8DB39__CCTOR_OFFSET UNITYSDK_OFFSET(0xA952BB0)
#define CLASS_1_A5E122FE28B8DB39__CTOR_OFFSET UNITYSDK_OFFSET(0xA952BA0)

inline static constexpr unsigned int Class_1_A5E122FE28B8DB39_TypeDefinitionIndex = 57471;

class Class_1_A5E122FE28B8DB39 : public ::System::Object
{
public:
	static ::MoleMole::Config::AvatarScriptAndAnimOverrideConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::AvatarScriptAndAnimOverrideConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A5E122FE28B8DB39_TypeDefinitionIndex)->GetStaticField(0x2FB00);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5E122FE28B8DB39__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A5E122FE28B8DB39__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A5E122FE28B8DB39_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A5E122FE28B8DB39_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}
};
