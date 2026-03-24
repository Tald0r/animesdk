#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuddyBehaviourType.h"
#include "unitysdk/MoleMole/Config/ConfigBuddyBehaviour.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigBuddyMisc; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_E7D38BECDE1083DF_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x8D34C50)
#define CLASS_1_E7D38BECDE1083DF_METHOD_1_75349AE8FFF50B12_OFFSET UNITYSDK_OFFSET(0x8D34F80)
#define CLASS_1_E7D38BECDE1083DF_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x8D34D60)
#define CLASS_1_E7D38BECDE1083DF_METHOD_1_DA196BD208DE7D31_OFFSET UNITYSDK_OFFSET(0x8D351B0)
#define CLASS_1_E7D38BECDE1083DF_METHOD_1_F6197EF2A86E656F_OFFSET UNITYSDK_OFFSET(0x8D34F40)

inline static constexpr unsigned int Class_1_E7D38BECDE1083DF_TypeDefinitionIndex = 47728;

class Class_1_E7D38BECDE1083DF : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigBuddyMisc** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigBuddyMisc**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7D38BECDE1083DF_TypeDefinitionIndex)->GetStaticField(0x35210);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E7D38BECDE1083DF_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E7D38BECDE1083DF_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigBuddyMisc* Method_1_F6197EF2A86E656F()
	{
		return ((::MoleMole::Config::ConfigBuddyMisc*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E7D38BECDE1083DF_METHOD_1_F6197EF2A86E656F_OFFSET))();
	}

	static ::System::Boolean Method_1_75349AE8FFF50B12(::MoleMole::Config::BuddyBehaviourType a1, ::MoleMole::Config::ConfigBuddyBehaviour& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::BuddyBehaviourType, ::MoleMole::Config::ConfigBuddyBehaviour&))((::PBYTE)hIl2Cpp + CLASS_1_E7D38BECDE1083DF_METHOD_1_75349AE8FFF50B12_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DA196BD208DE7D31(::MoleMole::Config::ConfigBuddyMisc* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigBuddyMisc*))((::PBYTE)hIl2Cpp + CLASS_1_E7D38BECDE1083DF_METHOD_1_DA196BD208DE7D31_OFFSET))(a1);
	}
};
