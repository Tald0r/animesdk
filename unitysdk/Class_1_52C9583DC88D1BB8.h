#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUICoopTeam3D; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_52C9583DC88D1BB8_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x737EB10)
#define CLASS_1_52C9583DC88D1BB8_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x737EA00)
#define CLASS_1_52C9583DC88D1BB8_METHOD_1_E9B3C82292C35570_OFFSET UNITYSDK_OFFSET(0x737ED80)

inline static constexpr unsigned int Class_1_52C9583DC88D1BB8_TypeDefinitionIndex = 39448;

class Class_1_52C9583DC88D1BB8 : public ::System::Object
{
public:
	static ::MoleMole::ConfigUICoopTeam3D** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigUICoopTeam3D**)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C9583DC88D1BB8_TypeDefinitionIndex)->GetStaticField(0x3C300);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_52C9583DC88D1BB8_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::ConfigUICoopTeam3D* Method_1_E9B3C82292C35570()
	{
		return ((::MoleMole::ConfigUICoopTeam3D*(*)())((::PBYTE)hIl2Cpp + CLASS_1_52C9583DC88D1BB8_METHOD_1_E9B3C82292C35570_OFFSET))();
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_52C9583DC88D1BB8_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}
};
