#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigExQTE; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5984748FA9A4C212_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0xA8C6F80)
#define CLASS_1_5984748FA9A4C212_METHOD_1_844274E143414915_OFFSET UNITYSDK_OFFSET(0xA8C6C60)
#define CLASS_1_5984748FA9A4C212_METHOD_1_896DA42CBA3EC3B7_OFFSET UNITYSDK_OFFSET(0xA8C6CF0)
#define CLASS_1_5984748FA9A4C212_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0xA8C6E70)

inline static constexpr unsigned int Class_1_5984748FA9A4C212_TypeDefinitionIndex = 68861;

class Class_1_5984748FA9A4C212 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigExQTE** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigExQTE**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5984748FA9A4C212_TypeDefinitionIndex)->GetStaticField(0x30550);
	}

	static ::MoleMole::Config::ConfigExQTE* Method_1_844274E143414915()
	{
		return ((::MoleMole::Config::ConfigExQTE*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5984748FA9A4C212_METHOD_1_844274E143414915_OFFSET))();
	}

	static ::System::Single Method_1_896DA42CBA3EC3B7(::System::Int32 a1)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5984748FA9A4C212_METHOD_1_896DA42CBA3EC3B7_OFFSET))(a1);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5984748FA9A4C212_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5984748FA9A4C212_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}
};
