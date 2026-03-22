#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGroupVideo; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_378E61633EDA1109_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x93D3F50)
#define CLASS_1_378E61633EDA1109_METHOD_1_0C86AD7C0DC425AE_OFFSET UNITYSDK_OFFSET(0x93D3DB0)
#define CLASS_1_378E61633EDA1109_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x93D3E40)

inline static constexpr unsigned int Class_1_378E61633EDA1109_TypeDefinitionIndex = 44986;

class Class_1_378E61633EDA1109 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigGroupVideo** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigGroupVideo**)Il2CppClass::FromTypeDefinitionIndex(Class_1_378E61633EDA1109_TypeDefinitionIndex)->GetStaticField(0x33E20);
	}

	static ::MoleMole::Config::ConfigGroupVideo* Method_1_0C86AD7C0DC425AE()
	{
		return ((::MoleMole::Config::ConfigGroupVideo*(*)())((::PBYTE)hIl2Cpp + CLASS_1_378E61633EDA1109_METHOD_1_0C86AD7C0DC425AE_OFFSET))();
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_378E61633EDA1109_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_378E61633EDA1109_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}
};
