#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMaterialPropertySettings; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Shader; }

#define CLASS_1_EF75C29E1EEA1558_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x828DAD0)
#define CLASS_1_EF75C29E1EEA1558_METHOD_1_22298106F5F0DF51_OFFSET UNITYSDK_OFFSET(0x828D850)
#define CLASS_1_EF75C29E1EEA1558_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x828D670)
#define CLASS_1_EF75C29E1EEA1558_METHOD_1_9426C43BAF60AEFB_OFFSET UNITYSDK_OFFSET(0x828D4F0)
#define CLASS_1_EF75C29E1EEA1558_METHOD_1_A731FE34145F8F66_OFFSET UNITYSDK_OFFSET(0x828DA90)
#define CLASS_1_EF75C29E1EEA1558_METHOD_1_BF4765F394C41E10_OFFSET UNITYSDK_OFFSET(0x828DA50)

inline static constexpr unsigned int Class_1_EF75C29E1EEA1558_TypeDefinitionIndex = 43809;

class Class_1_EF75C29E1EEA1558 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigMaterialPropertySettings** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigMaterialPropertySettings**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF75C29E1EEA1558_TypeDefinitionIndex)->GetStaticField(0x30680);
	}

	static ::System::Boolean Method_1_9426C43BAF60AEFB(::MoleMole::Config::MaterialPropertyType a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::MaterialPropertyType, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_EF75C29E1EEA1558_METHOD_1_9426C43BAF60AEFB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_EF75C29E1EEA1558_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_22298106F5F0DF51(::MoleMole::Config::MaterialPropertyType a1, ::UnityEngine::Shader*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::MaterialPropertyType, ::UnityEngine::Shader*&))((::PBYTE)hIl2Cpp + CLASS_1_EF75C29E1EEA1558_METHOD_1_22298106F5F0DF51_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigMaterialPropertySettings* Method_1_BF4765F394C41E10()
	{
		return ((::MoleMole::Config::ConfigMaterialPropertySettings*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF75C29E1EEA1558_METHOD_1_BF4765F394C41E10_OFFSET))();
	}

	static ::System::Void Method_1_A731FE34145F8F66(::MoleMole::Config::ConfigMaterialPropertySettings* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigMaterialPropertySettings*))((::PBYTE)hIl2Cpp + CLASS_1_EF75C29E1EEA1558_METHOD_1_A731FE34145F8F66_OFFSET))(a1);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EF75C29E1EEA1558_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}
};
