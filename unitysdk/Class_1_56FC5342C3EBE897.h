#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigInLevelCustomized; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_56FC5342C3EBE897_METHOD_1_1E33C3DC8993BC5B_OFFSET UNITYSDK_OFFSET(0x8B2AA50)
#define CLASS_1_56FC5342C3EBE897_METHOD_1_346D260AD27D5266_OFFSET UNITYSDK_OFFSET(0x8B2A8C0)
#define CLASS_1_56FC5342C3EBE897_METHOD_1_485414ACB06A9025_OFFSET UNITYSDK_OFFSET(0x8B2A630)
#define CLASS_1_56FC5342C3EBE897_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x8B2A6E0)
#define CLASS_1_56FC5342C3EBE897_METHOD_1_9E815F7B26C84192_OFFSET UNITYSDK_OFFSET(0x8B2A670)

inline static constexpr unsigned int Class_1_56FC5342C3EBE897_TypeDefinitionIndex = 55920;

class Class_1_56FC5342C3EBE897 : public ::System::Object
{
public:
	static ::MoleMole::ConfigInLevelCustomized** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigInLevelCustomized**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56FC5342C3EBE897_TypeDefinitionIndex)->GetStaticField(0x2F600);
	}

	static ::MoleMole::ConfigInLevelCustomized* Method_1_485414ACB06A9025()
	{
		return ((::MoleMole::ConfigInLevelCustomized*(*)())((::PBYTE)hIl2Cpp + CLASS_1_56FC5342C3EBE897_METHOD_1_485414ACB06A9025_OFFSET))();
	}

	static ::System::Void Method_1_9E815F7B26C84192(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_56FC5342C3EBE897_METHOD_1_9E815F7B26C84192_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_346D260AD27D5266(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_56FC5342C3EBE897_METHOD_1_346D260AD27D5266_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_1E33C3DC8993BC5B(::MoleMole::ConfigInLevelCustomized* a1)
	{
		return ((::System::Void(*)(::MoleMole::ConfigInLevelCustomized*))((::PBYTE)hIl2Cpp + CLASS_1_56FC5342C3EBE897_METHOD_1_1E33C3DC8993BC5B_OFFSET))(a1);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_56FC5342C3EBE897_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}
};
