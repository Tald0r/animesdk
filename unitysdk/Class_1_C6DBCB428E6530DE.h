#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTeamEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_C6DBCB428E6530DE_METHOD_1_513A8522D4B84F57_OFFSET UNITYSDK_OFFSET(0x727AC30)
#define CLASS_1_C6DBCB428E6530DE_METHOD_1_BDF94EE1FFFB37A9_OFFSET UNITYSDK_OFFSET(0x727AD80)
#define CLASS_1_C6DBCB428E6530DE_METHOD_1_E77B24F9A93470BE_OFFSET UNITYSDK_OFFSET(0x727AA10)
#define CLASS_1_C6DBCB428E6530DE_METHOD_1_FDDC5A41F149A0CC_OFFSET UNITYSDK_OFFSET(0x727AC70)

inline static constexpr unsigned int Class_1_C6DBCB428E6530DE_TypeDefinitionIndex = 69457;

class Class_1_C6DBCB428E6530DE : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigTeamEntity** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigTeamEntity**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6DBCB428E6530DE_TypeDefinitionIndex)->GetStaticField(0x2F640);
	}

	static ::System::Void Method_1_E77B24F9A93470BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C6DBCB428E6530DE_METHOD_1_E77B24F9A93470BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_513A8522D4B84F57(::MoleMole::Config::ConfigTeamEntity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigTeamEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C6DBCB428E6530DE_METHOD_1_513A8522D4B84F57_OFFSET))(a1);
	}

	static ::System::Void Method_1_FDDC5A41F149A0CC(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C6DBCB428E6530DE_METHOD_1_FDDC5A41F149A0CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigTeamEntity* Method_1_BDF94EE1FFFB37A9()
	{
		return ((::MoleMole::Config::ConfigTeamEntity*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6DBCB428E6530DE_METHOD_1_BDF94EE1FFFB37A9_OFFSET))();
	}
};
