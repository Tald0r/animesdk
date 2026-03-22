#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TeleportSelectionType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTeleportSelection3C; }
namespace MoleMole::Config { class ConfigTeleportSelections; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_F6B785197712430F_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0xACA5360)
#define CLASS_1_F6B785197712430F_METHOD_1_1EBC952C03587006_OFFSET UNITYSDK_OFFSET(0xACA54B0)
#define CLASS_1_F6B785197712430F_METHOD_1_48BCD5620963B6FD_OFFSET UNITYSDK_OFFSET(0xACA5470)
#define CLASS_1_F6B785197712430F_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0xACA5180)
#define CLASS_1_F6B785197712430F_METHOD_1_B247F6F44705FB1B_OFFSET UNITYSDK_OFFSET(0xACA5140)

inline static constexpr unsigned int Class_1_F6B785197712430F_TypeDefinitionIndex = 68012;

class Class_1_F6B785197712430F : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigTeleportSelections** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigTeleportSelections**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F6B785197712430F_TypeDefinitionIndex)->GetStaticField(0x30CE0);
	}

	static ::MoleMole::Config::ConfigTeleportSelections* Method_1_B247F6F44705FB1B()
	{
		return ((::MoleMole::Config::ConfigTeleportSelections*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F6B785197712430F_METHOD_1_B247F6F44705FB1B_OFFSET))();
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F6B785197712430F_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6B785197712430F_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_48BCD5620963B6FD(::MoleMole::Config::ConfigTeleportSelections* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigTeleportSelections*))((::PBYTE)hIl2Cpp + CLASS_1_F6B785197712430F_METHOD_1_48BCD5620963B6FD_OFFSET))(a1);
	}

	static ::MoleMole::Config::ConfigTeleportSelection3C* Method_1_1EBC952C03587006(::MoleMole::Config::TeleportSelectionType a1)
	{
		return ((::MoleMole::Config::ConfigTeleportSelection3C*(*)(::MoleMole::Config::TeleportSelectionType))((::PBYTE)hIl2Cpp + CLASS_1_F6B785197712430F_METHOD_1_1EBC952C03587006_OFFSET))(a1);
	}
};
