#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigUIAvatar; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_6280760D3813B9CA_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x89BD770)
#define CLASS_1_6280760D3813B9CA_METHOD_1_4A709C44289C7CF1_OFFSET UNITYSDK_OFFSET(0x89BD9D0)
#define CLASS_1_6280760D3813B9CA_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x89BD660)
#define CLASS_1_6280760D3813B9CA_METHOD_1_C7892575E541D38A_OFFSET UNITYSDK_OFFSET(0x89BDA60)
#define CLASS_1_6280760D3813B9CA__CTOR_OFFSET UNITYSDK_OFFSET(0x89BD650)

inline static constexpr unsigned int Class_1_6280760D3813B9CA_TypeDefinitionIndex = 44352;

class Class_1_6280760D3813B9CA : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUIAvatar** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigUIAvatar**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6280760D3813B9CA_TypeDefinitionIndex)->GetStaticField(0x36120);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6280760D3813B9CA__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6280760D3813B9CA_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6280760D3813B9CA_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigUIAvatar* Method_1_4A709C44289C7CF1()
	{
		return ((::MoleMole::Config::ConfigUIAvatar*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6280760D3813B9CA_METHOD_1_4A709C44289C7CF1_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_C7892575E541D38A(::System::Int32 a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::UnityEngine::Color(*)(::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6280760D3813B9CA_METHOD_1_C7892575E541D38A_OFFSET))(a1, a2, a3);
	}
};
