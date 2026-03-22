#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSceneSound; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_E505F055D44C5CB5_METHOD_1_388821508C45AB12_OFFSET UNITYSDK_OFFSET(0xBB6DBD0)
#define CLASS_1_E505F055D44C5CB5_METHOD_1_468E89153934FFD0_OFFSET UNITYSDK_OFFSET(0xBB6DC10)
#define CLASS_1_E505F055D44C5CB5_METHOD_1_8A66F5228F18C198_OFFSET UNITYSDK_OFFSET(0xBB6D710)
#define CLASS_1_E505F055D44C5CB5_METHOD_1_C6AC693DE739FC7E_OFFSET UNITYSDK_OFFSET(0xBB6DEA0)
#define CLASS_1_E505F055D44C5CB5_METHOD_1_EF79C60756C35D5F_OFFSET UNITYSDK_OFFSET(0xBB6DD20)

inline static constexpr unsigned int Class_1_E505F055D44C5CB5_TypeDefinitionIndex = 42000;

class Class_1_E505F055D44C5CB5 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigSceneSound** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigSceneSound**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E505F055D44C5CB5_TypeDefinitionIndex)->GetStaticField(0x39F10);
	}

	static ::System::Void Method_1_8A66F5228F18C198(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E505F055D44C5CB5_METHOD_1_8A66F5228F18C198_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigSceneSound* Method_1_388821508C45AB12()
	{
		return ((::MoleMole::Config::ConfigSceneSound*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E505F055D44C5CB5_METHOD_1_388821508C45AB12_OFFSET))();
	}

	static ::System::Void Method_1_468E89153934FFD0(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E505F055D44C5CB5_METHOD_1_468E89153934FFD0_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_EF79C60756C35D5F()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_E505F055D44C5CB5_METHOD_1_EF79C60756C35D5F_OFFSET))();
	}

	static ::System::String* Method_1_C6AC693DE739FC7E(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E505F055D44C5CB5_METHOD_1_C6AC693DE739FC7E_OFFSET))(a1);
	}
};
