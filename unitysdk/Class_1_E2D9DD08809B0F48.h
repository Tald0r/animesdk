#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigEffectSound; }
namespace MoleMole { class ConfigEnvironmentSound; }
namespace MoleMole { class ConfigLevelSound; }
namespace MoleMole { class ConfigRichtapSound; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_E2D9DD08809B0F48_METHOD_1_13A57E0C7ED26518_OFFSET UNITYSDK_OFFSET(0xB202950)
#define CLASS_1_E2D9DD08809B0F48_METHOD_1_13BD4372A389A41D_OFFSET UNITYSDK_OFFSET(0xB2029D0)
#define CLASS_1_E2D9DD08809B0F48_METHOD_1_163BBF152F1B95D8_OFFSET UNITYSDK_OFFSET(0xB202A10)
#define CLASS_1_E2D9DD08809B0F48_METHOD_1_468E89153934FFD0_OFFSET UNITYSDK_OFFSET(0xB202F50)
#define CLASS_1_E2D9DD08809B0F48_METHOD_1_8A66F5228F18C198_OFFSET UNITYSDK_OFFSET(0xB202120)
#define CLASS_1_E2D9DD08809B0F48_METHOD_1_8C07B76F3772243B_OFFSET UNITYSDK_OFFSET(0xB202990)
#define CLASS_1_E2D9DD08809B0F48_METHOD_1_C0FEA6E69F2ED5FB_OFFSET UNITYSDK_OFFSET(0xB203060)

inline static constexpr unsigned int Class_1_E2D9DD08809B0F48_TypeDefinitionIndex = 62695;

class Class_1_E2D9DD08809B0F48 : public ::System::Object
{
public:
	static ::MoleMole::ConfigLevelSound** StaticGet_Field_1_2()
	{
		return (::MoleMole::ConfigLevelSound**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E2D9DD08809B0F48_TypeDefinitionIndex)->GetStaticField(0x35410);
	}
	static ::MoleMole::ConfigEnvironmentSound** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigEnvironmentSound**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E2D9DD08809B0F48_TypeDefinitionIndex)->GetStaticField(0x35418);
	}
	static ::MoleMole::ConfigRichtapSound** StaticGet_Field_1_3()
	{
		return (::MoleMole::ConfigRichtapSound**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E2D9DD08809B0F48_TypeDefinitionIndex)->GetStaticField(0x35420);
	}
	static ::MoleMole::ConfigEffectSound** StaticGet_Field_1_1()
	{
		return (::MoleMole::ConfigEffectSound**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E2D9DD08809B0F48_TypeDefinitionIndex)->GetStaticField(0x35428);
	}

	static ::System::Void Method_1_8A66F5228F18C198(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E2D9DD08809B0F48_METHOD_1_8A66F5228F18C198_OFFSET))(a1, a2);
	}

	static ::MoleMole::ConfigLevelSound* Method_1_13A57E0C7ED26518()
	{
		return ((::MoleMole::ConfigLevelSound*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E2D9DD08809B0F48_METHOD_1_13A57E0C7ED26518_OFFSET))();
	}

	static ::MoleMole::ConfigEnvironmentSound* Method_1_8C07B76F3772243B()
	{
		return ((::MoleMole::ConfigEnvironmentSound*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E2D9DD08809B0F48_METHOD_1_8C07B76F3772243B_OFFSET))();
	}

	static ::MoleMole::ConfigRichtapSound* Method_1_13BD4372A389A41D()
	{
		return ((::MoleMole::ConfigRichtapSound*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E2D9DD08809B0F48_METHOD_1_13BD4372A389A41D_OFFSET))();
	}

	static ::System::Boolean Method_1_163BBF152F1B95D8()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E2D9DD08809B0F48_METHOD_1_163BBF152F1B95D8_OFFSET))();
	}

	static ::System::Void Method_1_468E89153934FFD0(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2D9DD08809B0F48_METHOD_1_468E89153934FFD0_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::ConfigEffectSound* Method_1_C0FEA6E69F2ED5FB()
	{
		return ((::MoleMole::ConfigEffectSound*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E2D9DD08809B0F48_METHOD_1_C0FEA6E69F2ED5FB_OFFSET))();
	}
};
