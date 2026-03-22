#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUICamera; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_3D5DBBC2F53A233C_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x67109F0)
#define CLASS_1_3D5DBBC2F53A233C_METHOD_1_7C8DF195D8E95427_OFFSET UNITYSDK_OFFSET(0x6710C50)
#define CLASS_1_3D5DBBC2F53A233C_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x6710CE0)

inline static constexpr unsigned int Class_1_3D5DBBC2F53A233C_TypeDefinitionIndex = 76483;

class Class_1_3D5DBBC2F53A233C : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUICamera** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigUICamera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D5DBBC2F53A233C_TypeDefinitionIndex)->GetStaticField(0x3D060);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3D5DBBC2F53A233C_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigUICamera* Method_1_7C8DF195D8E95427()
	{
		return ((::MoleMole::Config::ConfigUICamera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3D5DBBC2F53A233C_METHOD_1_7C8DF195D8E95427_OFFSET))();
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3D5DBBC2F53A233C_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}
};
