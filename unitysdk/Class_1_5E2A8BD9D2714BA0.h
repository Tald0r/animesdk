#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMonsterAlertItem; }
namespace MoleMole::Config { class ConfigMonsterAlerts; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5E2A8BD9D2714BA0_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0xB36A100)
#define CLASS_1_5E2A8BD9D2714BA0_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0xB369EE0)
#define CLASS_1_5E2A8BD9D2714BA0_METHOD_1_9C883562F1FCFBBC_OFFSET UNITYSDK_OFFSET(0xB36A440)
#define CLASS_1_5E2A8BD9D2714BA0_METHOD_1_C1484A31916D6492_OFFSET UNITYSDK_OFFSET(0xB36A0C0)
#define CLASS_1_5E2A8BD9D2714BA0_METHOD_1_C61A70F72A355F40_OFFSET UNITYSDK_OFFSET(0xB36A210)

inline static constexpr unsigned int Class_1_5E2A8BD9D2714BA0_TypeDefinitionIndex = 38077;

class Class_1_5E2A8BD9D2714BA0 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigMonsterAlerts** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigMonsterAlerts**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E2A8BD9D2714BA0_TypeDefinitionIndex)->GetStaticField(0x39EF0);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5E2A8BD9D2714BA0_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C1484A31916D6492(::MoleMole::Config::ConfigMonsterAlerts* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigMonsterAlerts*))((::PBYTE)hIl2Cpp + CLASS_1_5E2A8BD9D2714BA0_METHOD_1_C1484A31916D6492_OFFSET))(a1);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5E2A8BD9D2714BA0_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigMonsterAlertItem* Method_1_C61A70F72A355F40(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigMonsterAlertItem*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5E2A8BD9D2714BA0_METHOD_1_C61A70F72A355F40_OFFSET))(a1);
	}

	static ::MoleMole::Config::ConfigMonsterAlerts* Method_1_9C883562F1FCFBBC()
	{
		return ((::MoleMole::Config::ConfigMonsterAlerts*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E2A8BD9D2714BA0_METHOD_1_9C883562F1FCFBBC_OFFSET))();
	}
};
